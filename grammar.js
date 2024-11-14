/**
 * @file Treesitter grammar for Poryscript language
 * @author Henry Wenger-Stickel <hwengerstickel@pm.me>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'poryscript',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.const,
      $.script,
      $.mart,
      $.text,
      $.movement,
      $.mapscripts,
      $.raw,
    ),

    comment: _ => token(prec(-10, choice(/#.*/, /\/\/.*/))),

    const: $ => seq('const', field('const_name', $.identifier), $.additives, $._expression),

    number: $ => /\d+/,

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    string: $ => seq(
      '"',
      repeat(choice(
        /[^"\\\n{}]+/,
        $.interpolation,
        $.escape_sequence,
      )),
      '"'
    ),

    interpolation: $ => seq(
      '{',
      repeat1($.identifier),
      '}',
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        '"', '\\', 'p', 'n', 'l', 'N'
      )
    )),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.arithmetic_expression
    ),

    _movement_expression: $ => prec.left(choice(
      seq($.function_call, $.additives, $.number, optional(seq($.additives, $._movement_expression))),
      $.function_call,
    )),

    arithmetic_expression: $ => prec.left(1, seq(
      $._expression,
      $.additives,
      $._expression
    )),

    _meta_function_call: $ => $._comparators,

    _comparators: $ => choice($.number, $.identifier, $.boolean, $.string, $.function_call),

    builtin_func: $ => choice('call', 'goto', 'flag', 'var', 'defeated', 'value', 'format'),

    builtin_control_flow: $ => choice('end', 'return', 'break', 'continue'),

    function_call: $ => prec(2, seq(
      choice($.builtin_func, $.builtin_control_flow, field('function_name', $.identifier)),
      optional(seq(
        '(',
        field('function_params', optional(
          commaSep1($._meta_function_call)
        )),
        ')',
      ))
    )),

    negate: $ => '!',

    operator: $ => choice('==', '!=', '>', '>=', '<', '<='),

    additives: $ => choice('=', '-', '+', '/', '*'),

    boolean: $ => choice('TRUE', 'true', 'FALSE', 'false'),

    text_directive: $ => choice('ascii', 'custom'),

    logical_operator : $ => choice('||', '&&'),

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
      // We can also repeat with and/or
      optional(seq(
        $.logical_operator,
        $._boolean_expression,
      )),
    ),

    while_statement: $ => seq(
      'while',
      optional(seq(
        '(',
        $._boolean_expression,
        ')'
      )),
      '{',
      $.scripting,
      '}',
    ),

    do_while_statement: $ => seq(
      'do',
      '{',
      $.scripting,
      '}',
      'while',
      seq(
        '(',
        $._boolean_expression,
        ')'
      ),
    ),

    switch_statement: $ => seq(
      'switch',
      '(',
      $._boolean_expression,
      ')',
      '{',
      // We can have stuff like `case 0` or just `default`.
      repeat1(seq(
        choice(
          (seq("case", $.number)),
          "default",
        ),
        ":",
        $.scripting,
      )),
      '}',
    ),

    default: $ => "_",

    poryswitch: $ => seq(
      'poryswitch',
      '(',
      field('comptime_var', $.identifier),
      ')',
      '{',
      // We can have stuff like `case 0` or just `default`.
      repeat1(seq(
        choice(
          seq($.identifier, "{", $.scripting, "}"),
          seq($.default, ":", $.scripting),
        ),
      )),
      '}',
    ),

    if_statement: $ => seq(
      'if',
      '(',
      $._boolean_expression,
      ')',
      '{',
      $.scripting,
      '}',
      // Elif chains
      repeat(seq(
        'elif',
        '(',
        $._boolean_expression,
        ')',
        '{',
        $.scripting,
        '}',
      )),
      // Final else
      optional(seq(
        'else',
        '{',
        $.scripting,
        '}',

      ))
    ),

    scope_marker: $ => choice('local', 'global'),

    scope: $ => seq('(', $.scope_marker, ')'),

    script: $ => seq(
      'script',
      optional($.scope),
      field('name', $.identifier),
      '{',
      $.scripting,
      '}',
    ),

    colon: $ => ":",

    label: $ => seq(
      field('name', $.identifier),
      optional($.scope),
      $.colon,
      $.scripting,
    ),

    scripting: $ => prec.left(repeat1(choice(
      $.function_call,
      $.if_statement,
      $.while_statement,
      $.do_while_statement,
      $.switch_statement,
      $.label,
      $.poryswitch,
    ))),

    mart: $ => seq(
      'mart',
      optional($.scope),
      field('name', $.identifier),
      '{',
      repeat($.identifier),
      '}',
    ),

    text: $ => seq(
      'text',
      optional($.scope),
      field('name', $.identifier),
      '{',
      repeat(seq(
        // We can have `ascii` or `custom` prefixes
        optional(seq($.text_directive)),
        $.string,
      )),
      '}',
    ),

    movement: $ => seq(
      'movement',
      optional($.scope),
      field('name', $.identifier),
      '{',
      repeat(seq($._movement_expression, optional(','))),
      '}',
    ),

    mapscripts: $ => seq(
      'mapscripts',
      optional($.scope),
      field('name', $.identifier),
      '{',
      // So for this we have a couple ways this can appear.
      repeat(choice(
        // FOO: MyNewCity_OnFoo
        seq($.identifier, ':', $.identifier),
        // FOO { random(2) }
        seq($.identifier, '{', $.scripting, '}'),
        seq(
          $.identifier,
          '[',
          repeat1(seq(
            $.identifier,
            ',',
            $._comparators,
            choice(
              seq(':', $.identifier),
              seq('{', $.scripting, '}'),
            ),
          )),
          ']'
        ),
      )),
      '}',
    ),

    raw: $ => seq('raw', '`', optional($.raw_inside), '`'),

    raw_inside: $ => /[^`]+/,
  }
});

function commaSep1(rule) {
  return sep1(rule, ',');
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
