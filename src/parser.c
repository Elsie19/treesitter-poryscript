#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 310
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_const = 2,
  sym_number = 3,
  sym_identifier = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_string_token1 = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  sym_escape_sequence = 9,
  anon_sym_call = 10,
  anon_sym_goto = 11,
  anon_sym_flag = 12,
  anon_sym_var = 13,
  anon_sym_defeated = 14,
  anon_sym_value = 15,
  anon_sym_format = 16,
  anon_sym_end = 17,
  anon_sym_return = 18,
  anon_sym_break = 19,
  anon_sym_continue = 20,
  anon_sym_LPAREN = 21,
  anon_sym_COMMA = 22,
  anon_sym_RPAREN = 23,
  sym_negate = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_EQ = 31,
  anon_sym_DASH = 32,
  anon_sym_PLUS = 33,
  anon_sym_SLASH = 34,
  anon_sym_STAR = 35,
  anon_sym_TRUE = 36,
  anon_sym_true = 37,
  anon_sym_FALSE = 38,
  anon_sym_false = 39,
  anon_sym_ascii = 40,
  anon_sym_custom = 41,
  anon_sym_PIPE_PIPE = 42,
  anon_sym_AMP_AMP = 43,
  anon_sym_while = 44,
  anon_sym_do = 45,
  anon_sym_switch = 46,
  anon_sym_case = 47,
  anon_sym_default = 48,
  anon_sym_COLON = 49,
  anon_sym_if = 50,
  anon_sym_elif = 51,
  anon_sym_else = 52,
  anon_sym_local = 53,
  anon_sym_global = 54,
  anon_sym_script = 55,
  anon_sym_mart = 56,
  anon_sym_text = 57,
  anon_sym_movement = 58,
  anon_sym_mapscripts = 59,
  anon_sym_LBRACK = 60,
  anon_sym_RBRACK = 61,
  sym_source_file = 62,
  sym__definition = 63,
  sym_const = 64,
  sym_string = 65,
  sym_interpolation = 66,
  sym__meta_function_pass = 67,
  sym__expression = 68,
  sym__movement_expression = 69,
  sym_arithmetic_expression = 70,
  sym__comparators = 71,
  sym_builtin_func = 72,
  sym_builtin_control_flow = 73,
  sym_function_call = 74,
  sym_operator = 75,
  sym_additives = 76,
  sym_boolean = 77,
  sym_text_directive = 78,
  sym_logical_operator = 79,
  sym__boolean_expression = 80,
  sym_while_statement = 81,
  sym_do_while_statement = 82,
  sym_switch_statement = 83,
  sym_if_statement = 84,
  sym_scope_marker = 85,
  sym_scope = 86,
  sym_script = 87,
  sym_label = 88,
  sym_scripting = 89,
  sym_mart = 90,
  sym_text = 91,
  sym_movement = 92,
  sym_mapscripts = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym_string_repeat1 = 95,
  aux_sym_interpolation_repeat1 = 96,
  aux_sym_function_call_repeat1 = 97,
  aux_sym_switch_statement_repeat1 = 98,
  aux_sym_if_statement_repeat1 = 99,
  aux_sym_scripting_repeat1 = 100,
  aux_sym_text_repeat1 = 101,
  aux_sym_movement_repeat1 = 102,
  aux_sym_mapscripts_repeat1 = 103,
  aux_sym_mapscripts_repeat2 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_const] = "const",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_call] = "call",
  [anon_sym_goto] = "goto",
  [anon_sym_flag] = "flag",
  [anon_sym_var] = "var",
  [anon_sym_defeated] = "defeated",
  [anon_sym_value] = "value",
  [anon_sym_format] = "format",
  [anon_sym_end] = "end",
  [anon_sym_return] = "return",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_negate] = "negate",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_true] = "true",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_false] = "false",
  [anon_sym_ascii] = "ascii",
  [anon_sym_custom] = "custom",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_while] = "while",
  [anon_sym_do] = "do",
  [anon_sym_switch] = "switch",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_local] = "local",
  [anon_sym_global] = "global",
  [anon_sym_script] = "script",
  [anon_sym_mart] = "mart",
  [anon_sym_text] = "text",
  [anon_sym_movement] = "movement",
  [anon_sym_mapscripts] = "mapscripts",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_const] = "const",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__meta_function_pass] = "_meta_function_pass",
  [sym__expression] = "_expression",
  [sym__movement_expression] = "_movement_expression",
  [sym_arithmetic_expression] = "arithmetic_expression",
  [sym__comparators] = "_comparators",
  [sym_builtin_func] = "builtin_func",
  [sym_builtin_control_flow] = "builtin_control_flow",
  [sym_function_call] = "function_call",
  [sym_operator] = "operator",
  [sym_additives] = "additives",
  [sym_boolean] = "boolean",
  [sym_text_directive] = "text_directive",
  [sym_logical_operator] = "logical_operator",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_while_statement] = "while_statement",
  [sym_do_while_statement] = "do_while_statement",
  [sym_switch_statement] = "switch_statement",
  [sym_if_statement] = "if_statement",
  [sym_scope_marker] = "scope_marker",
  [sym_scope] = "scope",
  [sym_script] = "script",
  [sym_label] = "label",
  [sym_scripting] = "scripting",
  [sym_mart] = "mart",
  [sym_text] = "text",
  [sym_movement] = "movement",
  [sym_mapscripts] = "mapscripts",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_scripting_repeat1] = "scripting_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_movement_repeat1] = "movement_repeat1",
  [aux_sym_mapscripts_repeat1] = "mapscripts_repeat1",
  [aux_sym_mapscripts_repeat2] = "mapscripts_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_const] = anon_sym_const,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_flag] = anon_sym_flag,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_defeated] = anon_sym_defeated,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_negate] = sym_negate,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_ascii] = anon_sym_ascii,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_local] = anon_sym_local,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_mart] = anon_sym_mart,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_movement] = anon_sym_movement,
  [anon_sym_mapscripts] = anon_sym_mapscripts,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_const] = sym_const,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__meta_function_pass] = sym__meta_function_pass,
  [sym__expression] = sym__expression,
  [sym__movement_expression] = sym__movement_expression,
  [sym_arithmetic_expression] = sym_arithmetic_expression,
  [sym__comparators] = sym__comparators,
  [sym_builtin_func] = sym_builtin_func,
  [sym_builtin_control_flow] = sym_builtin_control_flow,
  [sym_function_call] = sym_function_call,
  [sym_operator] = sym_operator,
  [sym_additives] = sym_additives,
  [sym_boolean] = sym_boolean,
  [sym_text_directive] = sym_text_directive,
  [sym_logical_operator] = sym_logical_operator,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_while_statement] = sym_while_statement,
  [sym_do_while_statement] = sym_do_while_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_scope_marker] = sym_scope_marker,
  [sym_scope] = sym_scope,
  [sym_script] = sym_script,
  [sym_label] = sym_label,
  [sym_scripting] = sym_scripting,
  [sym_mart] = sym_mart,
  [sym_text] = sym_text,
  [sym_movement] = sym_movement,
  [sym_mapscripts] = sym_mapscripts,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_interpolation_repeat1] = aux_sym_interpolation_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_scripting_repeat1] = aux_sym_scripting_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_movement_repeat1] = aux_sym_movement_repeat1,
  [aux_sym_mapscripts_repeat1] = aux_sym_mapscripts_repeat1,
  [aux_sym_mapscripts_repeat2] = aux_sym_mapscripts_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_negate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_local] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_movement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mapscripts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__meta_function_pass] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__movement_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_arithmetic_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__comparators] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_func] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_control_flow] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_additives] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_text_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_scripting] = {
    .visible = true,
    .named = true,
  },
  [sym_mart] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_movement] = {
    .visible = true,
    .named = true,
  },
  [sym_mapscripts] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_switch_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scripting_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_movement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mapscripts_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mapscripts_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_const_name = 1,
  field_function_name = 2,
  field_function_params = 3,
  field_name = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_const_name] = "const_name",
  [field_function_name] = "function_name",
  [field_function_params] = "function_params",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 3},
  [9] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_const_name, 1},
  [1] =
    {field_function_name, 0},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 2},
  [4] =
    {field_name, 0},
  [5] =
    {field_function_name, 0},
    {field_function_params, 2},
  [7] =
    {field_function_params, 2},
  [8] =
    {field_function_name, 0},
    {field_function_params, 2},
    {field_function_params, 3},
  [11] =
    {field_function_params, 2},
    {field_function_params, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 3,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 2,
  [25] = 25,
  [26] = 3,
  [27] = 27,
  [28] = 28,
  [29] = 11,
  [30] = 30,
  [31] = 27,
  [32] = 32,
  [33] = 30,
  [34] = 32,
  [35] = 16,
  [36] = 17,
  [37] = 23,
  [38] = 38,
  [39] = 25,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 7,
  [47] = 5,
  [48] = 6,
  [49] = 6,
  [50] = 7,
  [51] = 41,
  [52] = 43,
  [53] = 53,
  [54] = 44,
  [55] = 55,
  [56] = 56,
  [57] = 42,
  [58] = 5,
  [59] = 18,
  [60] = 15,
  [61] = 45,
  [62] = 62,
  [63] = 12,
  [64] = 13,
  [65] = 65,
  [66] = 66,
  [67] = 14,
  [68] = 15,
  [69] = 18,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 10,
  [76] = 12,
  [77] = 13,
  [78] = 14,
  [79] = 10,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 65,
  [87] = 62,
  [88] = 88,
  [89] = 66,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 70,
  [95] = 71,
  [96] = 96,
  [97] = 97,
  [98] = 85,
  [99] = 72,
  [100] = 100,
  [101] = 100,
  [102] = 73,
  [103] = 74,
  [104] = 92,
  [105] = 96,
  [106] = 97,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 123,
  [125] = 122,
  [126] = 123,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 170,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 189,
  [193] = 193,
  [194] = 182,
  [195] = 195,
  [196] = 196,
  [197] = 189,
  [198] = 193,
  [199] = 182,
  [200] = 195,
  [201] = 201,
  [202] = 187,
  [203] = 203,
  [204] = 195,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 193,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 119,
  [218] = 218,
  [219] = 212,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 232,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 236,
  [267] = 262,
  [268] = 241,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 270,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 271,
  [282] = 282,
  [283] = 283,
  [284] = 272,
  [285] = 285,
  [286] = 286,
  [287] = 257,
  [288] = 263,
  [289] = 264,
  [290] = 226,
  [291] = 261,
  [292] = 274,
  [293] = 279,
  [294] = 280,
  [295] = 283,
  [296] = 285,
  [297] = 259,
  [298] = 276,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 282,
  [303] = 303,
  [304] = 304,
  [305] = 269,
  [306] = 304,
  [307] = 260,
  [308] = 303,
  [309] = 247,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(142);
      ADVANCE_MAP(
        '!', 268,
        '"', 235,
        '#', 143,
        '&', 12,
        '(', 264,
        ')', 266,
        '*', 280,
        '+', 278,
        ',', 265,
        '-', 277,
        '/', 279,
        ':', 303,
        '<', 273,
        '=', 276,
        '>', 271,
        'F', 16,
        'T', 20,
        '[', 319,
        '\\', 138,
        ']', 320,
        'a', 109,
        'b', 105,
        'c', 23,
        'd', 54,
        'e', 77,
        'f', 24,
        'g', 82,
        'i', 61,
        'l', 98,
        'm', 25,
        'r', 56,
        's', 39,
        't', 46,
        'v', 26,
        'w', 67,
        '{', 239,
        '|', 137,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == '{') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '{') ADVANCE(239);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 14,
        '#', 143,
        '&', 12,
        '(', 264,
        ')', 266,
        '/', 13,
        ':', 303,
        '<', 273,
        '=', 15,
        '>', 271,
        'b', 217,
        'c', 158,
        'd', 179,
        'e', 208,
        'f', 202,
        'g', 212,
        'i', 183,
        'r', 178,
        's', 233,
        'v', 154,
        'w', 189,
        '|', 137,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 267,
        '#', 143,
        ',', 265,
        '/', 13,
        'b', 217,
        'c', 158,
        'd', 180,
        'e', 208,
        'f', 202,
        'g', 212,
        'r', 178,
        'v', 154,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '"', 235,
        '#', 143,
        ')', 266,
        '/', 13,
        'F', 146,
        'T', 150,
        'f', 161,
        'g', 204,
        'l', 215,
        't', 219,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '"', 235,
        '#', 143,
        ')', 266,
        '/', 13,
        'F', 146,
        'T', 150,
        'f', 161,
        't', 219,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        '#', 143,
        '&', 12,
        '(', 264,
        ')', 266,
        '*', 280,
        '+', 278,
        ',', 265,
        '-', 277,
        '/', 279,
        '=', 275,
        'b', 217,
        'c', 158,
        'd', 180,
        'e', 208,
        'f', 202,
        'g', 212,
        'r', 178,
        'v', 154,
        '|', 137,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '(') ADVANCE(264);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == '}') ADVANCE(240);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 143,
        '(', 264,
        '/', 13,
        ':', 303,
        'b', 217,
        'c', 153,
        'd', 176,
        'e', 208,
        'f', 202,
        'g', 212,
        'i', 183,
        'r', 178,
        's', 233,
        'v', 154,
        'w', 189,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 143,
        '/', 13,
        'b', 217,
        'c', 153,
        'd', 176,
        'e', 198,
        'f', 202,
        'g', 212,
        'i', 183,
        'r', 178,
        's', 233,
        'v', 154,
        'w', 189,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 143,
        '/', 13,
        'b', 217,
        'c', 158,
        'd', 179,
        'e', 198,
        'f', 202,
        'g', 212,
        'i', 183,
        'r', 178,
        's', 233,
        'v', 154,
        'w', 189,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(292);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(281);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(285);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(17);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(250);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(304);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(306);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(246);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(260);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 136:
      if (lookahead == 'x') ADVANCE(118);
      END_STATE();
    case 137:
      if (lookahead == '|') ADVANCE(291);
      END_STATE();
    case 138:
      if (lookahead == '"' ||
          lookahead == 'N' ||
          lookahead == '\\' ||
          lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'p') ADVANCE(241);
      END_STATE();
    case 139:
      if (eof) ADVANCE(142);
      ADVANCE_MAP(
        '!', 268,
        '"', 235,
        '#', 143,
        '&', 12,
        '(', 264,
        ')', 266,
        '*', 280,
        '+', 278,
        ',', 265,
        '-', 277,
        '/', 279,
        ':', 303,
        '<', 273,
        '=', 276,
        '>', 271,
        'F', 16,
        'T', 20,
        '[', 319,
        ']', 320,
        'a', 109,
        'b', 105,
        'c', 23,
        'd', 54,
        'e', 77,
        'f', 24,
        'g', 82,
        'i', 61,
        'l', 98,
        'm', 25,
        'r', 56,
        's', 39,
        't', 46,
        'v', 26,
        'w', 67,
        '{', 239,
        '|', 137,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 140:
      if (eof) ADVANCE(142);
      ADVANCE_MAP(
        '!', 14,
        '"', 235,
        '#', 143,
        '&', 12,
        '(', 264,
        ')', 266,
        ',', 265,
        '/', 13,
        ':', 303,
        '<', 273,
        '=', 15,
        '>', 271,
        '[', 319,
        'a', 109,
        'c', 35,
        'd', 59,
        'g', 81,
        'l', 98,
        'm', 25,
        's', 38,
        't', 45,
        'w', 67,
        '{', 239,
        '|', 137,
        '}', 240,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 141:
      if (eof) ADVANCE(142);
      ADVANCE_MAP(
        '#', 143,
        '&', 12,
        ')', 266,
        '*', 280,
        '+', 278,
        '-', 277,
        '/', 279,
        '=', 275,
        'c', 100,
        'm', 25,
        's', 38,
        't', 45,
        '|', 137,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 's') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(197);
      if (lookahead == 's') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(238);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_flag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_defeated);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_defeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_format);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_negate);
      if (lookahead == '=') ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_ascii);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_mart);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_movement);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_mapscripts);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 140},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 141},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 140},
  [110] = {.lex_state = 140},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 141},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 140},
  [121] = {.lex_state = 140},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 140},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 140},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 140},
  [134] = {.lex_state = 140},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 140},
  [138] = {.lex_state = 140},
  [139] = {.lex_state = 140},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 140},
  [142] = {.lex_state = 140},
  [143] = {.lex_state = 140},
  [144] = {.lex_state = 140},
  [145] = {.lex_state = 140},
  [146] = {.lex_state = 140},
  [147] = {.lex_state = 140},
  [148] = {.lex_state = 140},
  [149] = {.lex_state = 140},
  [150] = {.lex_state = 140},
  [151] = {.lex_state = 140},
  [152] = {.lex_state = 140},
  [153] = {.lex_state = 140},
  [154] = {.lex_state = 140},
  [155] = {.lex_state = 140},
  [156] = {.lex_state = 140},
  [157] = {.lex_state = 140},
  [158] = {.lex_state = 140},
  [159] = {.lex_state = 140},
  [160] = {.lex_state = 140},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 140},
  [166] = {.lex_state = 140},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 140},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 140},
  [171] = {.lex_state = 140},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 140},
  [174] = {.lex_state = 140},
  [175] = {.lex_state = 8},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 140},
  [179] = {.lex_state = 140},
  [180] = {.lex_state = 140},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 140},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 140},
  [188] = {.lex_state = 140},
  [189] = {.lex_state = 140},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 140},
  [193] = {.lex_state = 140},
  [194] = {.lex_state = 140},
  [195] = {.lex_state = 140},
  [196] = {.lex_state = 140},
  [197] = {.lex_state = 140},
  [198] = {.lex_state = 140},
  [199] = {.lex_state = 140},
  [200] = {.lex_state = 140},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 140},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 140},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 140},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 140},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 140},
  [215] = {.lex_state = 140},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 8},
  [218] = {.lex_state = 140},
  [219] = {.lex_state = 140},
  [220] = {.lex_state = 8},
  [221] = {.lex_state = 8},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 140},
  [226] = {.lex_state = 140},
  [227] = {.lex_state = 140},
  [228] = {.lex_state = 140},
  [229] = {.lex_state = 140},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 140},
  [232] = {.lex_state = 140},
  [233] = {.lex_state = 140},
  [234] = {.lex_state = 8},
  [235] = {.lex_state = 140},
  [236] = {.lex_state = 140},
  [237] = {.lex_state = 140},
  [238] = {.lex_state = 8},
  [239] = {.lex_state = 140},
  [240] = {.lex_state = 140},
  [241] = {.lex_state = 140},
  [242] = {.lex_state = 140},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 140},
  [245] = {.lex_state = 140},
  [246] = {.lex_state = 140},
  [247] = {.lex_state = 140},
  [248] = {.lex_state = 140},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 140},
  [251] = {.lex_state = 140},
  [252] = {.lex_state = 140},
  [253] = {.lex_state = 140},
  [254] = {.lex_state = 140},
  [255] = {.lex_state = 140},
  [256] = {.lex_state = 140},
  [257] = {.lex_state = 140},
  [258] = {.lex_state = 140},
  [259] = {.lex_state = 140},
  [260] = {.lex_state = 140},
  [261] = {.lex_state = 140},
  [262] = {.lex_state = 140},
  [263] = {.lex_state = 140},
  [264] = {.lex_state = 140},
  [265] = {.lex_state = 8},
  [266] = {.lex_state = 140},
  [267] = {.lex_state = 140},
  [268] = {.lex_state = 140},
  [269] = {.lex_state = 140},
  [270] = {.lex_state = 140},
  [271] = {.lex_state = 140},
  [272] = {.lex_state = 140},
  [273] = {.lex_state = 140},
  [274] = {.lex_state = 140},
  [275] = {.lex_state = 140},
  [276] = {.lex_state = 140},
  [277] = {.lex_state = 140},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 140},
  [280] = {.lex_state = 140},
  [281] = {.lex_state = 140},
  [282] = {.lex_state = 140},
  [283] = {.lex_state = 140},
  [284] = {.lex_state = 140},
  [285] = {.lex_state = 140},
  [286] = {.lex_state = 140},
  [287] = {.lex_state = 140},
  [288] = {.lex_state = 140},
  [289] = {.lex_state = 140},
  [290] = {.lex_state = 140},
  [291] = {.lex_state = 140},
  [292] = {.lex_state = 140},
  [293] = {.lex_state = 140},
  [294] = {.lex_state = 140},
  [295] = {.lex_state = 140},
  [296] = {.lex_state = 140},
  [297] = {.lex_state = 140},
  [298] = {.lex_state = 140},
  [299] = {.lex_state = 8},
  [300] = {.lex_state = 140},
  [301] = {.lex_state = 140},
  [302] = {.lex_state = 140},
  [303] = {.lex_state = 140},
  [304] = {.lex_state = 140},
  [305] = {.lex_state = 140},
  [306] = {.lex_state = 140},
  [307] = {.lex_state = 140},
  [308] = {.lex_state = 140},
  [309] = {.lex_state = 140},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_const] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_flag] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_defeated] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_negate] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_ascii] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_mart] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_movement] = ACTIONS(1),
    [anon_sym_mapscripts] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(300),
    [sym__definition] = STATE(110),
    [sym_const] = STATE(110),
    [sym_script] = STATE(110),
    [sym_mart] = STATE(110),
    [sym_text] = STATE(110),
    [sym_movement] = STATE(110),
    [sym_mapscripts] = STATE(110),
    [aux_sym_source_file_repeat1] = STATE(110),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_script] = ACTIONS(11),
    [anon_sym_mart] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(15),
    [anon_sym_movement] = ACTIONS(17),
    [anon_sym_mapscripts] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      anon_sym_while,
    ACTIONS(35), 1,
      anon_sym_do,
    ACTIONS(38), 1,
      anon_sym_switch,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(41), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(46), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(29), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(26), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(2), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [54] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(54), 1,
      anon_sym_while,
    ACTIONS(56), 1,
      anon_sym_do,
    ACTIONS(58), 1,
      anon_sym_switch,
    ACTIONS(62), 1,
      anon_sym_if,
    ACTIONS(60), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(46), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(52), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(50), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(2), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [108] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(46), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(2), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
    ACTIONS(60), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [148] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(66), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(64), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [183] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(70), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(68), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [218] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(72), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [255] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(229), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [305] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(231), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [355] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(94), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(92), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [389] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(86), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(26), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [439] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(98), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(96), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [473] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(102), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(100), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [507] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(106), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(104), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [541] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(110), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(108), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [575] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(236), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [625] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(241), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [675] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(114), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(112), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [709] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(24), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [759] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(253), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [809] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_while,
    ACTIONS(56), 1,
      anon_sym_do,
    ACTIONS(58), 1,
      anon_sym_switch,
    ACTIONS(62), 1,
      anon_sym_if,
    STATE(179), 1,
      sym_scripting,
    STATE(46), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(52), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(50), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(3), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [859] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_while,
    ACTIONS(56), 1,
      anon_sym_do,
    ACTIONS(58), 1,
      anon_sym_switch,
    ACTIONS(62), 1,
      anon_sym_if,
    STATE(180), 1,
      sym_scripting,
    STATE(46), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(52), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(50), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(3), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [909] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(277), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [959] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_while,
    ACTIONS(128), 1,
      anon_sym_do,
    ACTIONS(131), 1,
      anon_sym_switch,
    ACTIONS(134), 1,
      anon_sym_if,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(122), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(119), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(24), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1009] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(284), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1059] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(24), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
    ACTIONS(60), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [1097] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_while,
    ACTIONS(56), 1,
      anon_sym_do,
    ACTIONS(58), 1,
      anon_sym_switch,
    ACTIONS(62), 1,
      anon_sym_if,
    STATE(62), 1,
      sym_scripting,
    STATE(46), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(52), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(50), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(4), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1147] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(251), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1197] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_while,
    ACTIONS(56), 1,
      anon_sym_do,
    ACTIONS(58), 1,
      anon_sym_switch,
    ACTIONS(62), 1,
      anon_sym_if,
    STATE(65), 1,
      sym_scripting,
    STATE(46), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(52), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(50), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(4), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1247] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(302), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1297] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(87), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(26), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1347] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(267), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1397] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(282), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1447] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(262), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1497] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(266), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1547] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(268), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1597] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(270), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1647] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(271), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1697] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(272), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1747] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_while,
    ACTIONS(86), 1,
      anon_sym_do,
    ACTIONS(88), 1,
      anon_sym_switch,
    ACTIONS(90), 1,
      anon_sym_if,
    STATE(281), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(19), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1797] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_COLON,
    STATE(258), 1,
      sym_scope,
    ACTIONS(137), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [1833] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_elif,
    ACTIONS(151), 1,
      anon_sym_else,
    STATE(43), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(145), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [1869] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_elif,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      anon_sym_else,
    STATE(44), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(153), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [1905] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 1,
      anon_sym_elif,
    STATE(44), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(159), 19,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
      anon_sym_else,
  [1939] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 20,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
  [1968] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [1998] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(64), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2026] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(68), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(68), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(72), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2112] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_COLON,
    STATE(232), 1,
      sym_scope,
    ACTIONS(137), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [2146] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      anon_sym_elif,
    ACTIONS(180), 1,
      anon_sym_else,
    STATE(54), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(153), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [2180] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(137), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2210] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_elif,
    STATE(54), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(159), 17,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
      anon_sym_else,
  [2242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(108), 1,
      sym_additives,
    ACTIONS(189), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(191), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(187), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2274] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(228), 1,
      sym_additives,
    ACTIONS(195), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(197), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(193), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2306] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      anon_sym_elif,
    ACTIONS(199), 1,
      anon_sym_else,
    STATE(52), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(145), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [2340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(64), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2368] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2395] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2422] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(166), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
  [2449] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(96), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(100), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2530] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2557] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(104), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(108), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(112), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2665] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2692] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2719] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2746] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2773] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2800] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2827] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2854] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2881] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(104), 18,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [2908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(92), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [2935] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_function_call,
    STATE(80), 1,
      aux_sym_movement_repeat1,
    STATE(114), 1,
      sym__movement_expression,
    STATE(50), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(241), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(238), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2973] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_function_call,
    STATE(80), 1,
      aux_sym_movement_repeat1,
    STATE(114), 1,
      sym__movement_expression,
    STATE(50), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(250), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(248), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3011] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_function_call,
    STATE(80), 1,
      aux_sym_movement_repeat1,
    STATE(114), 1,
      sym__movement_expression,
    STATE(50), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(250), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(248), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3049] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_function_call,
    STATE(81), 1,
      aux_sym_movement_repeat1,
    STATE(114), 1,
      sym__movement_expression,
    STATE(50), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(250), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(248), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3087] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_function_call,
    STATE(82), 1,
      aux_sym_movement_repeat1,
    STATE(114), 1,
      sym__movement_expression,
    STATE(50), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(250), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(248), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3125] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(296), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3160] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [3185] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [3210] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(301), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3245] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [3270] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(235), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3305] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(244), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3340] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(247), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3375] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(255), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3410] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [3435] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [3460] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(280), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3495] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(283), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3530] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(285), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3565] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [3590] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(276), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3625] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(298), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3660] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [3685] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 16,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [3710] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(309), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3745] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(294), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3780] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_negate,
    STATE(131), 1,
      sym_function_call,
    STATE(295), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(172), 1,
      sym_additives,
    ACTIONS(262), 15,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [3839] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(56), 1,
      sym_function_call,
    STATE(115), 1,
      sym__movement_expression,
    STATE(50), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(250), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(248), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3871] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 1,
      anon_sym_const,
    ACTIONS(269), 1,
      anon_sym_script,
    ACTIONS(272), 1,
      anon_sym_mart,
    ACTIONS(275), 1,
      anon_sym_text,
    ACTIONS(278), 1,
      anon_sym_movement,
    ACTIONS(281), 1,
      anon_sym_mapscripts,
    STATE(109), 8,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      sym_movement,
      sym_mapscripts,
      aux_sym_source_file_repeat1,
  [3906] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_const,
    ACTIONS(11), 1,
      anon_sym_script,
    ACTIONS(13), 1,
      anon_sym_mart,
    ACTIONS(15), 1,
      anon_sym_text,
    ACTIONS(17), 1,
      anon_sym_movement,
    ACTIONS(19), 1,
      anon_sym_mapscripts,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    STATE(109), 8,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      sym_movement,
      sym_mapscripts,
      aux_sym_source_file_repeat1,
  [3941] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_number,
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_scope_marker,
    ACTIONS(296), 2,
      anon_sym_local,
      anon_sym_global,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
    STATE(189), 4,
      sym_string,
      sym__meta_function_pass,
      sym__comparators,
      sym_boolean,
  [3976] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_identifier,
    STATE(128), 1,
      sym_function_call,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(82), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(80), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [4005] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      sym_number,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_scope_marker,
    ACTIONS(296), 2,
      anon_sym_local,
      anon_sym_global,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
    STATE(197), 4,
      sym_string,
      sym__meta_function_pass,
      sym__comparators,
      sym_boolean,
  [4040] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(306), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [4064] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(312), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [4086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(172), 1,
      sym_additives,
    ACTIONS(197), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(316), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4109] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(320), 1,
      sym_negate,
    ACTIONS(318), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [4130] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [4151] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(324), 12,
      sym_identifier,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
  [4169] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_logical_operator,
    STATE(127), 1,
      sym_operator,
    ACTIONS(137), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4195] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_logical_operator,
    STATE(129), 1,
      sym_operator,
    ACTIONS(137), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4221] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      sym_number,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
    STATE(192), 4,
      sym_string,
      sym__meta_function_pass,
      sym__comparators,
      sym_boolean,
  [4249] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      sym_number,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
    STATE(193), 4,
      sym_string,
      sym__meta_function_pass,
      sym__comparators,
      sym_boolean,
  [4277] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      sym_number,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
    STATE(198), 4,
      sym_string,
      sym__meta_function_pass,
      sym__comparators,
      sym_boolean,
  [4305] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(286), 1,
      sym_number,
    ACTIONS(288), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
    STATE(189), 4,
      sym_string,
      sym__meta_function_pass,
      sym__comparators,
      sym_boolean,
  [4333] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      sym_number,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(350), 1,
      anon_sym_RPAREN,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
    STATE(209), 4,
      sym_string,
      sym__meta_function_pass,
      sym__comparators,
      sym_boolean,
  [4361] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      sym_number,
    ACTIONS(354), 1,
      sym_identifier,
    STATE(136), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(166), 2,
      sym_string,
      sym_boolean,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [4388] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_logical_operator,
    STATE(129), 1,
      sym_operator,
    ACTIONS(360), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4415] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      sym_number,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(135), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(174), 2,
      sym_string,
      sym_boolean,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [4442] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(368), 1,
      sym_number,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
    STATE(214), 4,
      sym_string,
      sym__meta_function_pass,
      sym__comparators,
      sym_boolean,
  [4467] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      sym_logical_operator,
    STATE(127), 1,
      sym_operator,
    ACTIONS(360), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(358), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4494] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      sym_number,
    ACTIONS(376), 1,
      sym_identifier,
    STATE(215), 3,
      sym_string,
      sym__comparators,
      sym_boolean,
    ACTIONS(294), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [4518] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(378), 10,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ascii,
      anon_sym_custom,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON,
  [4534] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(380), 10,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ascii,
      anon_sym_custom,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON,
  [4550] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_logical_operator,
    STATE(172), 1,
      sym_additives,
    ACTIONS(362), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(197), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4574] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_logical_operator,
    STATE(172), 1,
      sym_additives,
    ACTIONS(362), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(197), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4598] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_text_directive,
    ACTIONS(388), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(145), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4619] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_text_directive,
    ACTIONS(395), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(138), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4640] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(398), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4653] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(400), 2,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(402), 5,
      sym_identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [4668] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(404), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4681] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(406), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4694] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(408), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4707] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(410), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4720] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_text_directive,
    ACTIONS(388), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(138), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4741] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_text_directive,
    ACTIONS(388), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(138), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4762] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(416), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4775] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(418), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4788] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(420), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4801] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(422), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4814] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(424), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4827] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(426), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4840] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(428), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4853] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_text_directive,
    ACTIONS(388), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(146), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4874] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(432), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4887] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(434), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4900] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(436), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4913] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(438), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4926] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(440), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4939] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(442), 7,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
      anon_sym_mapscripts,
  [4952] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    ACTIONS(446), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [4970] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_DQUOTE,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
    ACTIONS(452), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(162), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [4988] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    ACTIONS(458), 1,
      anon_sym_DQUOTE,
    ACTIONS(460), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(161), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [5006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(169), 1,
      sym_additives,
    ACTIONS(197), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [5020] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(462), 6,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_COLON,
  [5032] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_logical_operator,
    ACTIONS(362), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [5046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(466), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [5058] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(393), 4,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_ascii,
      anon_sym_custom,
  [5068] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(468), 2,
      sym_number,
      sym_identifier,
    STATE(116), 2,
      sym__expression,
      sym_arithmetic_expression,
  [5080] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(472), 1,
      anon_sym_case,
    ACTIONS(474), 1,
      anon_sym_default,
    STATE(173), 1,
      aux_sym_switch_statement_repeat1,
  [5096] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_case,
    ACTIONS(474), 1,
      anon_sym_default,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      aux_sym_switch_statement_repeat1,
  [5112] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(478), 2,
      sym_number,
      sym_identifier,
    STATE(107), 2,
      sym__expression,
      sym_arithmetic_expression,
  [5124] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(482), 1,
      anon_sym_case,
    ACTIONS(485), 1,
      anon_sym_default,
    STATE(173), 1,
      aux_sym_switch_statement_repeat1,
  [5140] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_logical_operator,
    ACTIONS(362), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [5154] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_identifier,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_interpolation_repeat1,
  [5167] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_mapscripts_repeat1,
  [5180] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    STATE(299), 1,
      sym_scope,
  [5193] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_function_call_repeat1,
  [5206] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(507), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [5215] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(509), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [5224] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(511), 1,
      sym_identifier,
    STATE(249), 1,
      sym_scope,
  [5237] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_function_call_repeat1,
  [5250] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      aux_sym_interpolation_repeat1,
  [5263] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(521), 1,
      sym_identifier,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_mapscripts_repeat2,
  [5276] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_interpolation_repeat1,
  [5289] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      aux_sym_mapscripts_repeat2,
  [5302] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_case,
    ACTIONS(474), 1,
      anon_sym_default,
    STATE(170), 1,
      aux_sym_switch_statement_repeat1,
  [5315] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(240), 1,
      sym_scope_marker,
    ACTIONS(534), 2,
      anon_sym_local,
      anon_sym_global,
  [5326] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_function_call_repeat1,
  [5339] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(278), 1,
      sym_scope,
  [5352] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_mapscripts_repeat2,
  [5365] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_function_call_repeat1,
  [5378] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      aux_sym_function_call_repeat1,
  [5391] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_function_call_repeat1,
  [5404] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_function_call_repeat1,
  [5417] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(554), 1,
      anon_sym_LBRACK,
  [5430] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(199), 1,
      aux_sym_function_call_repeat1,
  [5443] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      aux_sym_function_call_repeat1,
  [5456] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_function_call_repeat1,
  [5469] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_function_call_repeat1,
  [5482] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_mapscripts_repeat2,
  [5495] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_case,
    ACTIONS(474), 1,
      anon_sym_default,
    STATE(171), 1,
      aux_sym_switch_statement_repeat1,
  [5508] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(566), 1,
      sym_identifier,
    STATE(234), 1,
      sym_scope,
  [5521] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_function_call_repeat1,
  [5534] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      aux_sym_mapscripts_repeat2,
  [5547] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_interpolation_repeat1,
  [5560] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_identifier,
    ACTIONS(576), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_mapscripts_repeat1,
  [5573] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      aux_sym_interpolation_repeat1,
  [5586] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_function_call_repeat1,
  [5599] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      aux_sym_interpolation_repeat1,
  [5612] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_LPAREN,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(265), 1,
      sym_scope,
  [5625] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
  [5635] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(592), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [5643] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5651] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      anon_sym_COLON,
  [5661] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(598), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [5669] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(600), 2,
      sym_number,
      sym_identifier,
  [5677] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_string,
  [5687] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      anon_sym_LPAREN,
  [5697] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_identifier,
    STATE(207), 1,
      aux_sym_mapscripts_repeat1,
  [5707] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(606), 2,
      sym_identifier,
      anon_sym_RBRACK,
  [5715] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(608), 2,
      sym_identifier,
      anon_sym_RBRACE,
  [5723] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(610), 2,
      sym_identifier,
      anon_sym_COLON,
  [5731] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(185), 1,
      aux_sym_interpolation_repeat1,
  [5741] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(614), 1,
      sym_number,
  [5748] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_LPAREN,
  [5755] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_LBRACE,
  [5762] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(620), 1,
      sym_number,
  [5769] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
  [5776] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(624), 1,
      sym_identifier,
  [5783] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [5790] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COLON,
  [5797] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_COMMA,
  [5804] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(630), 1,
      sym_identifier,
  [5811] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [5818] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
  [5825] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [5832] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_identifier,
  [5839] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_COLON,
  [5846] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
  [5853] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
  [5860] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
  [5867] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(646), 1,
      sym_identifier,
  [5874] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
  [5881] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
  [5888] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
  [5895] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
  [5902] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_COLON,
  [5909] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(658), 1,
      sym_identifier,
  [5916] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(660), 1,
      anon_sym_DQUOTE,
  [5923] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
  [5930] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
  [5937] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
  [5944] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
  [5951] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
  [5958] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
  [5965] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
  [5972] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_COLON,
  [5979] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_while,
  [5986] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
  [5993] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
  [6000] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_RBRACE,
  [6007] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
  [6014] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_LBRACE,
  [6021] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
  [6028] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACE,
  [6035] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [6042] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
  [6049] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
  [6056] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACE,
  [6063] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
  [6070] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [6077] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
  [6084] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
  [6091] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
  [6098] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RPAREN,
  [6105] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
  [6112] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(716), 1,
      sym_identifier,
  [6119] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_LBRACE,
  [6126] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
  [6133] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [6140] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(724), 1,
      anon_sym_RBRACE,
  [6147] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
  [6154] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
  [6161] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_RPAREN,
  [6168] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(732), 1,
      anon_sym_LBRACE,
  [6175] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_LBRACE,
  [6182] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LBRACE,
  [6189] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_LBRACE,
  [6196] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_LPAREN,
  [6203] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_LBRACE,
  [6210] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_LBRACE,
  [6217] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_LBRACE,
  [6224] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
  [6231] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(750), 1,
      anon_sym_RPAREN,
  [6238] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_RPAREN,
  [6245] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_while,
  [6252] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [6259] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(758), 1,
      sym_identifier,
  [6266] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(760), 1,
      ts_builtin_sym_end,
  [6273] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
  [6280] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
  [6287] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_LBRACE,
  [6294] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_LPAREN,
  [6301] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_LPAREN,
  [6308] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
  [6315] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_LPAREN,
  [6322] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_LBRACE,
  [6329] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 183,
  [SMALL_STATE(7)] = 218,
  [SMALL_STATE(8)] = 255,
  [SMALL_STATE(9)] = 305,
  [SMALL_STATE(10)] = 355,
  [SMALL_STATE(11)] = 389,
  [SMALL_STATE(12)] = 439,
  [SMALL_STATE(13)] = 473,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 541,
  [SMALL_STATE(16)] = 575,
  [SMALL_STATE(17)] = 625,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 709,
  [SMALL_STATE(20)] = 759,
  [SMALL_STATE(21)] = 809,
  [SMALL_STATE(22)] = 859,
  [SMALL_STATE(23)] = 909,
  [SMALL_STATE(24)] = 959,
  [SMALL_STATE(25)] = 1009,
  [SMALL_STATE(26)] = 1059,
  [SMALL_STATE(27)] = 1097,
  [SMALL_STATE(28)] = 1147,
  [SMALL_STATE(29)] = 1197,
  [SMALL_STATE(30)] = 1247,
  [SMALL_STATE(31)] = 1297,
  [SMALL_STATE(32)] = 1347,
  [SMALL_STATE(33)] = 1397,
  [SMALL_STATE(34)] = 1447,
  [SMALL_STATE(35)] = 1497,
  [SMALL_STATE(36)] = 1547,
  [SMALL_STATE(37)] = 1597,
  [SMALL_STATE(38)] = 1647,
  [SMALL_STATE(39)] = 1697,
  [SMALL_STATE(40)] = 1747,
  [SMALL_STATE(41)] = 1797,
  [SMALL_STATE(42)] = 1833,
  [SMALL_STATE(43)] = 1869,
  [SMALL_STATE(44)] = 1905,
  [SMALL_STATE(45)] = 1939,
  [SMALL_STATE(46)] = 1968,
  [SMALL_STATE(47)] = 1998,
  [SMALL_STATE(48)] = 2026,
  [SMALL_STATE(49)] = 2054,
  [SMALL_STATE(50)] = 2082,
  [SMALL_STATE(51)] = 2112,
  [SMALL_STATE(52)] = 2146,
  [SMALL_STATE(53)] = 2180,
  [SMALL_STATE(54)] = 2210,
  [SMALL_STATE(55)] = 2242,
  [SMALL_STATE(56)] = 2274,
  [SMALL_STATE(57)] = 2306,
  [SMALL_STATE(58)] = 2340,
  [SMALL_STATE(59)] = 2368,
  [SMALL_STATE(60)] = 2395,
  [SMALL_STATE(61)] = 2422,
  [SMALL_STATE(62)] = 2449,
  [SMALL_STATE(63)] = 2476,
  [SMALL_STATE(64)] = 2503,
  [SMALL_STATE(65)] = 2530,
  [SMALL_STATE(66)] = 2557,
  [SMALL_STATE(67)] = 2584,
  [SMALL_STATE(68)] = 2611,
  [SMALL_STATE(69)] = 2638,
  [SMALL_STATE(70)] = 2665,
  [SMALL_STATE(71)] = 2692,
  [SMALL_STATE(72)] = 2719,
  [SMALL_STATE(73)] = 2746,
  [SMALL_STATE(74)] = 2773,
  [SMALL_STATE(75)] = 2800,
  [SMALL_STATE(76)] = 2827,
  [SMALL_STATE(77)] = 2854,
  [SMALL_STATE(78)] = 2881,
  [SMALL_STATE(79)] = 2908,
  [SMALL_STATE(80)] = 2935,
  [SMALL_STATE(81)] = 2973,
  [SMALL_STATE(82)] = 3011,
  [SMALL_STATE(83)] = 3049,
  [SMALL_STATE(84)] = 3087,
  [SMALL_STATE(85)] = 3125,
  [SMALL_STATE(86)] = 3160,
  [SMALL_STATE(87)] = 3185,
  [SMALL_STATE(88)] = 3210,
  [SMALL_STATE(89)] = 3245,
  [SMALL_STATE(90)] = 3270,
  [SMALL_STATE(91)] = 3305,
  [SMALL_STATE(92)] = 3340,
  [SMALL_STATE(93)] = 3375,
  [SMALL_STATE(94)] = 3410,
  [SMALL_STATE(95)] = 3435,
  [SMALL_STATE(96)] = 3460,
  [SMALL_STATE(97)] = 3495,
  [SMALL_STATE(98)] = 3530,
  [SMALL_STATE(99)] = 3565,
  [SMALL_STATE(100)] = 3590,
  [SMALL_STATE(101)] = 3625,
  [SMALL_STATE(102)] = 3660,
  [SMALL_STATE(103)] = 3685,
  [SMALL_STATE(104)] = 3710,
  [SMALL_STATE(105)] = 3745,
  [SMALL_STATE(106)] = 3780,
  [SMALL_STATE(107)] = 3815,
  [SMALL_STATE(108)] = 3839,
  [SMALL_STATE(109)] = 3871,
  [SMALL_STATE(110)] = 3906,
  [SMALL_STATE(111)] = 3941,
  [SMALL_STATE(112)] = 3976,
  [SMALL_STATE(113)] = 4005,
  [SMALL_STATE(114)] = 4040,
  [SMALL_STATE(115)] = 4064,
  [SMALL_STATE(116)] = 4086,
  [SMALL_STATE(117)] = 4109,
  [SMALL_STATE(118)] = 4130,
  [SMALL_STATE(119)] = 4151,
  [SMALL_STATE(120)] = 4169,
  [SMALL_STATE(121)] = 4195,
  [SMALL_STATE(122)] = 4221,
  [SMALL_STATE(123)] = 4249,
  [SMALL_STATE(124)] = 4277,
  [SMALL_STATE(125)] = 4305,
  [SMALL_STATE(126)] = 4333,
  [SMALL_STATE(127)] = 4361,
  [SMALL_STATE(128)] = 4388,
  [SMALL_STATE(129)] = 4415,
  [SMALL_STATE(130)] = 4442,
  [SMALL_STATE(131)] = 4467,
  [SMALL_STATE(132)] = 4494,
  [SMALL_STATE(133)] = 4518,
  [SMALL_STATE(134)] = 4534,
  [SMALL_STATE(135)] = 4550,
  [SMALL_STATE(136)] = 4574,
  [SMALL_STATE(137)] = 4598,
  [SMALL_STATE(138)] = 4619,
  [SMALL_STATE(139)] = 4640,
  [SMALL_STATE(140)] = 4653,
  [SMALL_STATE(141)] = 4668,
  [SMALL_STATE(142)] = 4681,
  [SMALL_STATE(143)] = 4694,
  [SMALL_STATE(144)] = 4707,
  [SMALL_STATE(145)] = 4720,
  [SMALL_STATE(146)] = 4741,
  [SMALL_STATE(147)] = 4762,
  [SMALL_STATE(148)] = 4775,
  [SMALL_STATE(149)] = 4788,
  [SMALL_STATE(150)] = 4801,
  [SMALL_STATE(151)] = 4814,
  [SMALL_STATE(152)] = 4827,
  [SMALL_STATE(153)] = 4840,
  [SMALL_STATE(154)] = 4853,
  [SMALL_STATE(155)] = 4874,
  [SMALL_STATE(156)] = 4887,
  [SMALL_STATE(157)] = 4900,
  [SMALL_STATE(158)] = 4913,
  [SMALL_STATE(159)] = 4926,
  [SMALL_STATE(160)] = 4939,
  [SMALL_STATE(161)] = 4952,
  [SMALL_STATE(162)] = 4970,
  [SMALL_STATE(163)] = 4988,
  [SMALL_STATE(164)] = 5006,
  [SMALL_STATE(165)] = 5020,
  [SMALL_STATE(166)] = 5032,
  [SMALL_STATE(167)] = 5046,
  [SMALL_STATE(168)] = 5058,
  [SMALL_STATE(169)] = 5068,
  [SMALL_STATE(170)] = 5080,
  [SMALL_STATE(171)] = 5096,
  [SMALL_STATE(172)] = 5112,
  [SMALL_STATE(173)] = 5124,
  [SMALL_STATE(174)] = 5140,
  [SMALL_STATE(175)] = 5154,
  [SMALL_STATE(176)] = 5167,
  [SMALL_STATE(177)] = 5180,
  [SMALL_STATE(178)] = 5193,
  [SMALL_STATE(179)] = 5206,
  [SMALL_STATE(180)] = 5215,
  [SMALL_STATE(181)] = 5224,
  [SMALL_STATE(182)] = 5237,
  [SMALL_STATE(183)] = 5250,
  [SMALL_STATE(184)] = 5263,
  [SMALL_STATE(185)] = 5276,
  [SMALL_STATE(186)] = 5289,
  [SMALL_STATE(187)] = 5302,
  [SMALL_STATE(188)] = 5315,
  [SMALL_STATE(189)] = 5326,
  [SMALL_STATE(190)] = 5339,
  [SMALL_STATE(191)] = 5352,
  [SMALL_STATE(192)] = 5365,
  [SMALL_STATE(193)] = 5378,
  [SMALL_STATE(194)] = 5391,
  [SMALL_STATE(195)] = 5404,
  [SMALL_STATE(196)] = 5417,
  [SMALL_STATE(197)] = 5430,
  [SMALL_STATE(198)] = 5443,
  [SMALL_STATE(199)] = 5456,
  [SMALL_STATE(200)] = 5469,
  [SMALL_STATE(201)] = 5482,
  [SMALL_STATE(202)] = 5495,
  [SMALL_STATE(203)] = 5508,
  [SMALL_STATE(204)] = 5521,
  [SMALL_STATE(205)] = 5534,
  [SMALL_STATE(206)] = 5547,
  [SMALL_STATE(207)] = 5560,
  [SMALL_STATE(208)] = 5573,
  [SMALL_STATE(209)] = 5586,
  [SMALL_STATE(210)] = 5599,
  [SMALL_STATE(211)] = 5612,
  [SMALL_STATE(212)] = 5625,
  [SMALL_STATE(213)] = 5635,
  [SMALL_STATE(214)] = 5643,
  [SMALL_STATE(215)] = 5651,
  [SMALL_STATE(216)] = 5661,
  [SMALL_STATE(217)] = 5669,
  [SMALL_STATE(218)] = 5677,
  [SMALL_STATE(219)] = 5687,
  [SMALL_STATE(220)] = 5697,
  [SMALL_STATE(221)] = 5707,
  [SMALL_STATE(222)] = 5715,
  [SMALL_STATE(223)] = 5723,
  [SMALL_STATE(224)] = 5731,
  [SMALL_STATE(225)] = 5741,
  [SMALL_STATE(226)] = 5748,
  [SMALL_STATE(227)] = 5755,
  [SMALL_STATE(228)] = 5762,
  [SMALL_STATE(229)] = 5769,
  [SMALL_STATE(230)] = 5776,
  [SMALL_STATE(231)] = 5783,
  [SMALL_STATE(232)] = 5790,
  [SMALL_STATE(233)] = 5797,
  [SMALL_STATE(234)] = 5804,
  [SMALL_STATE(235)] = 5811,
  [SMALL_STATE(236)] = 5818,
  [SMALL_STATE(237)] = 5825,
  [SMALL_STATE(238)] = 5832,
  [SMALL_STATE(239)] = 5839,
  [SMALL_STATE(240)] = 5846,
  [SMALL_STATE(241)] = 5853,
  [SMALL_STATE(242)] = 5860,
  [SMALL_STATE(243)] = 5867,
  [SMALL_STATE(244)] = 5874,
  [SMALL_STATE(245)] = 5881,
  [SMALL_STATE(246)] = 5888,
  [SMALL_STATE(247)] = 5895,
  [SMALL_STATE(248)] = 5902,
  [SMALL_STATE(249)] = 5909,
  [SMALL_STATE(250)] = 5916,
  [SMALL_STATE(251)] = 5923,
  [SMALL_STATE(252)] = 5930,
  [SMALL_STATE(253)] = 5937,
  [SMALL_STATE(254)] = 5944,
  [SMALL_STATE(255)] = 5951,
  [SMALL_STATE(256)] = 5958,
  [SMALL_STATE(257)] = 5965,
  [SMALL_STATE(258)] = 5972,
  [SMALL_STATE(259)] = 5979,
  [SMALL_STATE(260)] = 5986,
  [SMALL_STATE(261)] = 5993,
  [SMALL_STATE(262)] = 6000,
  [SMALL_STATE(263)] = 6007,
  [SMALL_STATE(264)] = 6014,
  [SMALL_STATE(265)] = 6021,
  [SMALL_STATE(266)] = 6028,
  [SMALL_STATE(267)] = 6035,
  [SMALL_STATE(268)] = 6042,
  [SMALL_STATE(269)] = 6049,
  [SMALL_STATE(270)] = 6056,
  [SMALL_STATE(271)] = 6063,
  [SMALL_STATE(272)] = 6070,
  [SMALL_STATE(273)] = 6077,
  [SMALL_STATE(274)] = 6084,
  [SMALL_STATE(275)] = 6091,
  [SMALL_STATE(276)] = 6098,
  [SMALL_STATE(277)] = 6105,
  [SMALL_STATE(278)] = 6112,
  [SMALL_STATE(279)] = 6119,
  [SMALL_STATE(280)] = 6126,
  [SMALL_STATE(281)] = 6133,
  [SMALL_STATE(282)] = 6140,
  [SMALL_STATE(283)] = 6147,
  [SMALL_STATE(284)] = 6154,
  [SMALL_STATE(285)] = 6161,
  [SMALL_STATE(286)] = 6168,
  [SMALL_STATE(287)] = 6175,
  [SMALL_STATE(288)] = 6182,
  [SMALL_STATE(289)] = 6189,
  [SMALL_STATE(290)] = 6196,
  [SMALL_STATE(291)] = 6203,
  [SMALL_STATE(292)] = 6210,
  [SMALL_STATE(293)] = 6217,
  [SMALL_STATE(294)] = 6224,
  [SMALL_STATE(295)] = 6231,
  [SMALL_STATE(296)] = 6238,
  [SMALL_STATE(297)] = 6245,
  [SMALL_STATE(298)] = 6252,
  [SMALL_STATE(299)] = 6259,
  [SMALL_STATE(300)] = 6266,
  [SMALL_STATE(301)] = 6273,
  [SMALL_STATE(302)] = 6280,
  [SMALL_STATE(303)] = 6287,
  [SMALL_STATE(304)] = 6294,
  [SMALL_STATE(305)] = 6301,
  [SMALL_STATE(306)] = 6308,
  [SMALL_STATE(307)] = 6315,
  [SMALL_STATE(308)] = 6322,
  [SMALL_STATE(309)] = 6329,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(308),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(304),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(305),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_control_flow, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_control_flow, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 6),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 6),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 7),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 7),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 8),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 8),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 9),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(212),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(306),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(269),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(307),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 7, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 7, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(260),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 1, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 4, 0, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 4, 0, 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 7, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 7, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 7, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_statement, 8, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 8, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 11, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 11, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 12, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 12, 0, 0),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 1, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movement_repeat1, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 5, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 5, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4, 0, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additives, 1, 0, 0),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 4, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 4, 0, 3),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 5, 0, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, 0, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 5, 0, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 4, 0, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, 0, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 4, 0, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 6, 0, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 6, 0, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapscripts, 5, 0, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 6, 0, 4),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, 0, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapscripts, 4, 0, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, 0, 4),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 6, 0, 4),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapscripts, 6, 0, 4),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mapscripts, 5, 0, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [455] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(225),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapscripts_repeat1, 2, 0, 0), SHIFT_REPEAT(233),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapscripts_repeat1, 2, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 3, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 4, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mapscripts_repeat2, 2, 0, 0), SHIFT_REPEAT(196),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapscripts_repeat2, 2, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapscripts_repeat1, 5, 0, 0),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapscripts_repeat2, 3, 0, 0),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additives, 1, 0, 0),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapscripts_repeat1, 6, 0, 0),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mapscripts_repeat2, 4, 0, 0),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, 0, 0),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_marker, 1, 0, 0),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 5, 0, 0),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_directive, 1, 0, 0),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 6, 0, 0),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [760] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_poryscript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
