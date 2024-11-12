/**
 * @file Treesitter grammar for Poryscript language
 * @author Henry Wenger-Stickel <hwengerstickel@pm.me>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'poryscript',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.comment,
      $.const,
      $.script,
      $.mart
    ),

    comment: _ => token(prec(-10, choice(/#.*/, /\/\/.*/))),

    const: $ => seq('const', field('const_name', $.identifier), $.additives, $._expression),

    number: $ => /\d+/,

    identifier: $ => /[a-zA-Z0-9_]+/,

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"\\\n]+/,
        $.escape_sequence,
        $.interpolation,
      )),
      '"'
    ),

    interpolation: $ => seq(
      '{',
      $.identifier,
      '}',
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        '"', '\\', 'p', 'n', 'l', 'N'
      )
    )),

    _meta_function_pass: $ => choice($.identifier, $.string),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.arithmetic_expression
    ),

    arithmetic_expression: $ => prec.left(1, seq(
      $._expression,
      $.additives,
      $._expression
    )),

    function_call: $ => prec(2, seq(
      field('function_name', $.identifier),
      optional(seq(
        '(',
        field('function_params', optional(
          commaSep1($._meta_function_pass)
        )),
        ')',
      ))
    )),

    negate: $ => '!',

    operator: $ => choice('==', '!=', '>', '>=', '<', '<='),

    additives: $ => choice('=', '-', '+', '/', '*'),

    boolean : $ => choice('TRUE', 'true', 'FALSE', 'false'),

    _boolean_expression: $ => seq(
      optional($.negate),
      choice($.identifier, $.function_call),
      // After here we get into specific operator calls, before this it can be implicit
      // boolean checks.
      optional(seq(
        $.operator,
        choice(
          $._expression,
          $.boolean,
          $.string,
        )
      )),
    ),

    if_statement: $ => seq(
      'if',
      '(',
      $._boolean_expression,
      ')',
      '{',
      $.scripting,
      '}',
    ),

    scope: $ => choice('local', 'global'),

    script: $ => seq(
      'script',
      optional(seq('(', $.scope, ')')),
      field('script_name', $.identifier),
      '{',
      $.scripting,
      '}',
    ),

    scripting: $ => repeat1(choice(
      $.comment,
      $.identifier,
      $.function_call,
      $.if_statement,
    )),

    mart: $ => seq(
      'mart',
      optional(seq('(', $.scope, ')')),
      field('mart_name', $.identifier),
      '{',
      repeat($.identifier),
      '}',
    ),
  }
});

function commaSep1(rule) {
  return sep1(rule, ',');
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
