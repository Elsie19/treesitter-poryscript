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
#define STATE_COUNT 286
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 16

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
  sym_source_file = 59,
  sym__definition = 60,
  sym_const = 61,
  sym_string = 62,
  sym_interpolation = 63,
  sym__meta_function_pass = 64,
  sym__expression = 65,
  sym__movement_expression = 66,
  sym_arithmetic_expression = 67,
  sym_builtin_func = 68,
  sym_builtin_control_flow = 69,
  sym_function_call = 70,
  sym_operator = 71,
  sym_additives = 72,
  sym_boolean = 73,
  sym_text_directive = 74,
  sym_logical_operator = 75,
  sym__boolean_expression = 76,
  sym_while_statement = 77,
  sym_do_while_statement = 78,
  sym_switch_statement = 79,
  sym_if_statement = 80,
  sym_scope = 81,
  sym_script = 82,
  sym_label = 83,
  sym_scripting = 84,
  sym_mart = 85,
  sym_text = 86,
  sym_movement = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_string_repeat1 = 89,
  aux_sym_interpolation_repeat1 = 90,
  aux_sym_function_call_repeat1 = 91,
  aux_sym_switch_statement_repeat1 = 92,
  aux_sym_if_statement_repeat1 = 93,
  aux_sym_scripting_repeat1 = 94,
  aux_sym_text_repeat1 = 95,
  aux_sym_movement_repeat1 = 96,
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_const] = "const",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__meta_function_pass] = "_meta_function_pass",
  [sym__expression] = "_expression",
  [sym__movement_expression] = "_movement_expression",
  [sym_arithmetic_expression] = "arithmetic_expression",
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
  [sym_scope] = "scope",
  [sym_script] = "script",
  [sym_label] = "label",
  [sym_scripting] = "scripting",
  [sym_mart] = "mart",
  [sym_text] = "text",
  [sym_movement] = "movement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_scripting_repeat1] = "scripting_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_movement_repeat1] = "movement_repeat1",
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_const] = sym_const,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__meta_function_pass] = sym__meta_function_pass,
  [sym__expression] = sym__expression,
  [sym__movement_expression] = sym__movement_expression,
  [sym_arithmetic_expression] = sym_arithmetic_expression,
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
  [sym_scope] = sym_scope,
  [sym_script] = sym_script,
  [sym_label] = sym_label,
  [sym_scripting] = sym_scripting,
  [sym_mart] = sym_mart,
  [sym_text] = sym_text,
  [sym_movement] = sym_movement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_interpolation_repeat1] = aux_sym_interpolation_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_scripting_repeat1] = aux_sym_scripting_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_movement_repeat1] = aux_sym_movement_repeat1,
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
};

enum ts_field_identifiers {
  field_const_name = 1,
  field_function_name = 2,
  field_function_params = 3,
  field_label_name = 4,
  field_mart_name = 5,
  field_movement_name = 6,
  field_script_name = 7,
  field_text_name = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_const_name] = "const_name",
  [field_function_name] = "function_name",
  [field_function_params] = "function_params",
  [field_label_name] = "label_name",
  [field_mart_name] = "mart_name",
  [field_movement_name] = "movement_name",
  [field_script_name] = "script_name",
  [field_text_name] = "text_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 1},
  [12] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 3},
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_const_name, 1},
  [1] =
    {field_function_name, 0},
  [2] =
    {field_mart_name, 1},
  [3] =
    {field_text_name, 1},
  [4] =
    {field_movement_name, 1},
  [5] =
    {field_script_name, 1},
  [6] =
    {field_label_name, 0},
  [7] =
    {field_function_name, 0},
    {field_function_params, 2},
  [9] =
    {field_function_params, 2},
  [10] =
    {field_mart_name, 4},
  [11] =
    {field_text_name, 4},
  [12] =
    {field_movement_name, 4},
  [13] =
    {field_function_name, 0},
    {field_function_params, 2},
    {field_function_params, 3},
  [16] =
    {field_function_params, 2},
    {field_function_params, 3},
  [18] =
    {field_script_name, 4},
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
  [4] = 2,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 3,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 2,
  [26] = 26,
  [27] = 2,
  [28] = 9,
  [29] = 19,
  [30] = 30,
  [31] = 10,
  [32] = 20,
  [33] = 21,
  [34] = 24,
  [35] = 35,
  [36] = 26,
  [37] = 11,
  [38] = 35,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 5,
  [45] = 7,
  [46] = 39,
  [47] = 40,
  [48] = 6,
  [49] = 41,
  [50] = 43,
  [51] = 51,
  [52] = 42,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 17,
  [61] = 13,
  [62] = 14,
  [63] = 16,
  [64] = 18,
  [65] = 22,
  [66] = 5,
  [67] = 67,
  [68] = 7,
  [69] = 69,
  [70] = 6,
  [71] = 71,
  [72] = 55,
  [73] = 53,
  [74] = 14,
  [75] = 16,
  [76] = 76,
  [77] = 17,
  [78] = 18,
  [79] = 22,
  [80] = 80,
  [81] = 58,
  [82] = 82,
  [83] = 59,
  [84] = 51,
  [85] = 57,
  [86] = 56,
  [87] = 87,
  [88] = 13,
  [89] = 54,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 94,
  [99] = 99,
  [100] = 99,
  [101] = 97,
  [102] = 102,
  [103] = 92,
  [104] = 91,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 126,
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
  [152] = 150,
  [153] = 151,
  [154] = 150,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 159,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 170,
  [180] = 165,
  [181] = 181,
  [182] = 172,
  [183] = 183,
  [184] = 170,
  [185] = 165,
  [186] = 181,
  [187] = 172,
  [188] = 175,
  [189] = 181,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 114,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 200,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
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
  [236] = 215,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 238,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 234,
  [246] = 240,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 114,
  [252] = 252,
  [253] = 253,
  [254] = 213,
  [255] = 255,
  [256] = 243,
  [257] = 257,
  [258] = 258,
  [259] = 239,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 214,
  [264] = 223,
  [265] = 232,
  [266] = 230,
  [267] = 226,
  [268] = 231,
  [269] = 237,
  [270] = 219,
  [271] = 221,
  [272] = 222,
  [273] = 247,
  [274] = 233,
  [275] = 244,
  [276] = 276,
  [277] = 277,
  [278] = 220,
  [279] = 279,
  [280] = 279,
  [281] = 281,
  [282] = 281,
  [283] = 224,
  [284] = 277,
  [285] = 249,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(129);
      ADVANCE_MAP(
        '!', 255,
        '"', 223,
        '#', 130,
        '&', 11,
        '(', 251,
        ')', 253,
        '*', 267,
        '+', 265,
        ',', 252,
        '-', 264,
        '/', 266,
        ':', 290,
        '<', 260,
        '=', 263,
        '>', 258,
        'F', 15,
        'T', 19,
        '\\', 124,
        'a', 99,
        'b', 95,
        'c', 22,
        'd', 50,
        'e', 70,
        'f', 23,
        'g', 74,
        'i', 56,
        'l', 90,
        'm', 27,
        'r', 52,
        's', 37,
        't', 42,
        'v', 24,
        'w', 61,
        '{', 226,
        '|', 123,
        '}', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead == '{') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '{') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 13,
        '#', 130,
        '&', 11,
        '(', 251,
        ')', 253,
        '/', 12,
        ':', 290,
        '<', 260,
        '=', 14,
        '>', 258,
        'b', 205,
        'c', 146,
        'd', 167,
        'e', 196,
        'f', 190,
        'g', 200,
        'i', 171,
        'r', 166,
        's', 221,
        'v', 142,
        'w', 177,
        '|', 123,
        '}', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 254,
        '&', 11,
        '(', 251,
        ')', 253,
        '*', 267,
        '+', 265,
        '-', 264,
        '/', 266,
        '=', 262,
        'b', 205,
        'c', 146,
        'd', 168,
        'e', 196,
        'f', 190,
        'g', 200,
        'r', 166,
        'v', 142,
        '|', 123,
        '}', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == '}') ADVANCE(227);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == ')') ADVANCE(253);
      if (lookahead == 'g') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(203);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(148);
      if (lookahead == 't') ADVANCE(207);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 130,
        '(', 251,
        '/', 12,
        ':', 290,
        'b', 205,
        'c', 141,
        'd', 164,
        'e', 196,
        'f', 190,
        'g', 200,
        'i', 171,
        'r', 166,
        's', 221,
        'v', 142,
        'w', 177,
        '}', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 130,
        '/', 12,
        'b', 205,
        'c', 141,
        'd', 164,
        'e', 186,
        'f', 190,
        'g', 200,
        'i', 171,
        'r', 166,
        's', 221,
        'v', 142,
        'w', 177,
        '}', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 130,
        '/', 12,
        'b', 205,
        'c', 146,
        'd', 167,
        'e', 186,
        'f', 190,
        'g', 200,
        'i', 171,
        'r', 166,
        's', 221,
        'v', 142,
        'w', 177,
        '}', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(279);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(268);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(272);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(286);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(295);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(291);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(293);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 60:
      if (lookahead == 'h') ADVANCE(284);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(247);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(302);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(301);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(304);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 121:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 122:
      if (lookahead == 'x') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == '|') ADVANCE(278);
      END_STATE();
    case 124:
      if (lookahead == '"' ||
          lookahead == 'N' ||
          lookahead == '\\' ||
          lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'p') ADVANCE(228);
      END_STATE();
    case 125:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 126:
      if (eof) ADVANCE(129);
      ADVANCE_MAP(
        '!', 255,
        '"', 223,
        '#', 130,
        '&', 11,
        '(', 251,
        ')', 253,
        '*', 267,
        '+', 265,
        ',', 252,
        '-', 264,
        '/', 266,
        ':', 290,
        '<', 260,
        '=', 263,
        '>', 258,
        'F', 15,
        'T', 19,
        'a', 99,
        'b', 95,
        'c', 22,
        'd', 50,
        'e', 70,
        'f', 23,
        'g', 74,
        'i', 56,
        'l', 90,
        'm', 27,
        'r', 52,
        's', 37,
        't', 42,
        'v', 24,
        'w', 61,
        '{', 226,
        '|', 123,
        '}', 227,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 127:
      if (eof) ADVANCE(129);
      ADVANCE_MAP(
        '!', 13,
        '#', 130,
        '&', 11,
        '(', 251,
        ')', 253,
        '/', 12,
        '<', 260,
        '=', 14,
        '>', 258,
        'c', 92,
        'm', 27,
        's', 36,
        't', 41,
        '|', 123,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(127);
      END_STATE();
    case 128:
      if (eof) ADVANCE(129);
      ADVANCE_MAP(
        '#', 130,
        '&', 11,
        ')', 253,
        '*', 267,
        '+', 265,
        '-', 264,
        '/', 266,
        '=', 262,
        'c', 92,
        'm', 27,
        's', 36,
        't', 41,
        '|', 123,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == 's') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_flag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_defeated);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_defeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_format);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_negate);
      if (lookahead == '=') ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(256);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_ascii);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_mart);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_movement);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 127},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
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
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 128},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 127},
  [109] = {.lex_state = 127},
  [110] = {.lex_state = 128},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 127},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 127},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 127},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 127},
  [120] = {.lex_state = 4},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 127},
  [127] = {.lex_state = 127},
  [128] = {.lex_state = 127},
  [129] = {.lex_state = 127},
  [130] = {.lex_state = 127},
  [131] = {.lex_state = 127},
  [132] = {.lex_state = 127},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 127},
  [136] = {.lex_state = 127},
  [137] = {.lex_state = 127},
  [138] = {.lex_state = 127},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 127},
  [141] = {.lex_state = 127},
  [142] = {.lex_state = 127},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 125},
  [162] = {.lex_state = 125},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 125},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 5},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(253),
    [sym__definition] = STATE(109),
    [sym_const] = STATE(109),
    [sym_script] = STATE(109),
    [sym_mart] = STATE(109),
    [sym_text] = STATE(109),
    [sym_movement] = STATE(109),
    [aux_sym_source_file_repeat1] = STATE(109),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_script] = ACTIONS(9),
    [anon_sym_mart] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(13),
    [anon_sym_movement] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(17), 2,
      sym_comment,
      anon_sym_RBRACE,
    STATE(45), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(3), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
    ACTIONS(19), 18,
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
  [38] = 12,
    ACTIONS(21), 1,
      sym_comment,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_while,
    ACTIONS(38), 1,
      anon_sym_do,
    ACTIONS(41), 1,
      anon_sym_switch,
    ACTIONS(46), 1,
      anon_sym_if,
    ACTIONS(44), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(45), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(32), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(29), 7,
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
  [92] = 12,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_do,
    ACTIONS(61), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(19), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(45), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(55), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(53), 7,
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
  [146] = 2,
    ACTIONS(65), 10,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(67), 18,
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
  [179] = 2,
    ACTIONS(69), 10,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(71), 18,
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
  [212] = 3,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(75), 18,
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
  [247] = 11,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_do,
    ACTIONS(61), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      sym_comment,
    STATE(178), 1,
      sym_scripting,
    STATE(45), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(55), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(53), 7,
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
  [297] = 11,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    STATE(89), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(27), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [347] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(215), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [397] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(220), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [447] = 11,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_while,
    ACTIONS(114), 1,
      anon_sym_do,
    ACTIONS(117), 1,
      anon_sym_switch,
    ACTIONS(120), 1,
      anon_sym_if,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(108), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(105), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(12), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [497] = 2,
    ACTIONS(123), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(125), 18,
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
  [529] = 2,
    ACTIONS(127), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(129), 18,
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
  [561] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(227), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [611] = 2,
    ACTIONS(131), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(133), 18,
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
  [643] = 2,
    ACTIONS(135), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
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
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [675] = 2,
    ACTIONS(139), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(141), 18,
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
  [707] = 11,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    STATE(73), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(27), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [757] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(238), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [807] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(256), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [857] = 2,
    ACTIONS(143), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
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
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_while,
      anon_sym_do,
      anon_sym_switch,
      anon_sym_if,
  [889] = 11,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_do,
    ACTIONS(61), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(79), 1,
      sym_comment,
    STATE(190), 1,
      sym_scripting,
    STATE(45), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(55), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(53), 7,
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
  [939] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(234), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [989] = 11,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(147), 1,
      sym_comment,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(12), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1039] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(249), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1089] = 4,
    ACTIONS(17), 2,
      sym_comment,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(12), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
    ACTIONS(19), 16,
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
  [1125] = 11,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_do,
    ACTIONS(61), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(149), 1,
      sym_comment,
    STATE(54), 1,
      sym_scripting,
    STATE(45), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(55), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(53), 7,
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
  [1175] = 11,
    ACTIONS(51), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_while,
    ACTIONS(59), 1,
      anon_sym_do,
    ACTIONS(61), 1,
      anon_sym_switch,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(149), 1,
      sym_comment,
    STATE(53), 1,
      sym_scripting,
    STATE(45), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(55), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(53), 7,
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
  [1225] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(207), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1275] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(236), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1325] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(241), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1375] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(243), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1425] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(245), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1475] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(246), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1525] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(285), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1575] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(278), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1625] = 11,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_do,
    ACTIONS(93), 1,
      anon_sym_switch,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      sym_comment,
    STATE(240), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(25), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1675] = 5,
    ACTIONS(155), 1,
      anon_sym_elif,
    ACTIONS(157), 1,
      anon_sym_else,
    STATE(41), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(151), 2,
      sym_comment,
      anon_sym_RBRACE,
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
  [1709] = 5,
    ACTIONS(155), 1,
      anon_sym_elif,
    ACTIONS(163), 1,
      anon_sym_else,
    STATE(39), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(159), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(161), 18,
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
  [1743] = 4,
    ACTIONS(169), 1,
      anon_sym_elif,
    STATE(41), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(165), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(167), 19,
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
  [1775] = 4,
    ACTIONS(176), 1,
      anon_sym_LPAREN,
    ACTIONS(178), 1,
      anon_sym_COLON,
    ACTIONS(172), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(174), 18,
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
  [1806] = 2,
    ACTIONS(180), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(182), 20,
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
  [1833] = 2,
    ACTIONS(65), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(67), 18,
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
  [1859] = 3,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(75), 18,
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
  [1887] = 5,
    ACTIONS(186), 1,
      anon_sym_elif,
    ACTIONS(188), 1,
      anon_sym_else,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(151), 2,
      sym_comment,
      anon_sym_RBRACE,
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
  [1919] = 5,
    ACTIONS(186), 1,
      anon_sym_elif,
    ACTIONS(190), 1,
      anon_sym_else,
    STATE(46), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(159), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(161), 16,
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
  [1951] = 2,
    ACTIONS(69), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(71), 18,
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
  [1977] = 4,
    ACTIONS(192), 1,
      anon_sym_elif,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(165), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(167), 17,
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
  [2007] = 2,
    ACTIONS(180), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(182), 18,
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
  [2032] = 2,
    ACTIONS(195), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(197), 18,
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
  [2057] = 4,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_COLON,
    ACTIONS(172), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(174), 16,
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
  [2086] = 2,
    ACTIONS(203), 2,
      sym_comment,
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
  [2111] = 2,
    ACTIONS(207), 2,
      sym_comment,
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
  [2136] = 2,
    ACTIONS(211), 2,
      sym_comment,
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
  [2161] = 2,
    ACTIONS(215), 2,
      sym_comment,
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
  [2186] = 2,
    ACTIONS(219), 2,
      sym_comment,
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
  [2211] = 2,
    ACTIONS(223), 2,
      sym_comment,
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
  [2236] = 2,
    ACTIONS(227), 2,
      sym_comment,
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
  [2261] = 2,
    ACTIONS(135), 2,
      sym_comment,
      anon_sym_RBRACE,
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
  [2286] = 2,
    ACTIONS(123), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(125), 18,
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
  [2311] = 2,
    ACTIONS(127), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(129), 18,
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
  [2336] = 2,
    ACTIONS(131), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(133), 18,
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
  [2361] = 2,
    ACTIONS(139), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(141), 18,
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
  [2386] = 2,
    ACTIONS(143), 2,
      sym_comment,
      anon_sym_RBRACE,
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
  [2411] = 2,
    ACTIONS(65), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(67), 12,
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
  [2435] = 4,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_additives,
    ACTIONS(235), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(231), 12,
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
  [2463] = 3,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 6,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(75), 12,
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
  [2489] = 4,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_additives,
    ACTIONS(243), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(239), 12,
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
  [2517] = 2,
    ACTIONS(69), 7,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(71), 12,
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
  [2541] = 3,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 6,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(174), 12,
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
  [2567] = 2,
    ACTIONS(211), 2,
      sym_comment,
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
  [2590] = 2,
    ACTIONS(203), 2,
      sym_comment,
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
  [2613] = 2,
    ACTIONS(127), 6,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(129), 12,
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
  [2636] = 2,
    ACTIONS(131), 6,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(133), 12,
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
  [2659] = 7,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_function_call,
    STATE(68), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(90), 2,
      sym__movement_expression,
      aux_sym_movement_repeat1,
    ACTIONS(253), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(251), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2692] = 2,
    ACTIONS(135), 6,
      anon_sym_RBRACE,
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
  [2715] = 2,
    ACTIONS(139), 6,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(141), 12,
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
  [2738] = 2,
    ACTIONS(143), 6,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(145), 12,
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
  [2761] = 7,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_function_call,
    STATE(68), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(82), 2,
      sym__movement_expression,
      aux_sym_movement_repeat1,
    ACTIONS(253), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(251), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2794] = 2,
    ACTIONS(223), 2,
      sym_comment,
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
  [2817] = 7,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_function_call,
    STATE(68), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(90), 2,
      sym__movement_expression,
      aux_sym_movement_repeat1,
    ACTIONS(253), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(251), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2850] = 2,
    ACTIONS(227), 2,
      sym_comment,
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
  [2873] = 2,
    ACTIONS(195), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(197), 16,
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
  [2896] = 2,
    ACTIONS(219), 2,
      sym_comment,
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
  [2919] = 2,
    ACTIONS(215), 2,
      sym_comment,
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
  [2942] = 7,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_function_call,
    STATE(68), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(76), 2,
      sym__movement_expression,
      aux_sym_movement_repeat1,
    ACTIONS(253), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(251), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2975] = 2,
    ACTIONS(123), 6,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(125), 12,
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
  [2998] = 2,
    ACTIONS(207), 2,
      sym_comment,
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
  [3021] = 7,
    ACTIONS(261), 1,
      sym_identifier,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_function_call,
    STATE(68), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(90), 2,
      sym__movement_expression,
      aux_sym_movement_repeat1,
    ACTIONS(269), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(266), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3054] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(233), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3086] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(219), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3118] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(235), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3150] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(221), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3182] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(216), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3214] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(212), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3246] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(272), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3278] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(271), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3310] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(275), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3342] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(244), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3374] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(222), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3406] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(260), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3438] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(270), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3470] = 7,
    ACTIONS(272), 1,
      sym_identifier,
    ACTIONS(274), 1,
      sym_negate,
    STATE(117), 1,
      sym_function_call,
    STATE(274), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3502] = 6,
    ACTIONS(247), 1,
      sym_identifier,
    STATE(69), 1,
      sym_function_call,
    STATE(112), 1,
      sym__movement_expression,
    STATE(68), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(253), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(251), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3531] = 3,
    ACTIONS(278), 1,
      sym_comment,
    STATE(161), 1,
      sym_additives,
    ACTIONS(276), 14,
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
  [3554] = 5,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(119), 1,
      sym_function_call,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(87), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(85), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3580] = 8,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_const,
    ACTIONS(290), 1,
      anon_sym_script,
    ACTIONS(293), 1,
      anon_sym_mart,
    ACTIONS(296), 1,
      anon_sym_text,
    ACTIONS(299), 1,
      anon_sym_movement,
    STATE(108), 7,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      sym_movement,
      aux_sym_source_file_repeat1,
  [3611] = 8,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(9), 1,
      anon_sym_script,
    ACTIONS(11), 1,
      anon_sym_mart,
    ACTIONS(13), 1,
      anon_sym_text,
    ACTIONS(15), 1,
      anon_sym_movement,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(304), 1,
      sym_comment,
    STATE(108), 7,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      sym_movement,
      aux_sym_source_file_repeat1,
  [3642] = 4,
    ACTIONS(308), 1,
      sym_comment,
    STATE(161), 1,
      sym_additives,
    ACTIONS(310), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(306), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [3664] = 2,
    ACTIONS(314), 1,
      sym_negate,
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
  [3682] = 2,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 12,
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
  [3700] = 5,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_logical_operator,
    STATE(118), 1,
      sym_operator,
    ACTIONS(174), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(172), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3723] = 1,
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
  [3738] = 5,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_logical_operator,
    STATE(116), 1,
      sym_operator,
    ACTIONS(174), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(172), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3761] = 5,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 2,
      sym_number,
      sym_identifier,
    STATE(121), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(158), 2,
      sym_string,
      sym_boolean,
    ACTIONS(328), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [3783] = 6,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_logical_operator,
    STATE(118), 1,
      sym_operator,
    ACTIONS(334), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(332), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3807] = 5,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 2,
      sym_number,
      sym_identifier,
    STATE(120), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(157), 2,
      sym_string,
      sym_boolean,
    ACTIONS(328), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [3829] = 6,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_logical_operator,
    STATE(116), 1,
      sym_operator,
    ACTIONS(334), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(332), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3853] = 5,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_logical_operator,
    STATE(161), 1,
      sym_additives,
    ACTIONS(336), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(310), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3874] = 5,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_logical_operator,
    STATE(161), 1,
      sym_additives,
    ACTIONS(336), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(310), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3895] = 6,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_scope,
    ACTIONS(350), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(170), 2,
      sym_string,
      sym__meta_function_pass,
  [3916] = 6,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      sym_scope,
    ACTIONS(350), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(184), 2,
      sym_string,
      sym__meta_function_pass,
  [3937] = 1,
    ACTIONS(356), 8,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ascii,
      anon_sym_custom,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3948] = 1,
    ACTIONS(358), 8,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ascii,
      anon_sym_custom,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3959] = 1,
    ACTIONS(360), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [3969] = 1,
    ACTIONS(362), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [3979] = 1,
    ACTIONS(364), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [3989] = 1,
    ACTIONS(366), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [3999] = 1,
    ACTIONS(368), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4009] = 1,
    ACTIONS(370), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4019] = 1,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4029] = 5,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_text_directive,
    ACTIONS(376), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(139), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4047] = 5,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_text_directive,
    ACTIONS(376), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(139), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4065] = 1,
    ACTIONS(380), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4075] = 1,
    ACTIONS(382), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4085] = 1,
    ACTIONS(384), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4095] = 1,
    ACTIONS(386), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4105] = 5,
    ACTIONS(388), 1,
      anon_sym_DQUOTE,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_text_directive,
    ACTIONS(393), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(139), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4123] = 1,
    ACTIONS(396), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4133] = 1,
    ACTIONS(398), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4143] = 1,
    ACTIONS(400), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4153] = 5,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_text_directive,
    ACTIONS(376), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(133), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4171] = 5,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(404), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_text_directive,
    ACTIONS(376), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(134), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4189] = 2,
    ACTIONS(408), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 6,
      sym_number,
      sym_identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [4201] = 4,
    ACTIONS(410), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(148), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [4216] = 4,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(421), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(147), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [4231] = 4,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(147), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [4246] = 2,
    STATE(162), 1,
      sym_additives,
    ACTIONS(310), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4257] = 4,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(428), 1,
      sym_identifier,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(165), 2,
      sym_string,
      sym__meta_function_pass,
  [4271] = 4,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    ACTIONS(432), 1,
      sym_identifier,
    STATE(170), 2,
      sym_string,
      sym__meta_function_pass,
  [4285] = 4,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      sym_identifier,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(180), 2,
      sym_string,
      sym__meta_function_pass,
  [4299] = 4,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    STATE(179), 2,
      sym_string,
      sym__meta_function_pass,
  [4313] = 4,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(442), 1,
      sym_identifier,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(185), 2,
      sym_string,
      sym__meta_function_pass,
  [4327] = 2,
    ACTIONS(446), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(448), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4336] = 3,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      sym_identifier,
    STATE(198), 2,
      sym_string,
      sym__meta_function_pass,
  [4347] = 3,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_logical_operator,
    ACTIONS(336), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4358] = 3,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      sym_logical_operator,
    ACTIONS(336), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4369] = 4,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      anon_sym_case,
    ACTIONS(456), 1,
      anon_sym_default,
    STATE(160), 1,
      aux_sym_switch_statement_repeat1,
  [4382] = 4,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
    ACTIONS(460), 1,
      anon_sym_case,
    ACTIONS(463), 1,
      anon_sym_default,
    STATE(160), 1,
      aux_sym_switch_statement_repeat1,
  [4395] = 2,
    ACTIONS(466), 2,
      sym_number,
      sym_identifier,
    STATE(106), 2,
      sym__expression,
      sym_arithmetic_expression,
  [4404] = 2,
    ACTIONS(468), 2,
      sym_number,
      sym_identifier,
    STATE(110), 2,
      sym__expression,
      sym_arithmetic_expression,
  [4413] = 1,
    ACTIONS(391), 4,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_ascii,
      anon_sym_custom,
  [4420] = 4,
    ACTIONS(454), 1,
      anon_sym_case,
    ACTIONS(456), 1,
      anon_sym_default,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_switch_statement_repeat1,
  [4433] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_function_call_repeat1,
  [4443] = 3,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      aux_sym_interpolation_repeat1,
  [4453] = 2,
    STATE(210), 1,
      sym_scope,
    ACTIONS(480), 2,
      anon_sym_local,
      anon_sym_global,
  [4461] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_function_call_repeat1,
  [4471] = 3,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      aux_sym_interpolation_repeat1,
  [4481] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_function_call_repeat1,
  [4491] = 3,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      aux_sym_interpolation_repeat1,
  [4501] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_function_call_repeat1,
  [4511] = 3,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      aux_sym_interpolation_repeat1,
  [4521] = 3,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      aux_sym_interpolation_repeat1,
  [4531] = 3,
    ACTIONS(454), 1,
      anon_sym_case,
    ACTIONS(456), 1,
      anon_sym_default,
    STATE(159), 1,
      aux_sym_switch_statement_repeat1,
  [4541] = 2,
    STATE(203), 1,
      sym_scope,
    ACTIONS(480), 2,
      anon_sym_local,
      anon_sym_global,
  [4549] = 1,
    ACTIONS(503), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4555] = 1,
    ACTIONS(505), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4561] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_function_call_repeat1,
  [4571] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_function_call_repeat1,
  [4581] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_function_call_repeat1,
  [4591] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_function_call_repeat1,
  [4601] = 2,
    STATE(225), 1,
      sym_scope,
    ACTIONS(480), 2,
      anon_sym_local,
      anon_sym_global,
  [4609] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_function_call_repeat1,
  [4619] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_function_call_repeat1,
  [4629] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_function_call_repeat1,
  [4639] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_function_call_repeat1,
  [4649] = 3,
    ACTIONS(454), 1,
      anon_sym_case,
    ACTIONS(456), 1,
      anon_sym_default,
    STATE(164), 1,
      aux_sym_switch_statement_repeat1,
  [4659] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_function_call_repeat1,
  [4669] = 1,
    ACTIONS(525), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4675] = 2,
    STATE(217), 1,
      sym_scope,
    ACTIONS(480), 2,
      anon_sym_local,
      anon_sym_global,
  [4683] = 3,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      aux_sym_interpolation_repeat1,
  [4693] = 2,
    ACTIONS(532), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
  [4700] = 2,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_LPAREN,
  [4707] = 2,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    STATE(163), 1,
      sym_string,
  [4714] = 1,
    ACTIONS(322), 2,
      sym_number,
      sym_identifier,
  [4719] = 2,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(174), 1,
      aux_sym_interpolation_repeat1,
  [4726] = 1,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4731] = 2,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
  [4738] = 2,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
  [4745] = 2,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
  [4752] = 2,
    ACTIONS(554), 1,
      sym_identifier,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
  [4759] = 1,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [4763] = 1,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
  [4767] = 1,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
  [4771] = 1,
    ACTIONS(564), 1,
      sym_number,
  [4775] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [4779] = 1,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [4783] = 1,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
  [4787] = 1,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
  [4791] = 1,
    ACTIONS(574), 1,
      sym_identifier,
  [4795] = 1,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [4799] = 1,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
  [4803] = 1,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
  [4807] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [4811] = 1,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
  [4815] = 1,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [4819] = 1,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
  [4823] = 1,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [4827] = 1,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [4831] = 1,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [4835] = 1,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [4839] = 1,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
  [4843] = 1,
    ACTIONS(598), 1,
      anon_sym_LPAREN,
  [4847] = 1,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [4851] = 1,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
  [4855] = 1,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [4859] = 1,
    ACTIONS(606), 1,
      sym_identifier,
  [4863] = 1,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
  [4867] = 1,
    ACTIONS(610), 1,
      anon_sym_LPAREN,
  [4871] = 1,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
  [4875] = 1,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
  [4879] = 1,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
  [4883] = 1,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
  [4887] = 1,
    ACTIONS(344), 1,
      anon_sym_RPAREN,
  [4891] = 1,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
  [4895] = 1,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
  [4899] = 1,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
  [4903] = 1,
    ACTIONS(626), 1,
      anon_sym_COLON,
  [4907] = 1,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
  [4911] = 1,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
  [4915] = 1,
    ACTIONS(632), 1,
      sym_identifier,
  [4919] = 1,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
  [4923] = 1,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [4927] = 1,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
  [4931] = 1,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
  [4935] = 1,
    ACTIONS(642), 1,
      anon_sym_while,
  [4939] = 1,
    ACTIONS(644), 1,
      sym_number,
  [4943] = 1,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
  [4947] = 1,
    ACTIONS(648), 1,
      anon_sym_COLON,
  [4951] = 1,
    ACTIONS(650), 1,
      sym_number,
  [4955] = 1,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
  [4959] = 1,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
  [4963] = 1,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
  [4967] = 1,
    ACTIONS(658), 1,
      sym_identifier,
  [4971] = 1,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
  [4975] = 1,
    ACTIONS(662), 1,
      sym_identifier,
  [4979] = 1,
    ACTIONS(664), 1,
      anon_sym_LBRACE,
  [4983] = 1,
    ACTIONS(666), 1,
      anon_sym_COLON,
  [4987] = 1,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
  [4991] = 1,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
  [4995] = 1,
    ACTIONS(672), 1,
      anon_sym_LBRACE,
  [4999] = 1,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
  [5003] = 1,
    ACTIONS(676), 1,
      anon_sym_LBRACE,
  [5007] = 1,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
  [5011] = 1,
    ACTIONS(680), 1,
      anon_sym_LPAREN,
  [5015] = 1,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
  [5019] = 1,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
  [5023] = 1,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
  [5027] = 1,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
  [5031] = 1,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
  [5035] = 1,
    ACTIONS(692), 1,
      anon_sym_RPAREN,
  [5039] = 1,
    ACTIONS(694), 1,
      anon_sym_while,
  [5043] = 1,
    ACTIONS(696), 1,
      anon_sym_RPAREN,
  [5047] = 1,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
  [5051] = 1,
    ACTIONS(700), 1,
      anon_sym_COLON,
  [5055] = 1,
    ACTIONS(702), 1,
      anon_sym_LBRACE,
  [5059] = 1,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [5063] = 1,
    ACTIONS(706), 1,
      anon_sym_LPAREN,
  [5067] = 1,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
  [5071] = 1,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
  [5075] = 1,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
  [5079] = 1,
    ACTIONS(714), 1,
      anon_sym_LPAREN,
  [5083] = 1,
    ACTIONS(716), 1,
      anon_sym_LBRACE,
  [5087] = 1,
    ACTIONS(718), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 179,
  [SMALL_STATE(7)] = 212,
  [SMALL_STATE(8)] = 247,
  [SMALL_STATE(9)] = 297,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 397,
  [SMALL_STATE(12)] = 447,
  [SMALL_STATE(13)] = 497,
  [SMALL_STATE(14)] = 529,
  [SMALL_STATE(15)] = 561,
  [SMALL_STATE(16)] = 611,
  [SMALL_STATE(17)] = 643,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 707,
  [SMALL_STATE(20)] = 757,
  [SMALL_STATE(21)] = 807,
  [SMALL_STATE(22)] = 857,
  [SMALL_STATE(23)] = 889,
  [SMALL_STATE(24)] = 939,
  [SMALL_STATE(25)] = 989,
  [SMALL_STATE(26)] = 1039,
  [SMALL_STATE(27)] = 1089,
  [SMALL_STATE(28)] = 1125,
  [SMALL_STATE(29)] = 1175,
  [SMALL_STATE(30)] = 1225,
  [SMALL_STATE(31)] = 1275,
  [SMALL_STATE(32)] = 1325,
  [SMALL_STATE(33)] = 1375,
  [SMALL_STATE(34)] = 1425,
  [SMALL_STATE(35)] = 1475,
  [SMALL_STATE(36)] = 1525,
  [SMALL_STATE(37)] = 1575,
  [SMALL_STATE(38)] = 1625,
  [SMALL_STATE(39)] = 1675,
  [SMALL_STATE(40)] = 1709,
  [SMALL_STATE(41)] = 1743,
  [SMALL_STATE(42)] = 1775,
  [SMALL_STATE(43)] = 1806,
  [SMALL_STATE(44)] = 1833,
  [SMALL_STATE(45)] = 1859,
  [SMALL_STATE(46)] = 1887,
  [SMALL_STATE(47)] = 1919,
  [SMALL_STATE(48)] = 1951,
  [SMALL_STATE(49)] = 1977,
  [SMALL_STATE(50)] = 2007,
  [SMALL_STATE(51)] = 2032,
  [SMALL_STATE(52)] = 2057,
  [SMALL_STATE(53)] = 2086,
  [SMALL_STATE(54)] = 2111,
  [SMALL_STATE(55)] = 2136,
  [SMALL_STATE(56)] = 2161,
  [SMALL_STATE(57)] = 2186,
  [SMALL_STATE(58)] = 2211,
  [SMALL_STATE(59)] = 2236,
  [SMALL_STATE(60)] = 2261,
  [SMALL_STATE(61)] = 2286,
  [SMALL_STATE(62)] = 2311,
  [SMALL_STATE(63)] = 2336,
  [SMALL_STATE(64)] = 2361,
  [SMALL_STATE(65)] = 2386,
  [SMALL_STATE(66)] = 2411,
  [SMALL_STATE(67)] = 2435,
  [SMALL_STATE(68)] = 2463,
  [SMALL_STATE(69)] = 2489,
  [SMALL_STATE(70)] = 2517,
  [SMALL_STATE(71)] = 2541,
  [SMALL_STATE(72)] = 2567,
  [SMALL_STATE(73)] = 2590,
  [SMALL_STATE(74)] = 2613,
  [SMALL_STATE(75)] = 2636,
  [SMALL_STATE(76)] = 2659,
  [SMALL_STATE(77)] = 2692,
  [SMALL_STATE(78)] = 2715,
  [SMALL_STATE(79)] = 2738,
  [SMALL_STATE(80)] = 2761,
  [SMALL_STATE(81)] = 2794,
  [SMALL_STATE(82)] = 2817,
  [SMALL_STATE(83)] = 2850,
  [SMALL_STATE(84)] = 2873,
  [SMALL_STATE(85)] = 2896,
  [SMALL_STATE(86)] = 2919,
  [SMALL_STATE(87)] = 2942,
  [SMALL_STATE(88)] = 2975,
  [SMALL_STATE(89)] = 2998,
  [SMALL_STATE(90)] = 3021,
  [SMALL_STATE(91)] = 3054,
  [SMALL_STATE(92)] = 3086,
  [SMALL_STATE(93)] = 3118,
  [SMALL_STATE(94)] = 3150,
  [SMALL_STATE(95)] = 3182,
  [SMALL_STATE(96)] = 3214,
  [SMALL_STATE(97)] = 3246,
  [SMALL_STATE(98)] = 3278,
  [SMALL_STATE(99)] = 3310,
  [SMALL_STATE(100)] = 3342,
  [SMALL_STATE(101)] = 3374,
  [SMALL_STATE(102)] = 3406,
  [SMALL_STATE(103)] = 3438,
  [SMALL_STATE(104)] = 3470,
  [SMALL_STATE(105)] = 3502,
  [SMALL_STATE(106)] = 3531,
  [SMALL_STATE(107)] = 3554,
  [SMALL_STATE(108)] = 3580,
  [SMALL_STATE(109)] = 3611,
  [SMALL_STATE(110)] = 3642,
  [SMALL_STATE(111)] = 3664,
  [SMALL_STATE(112)] = 3682,
  [SMALL_STATE(113)] = 3700,
  [SMALL_STATE(114)] = 3723,
  [SMALL_STATE(115)] = 3738,
  [SMALL_STATE(116)] = 3761,
  [SMALL_STATE(117)] = 3783,
  [SMALL_STATE(118)] = 3807,
  [SMALL_STATE(119)] = 3829,
  [SMALL_STATE(120)] = 3853,
  [SMALL_STATE(121)] = 3874,
  [SMALL_STATE(122)] = 3895,
  [SMALL_STATE(123)] = 3916,
  [SMALL_STATE(124)] = 3937,
  [SMALL_STATE(125)] = 3948,
  [SMALL_STATE(126)] = 3959,
  [SMALL_STATE(127)] = 3969,
  [SMALL_STATE(128)] = 3979,
  [SMALL_STATE(129)] = 3989,
  [SMALL_STATE(130)] = 3999,
  [SMALL_STATE(131)] = 4009,
  [SMALL_STATE(132)] = 4019,
  [SMALL_STATE(133)] = 4029,
  [SMALL_STATE(134)] = 4047,
  [SMALL_STATE(135)] = 4065,
  [SMALL_STATE(136)] = 4075,
  [SMALL_STATE(137)] = 4085,
  [SMALL_STATE(138)] = 4095,
  [SMALL_STATE(139)] = 4105,
  [SMALL_STATE(140)] = 4123,
  [SMALL_STATE(141)] = 4133,
  [SMALL_STATE(142)] = 4143,
  [SMALL_STATE(143)] = 4153,
  [SMALL_STATE(144)] = 4171,
  [SMALL_STATE(145)] = 4189,
  [SMALL_STATE(146)] = 4201,
  [SMALL_STATE(147)] = 4216,
  [SMALL_STATE(148)] = 4231,
  [SMALL_STATE(149)] = 4246,
  [SMALL_STATE(150)] = 4257,
  [SMALL_STATE(151)] = 4271,
  [SMALL_STATE(152)] = 4285,
  [SMALL_STATE(153)] = 4299,
  [SMALL_STATE(154)] = 4313,
  [SMALL_STATE(155)] = 4327,
  [SMALL_STATE(156)] = 4336,
  [SMALL_STATE(157)] = 4347,
  [SMALL_STATE(158)] = 4358,
  [SMALL_STATE(159)] = 4369,
  [SMALL_STATE(160)] = 4382,
  [SMALL_STATE(161)] = 4395,
  [SMALL_STATE(162)] = 4404,
  [SMALL_STATE(163)] = 4413,
  [SMALL_STATE(164)] = 4420,
  [SMALL_STATE(165)] = 4433,
  [SMALL_STATE(166)] = 4443,
  [SMALL_STATE(167)] = 4453,
  [SMALL_STATE(168)] = 4461,
  [SMALL_STATE(169)] = 4471,
  [SMALL_STATE(170)] = 4481,
  [SMALL_STATE(171)] = 4491,
  [SMALL_STATE(172)] = 4501,
  [SMALL_STATE(173)] = 4511,
  [SMALL_STATE(174)] = 4521,
  [SMALL_STATE(175)] = 4531,
  [SMALL_STATE(176)] = 4541,
  [SMALL_STATE(177)] = 4549,
  [SMALL_STATE(178)] = 4555,
  [SMALL_STATE(179)] = 4561,
  [SMALL_STATE(180)] = 4571,
  [SMALL_STATE(181)] = 4581,
  [SMALL_STATE(182)] = 4591,
  [SMALL_STATE(183)] = 4601,
  [SMALL_STATE(184)] = 4609,
  [SMALL_STATE(185)] = 4619,
  [SMALL_STATE(186)] = 4629,
  [SMALL_STATE(187)] = 4639,
  [SMALL_STATE(188)] = 4649,
  [SMALL_STATE(189)] = 4659,
  [SMALL_STATE(190)] = 4669,
  [SMALL_STATE(191)] = 4675,
  [SMALL_STATE(192)] = 4683,
  [SMALL_STATE(193)] = 4693,
  [SMALL_STATE(194)] = 4700,
  [SMALL_STATE(195)] = 4707,
  [SMALL_STATE(196)] = 4714,
  [SMALL_STATE(197)] = 4719,
  [SMALL_STATE(198)] = 4726,
  [SMALL_STATE(199)] = 4731,
  [SMALL_STATE(200)] = 4738,
  [SMALL_STATE(201)] = 4745,
  [SMALL_STATE(202)] = 4752,
  [SMALL_STATE(203)] = 4759,
  [SMALL_STATE(204)] = 4763,
  [SMALL_STATE(205)] = 4767,
  [SMALL_STATE(206)] = 4771,
  [SMALL_STATE(207)] = 4775,
  [SMALL_STATE(208)] = 4779,
  [SMALL_STATE(209)] = 4783,
  [SMALL_STATE(210)] = 4787,
  [SMALL_STATE(211)] = 4791,
  [SMALL_STATE(212)] = 4795,
  [SMALL_STATE(213)] = 4799,
  [SMALL_STATE(214)] = 4803,
  [SMALL_STATE(215)] = 4807,
  [SMALL_STATE(216)] = 4811,
  [SMALL_STATE(217)] = 4815,
  [SMALL_STATE(218)] = 4819,
  [SMALL_STATE(219)] = 4823,
  [SMALL_STATE(220)] = 4827,
  [SMALL_STATE(221)] = 4831,
  [SMALL_STATE(222)] = 4835,
  [SMALL_STATE(223)] = 4839,
  [SMALL_STATE(224)] = 4843,
  [SMALL_STATE(225)] = 4847,
  [SMALL_STATE(226)] = 4851,
  [SMALL_STATE(227)] = 4855,
  [SMALL_STATE(228)] = 4859,
  [SMALL_STATE(229)] = 4863,
  [SMALL_STATE(230)] = 4867,
  [SMALL_STATE(231)] = 4871,
  [SMALL_STATE(232)] = 4875,
  [SMALL_STATE(233)] = 4879,
  [SMALL_STATE(234)] = 4883,
  [SMALL_STATE(235)] = 4887,
  [SMALL_STATE(236)] = 4891,
  [SMALL_STATE(237)] = 4895,
  [SMALL_STATE(238)] = 4899,
  [SMALL_STATE(239)] = 4903,
  [SMALL_STATE(240)] = 4907,
  [SMALL_STATE(241)] = 4911,
  [SMALL_STATE(242)] = 4915,
  [SMALL_STATE(243)] = 4919,
  [SMALL_STATE(244)] = 4923,
  [SMALL_STATE(245)] = 4927,
  [SMALL_STATE(246)] = 4931,
  [SMALL_STATE(247)] = 4935,
  [SMALL_STATE(248)] = 4939,
  [SMALL_STATE(249)] = 4943,
  [SMALL_STATE(250)] = 4947,
  [SMALL_STATE(251)] = 4951,
  [SMALL_STATE(252)] = 4955,
  [SMALL_STATE(253)] = 4959,
  [SMALL_STATE(254)] = 4963,
  [SMALL_STATE(255)] = 4967,
  [SMALL_STATE(256)] = 4971,
  [SMALL_STATE(257)] = 4975,
  [SMALL_STATE(258)] = 4979,
  [SMALL_STATE(259)] = 4983,
  [SMALL_STATE(260)] = 4987,
  [SMALL_STATE(261)] = 4991,
  [SMALL_STATE(262)] = 4995,
  [SMALL_STATE(263)] = 4999,
  [SMALL_STATE(264)] = 5003,
  [SMALL_STATE(265)] = 5007,
  [SMALL_STATE(266)] = 5011,
  [SMALL_STATE(267)] = 5015,
  [SMALL_STATE(268)] = 5019,
  [SMALL_STATE(269)] = 5023,
  [SMALL_STATE(270)] = 5027,
  [SMALL_STATE(271)] = 5031,
  [SMALL_STATE(272)] = 5035,
  [SMALL_STATE(273)] = 5039,
  [SMALL_STATE(274)] = 5043,
  [SMALL_STATE(275)] = 5047,
  [SMALL_STATE(276)] = 5051,
  [SMALL_STATE(277)] = 5055,
  [SMALL_STATE(278)] = 5059,
  [SMALL_STATE(279)] = 5063,
  [SMALL_STATE(280)] = 5067,
  [SMALL_STATE(281)] = 5071,
  [SMALL_STATE(282)] = 5075,
  [SMALL_STATE(283)] = 5079,
  [SMALL_STATE(284)] = 5083,
  [SMALL_STATE(285)] = 5087,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 1, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(280),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(281),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_control_flow, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_control_flow, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 8),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 9),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 9),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 13),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 13),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 14),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 14),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 7, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 7, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(224),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6, 0, 7),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 6, 0, 7),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 7, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 7, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 7, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 8, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_statement, 8, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 11, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 11, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 12, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 12, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(194),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(193),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4, 0, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 4, 0, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 5, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 5, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additives, 1, 0, 0),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 4, 0, 0),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 7, 0, 10),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 7, 0, 12),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 4, 0, 4),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 8, 0, 15),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 8, 0, 10),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 8, 0, 11),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 8, 0, 12),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 4, 0, 5),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 6),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 7, 0, 11),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, 0, 4),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(146),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, 0, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 5, 0, 5),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 4, 0, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(147),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(248),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(250),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 4, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 3, 0, 0),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(192),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1, 0, 0),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 6, 0, 0),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_directive, 1, 0, 0),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additives, 1, 0, 0),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [654] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 5, 0, 0),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
