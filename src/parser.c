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
#define STATE_COUNT 288
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
  [18] = 3,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 3,
  [26] = 24,
  [27] = 27,
  [28] = 14,
  [29] = 29,
  [30] = 2,
  [31] = 27,
  [32] = 15,
  [33] = 16,
  [34] = 21,
  [35] = 22,
  [36] = 23,
  [37] = 29,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 5,
  [45] = 45,
  [46] = 39,
  [47] = 47,
  [48] = 40,
  [49] = 41,
  [50] = 5,
  [51] = 6,
  [52] = 7,
  [53] = 53,
  [54] = 6,
  [55] = 7,
  [56] = 13,
  [57] = 38,
  [58] = 9,
  [59] = 59,
  [60] = 11,
  [61] = 61,
  [62] = 62,
  [63] = 38,
  [64] = 64,
  [65] = 12,
  [66] = 13,
  [67] = 67,
  [68] = 9,
  [69] = 11,
  [70] = 12,
  [71] = 17,
  [72] = 17,
  [73] = 73,
  [74] = 42,
  [75] = 75,
  [76] = 43,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 67,
  [85] = 77,
  [86] = 64,
  [87] = 87,
  [88] = 73,
  [89] = 89,
  [90] = 90,
  [91] = 75,
  [92] = 59,
  [93] = 93,
  [94] = 94,
  [95] = 62,
  [96] = 61,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 94,
  [102] = 83,
  [103] = 98,
  [104] = 97,
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
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 126,
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
  [154] = 152,
  [155] = 153,
  [156] = 152,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 158,
  [164] = 164,
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
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 178,
  [183] = 176,
  [184] = 178,
  [185] = 179,
  [186] = 180,
  [187] = 168,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 180,
  [194] = 176,
  [195] = 195,
  [196] = 117,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 198,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 117,
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
  [236] = 236,
  [237] = 237,
  [238] = 227,
  [239] = 239,
  [240] = 240,
  [241] = 221,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 211,
  [246] = 217,
  [247] = 240,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 248,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 232,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 259,
  [266] = 266,
  [267] = 249,
  [268] = 223,
  [269] = 231,
  [270] = 236,
  [271] = 244,
  [272] = 233,
  [273] = 214,
  [274] = 226,
  [275] = 263,
  [276] = 239,
  [277] = 266,
  [278] = 278,
  [279] = 279,
  [280] = 250,
  [281] = 243,
  [282] = 237,
  [283] = 242,
  [284] = 284,
  [285] = 230,
  [286] = 235,
  [287] = 254,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '!', 263,
        '"', 230,
        '#', 137,
        '&', 13,
        '(', 259,
        ')', 261,
        '*', 275,
        '+', 273,
        ',', 260,
        '-', 272,
        '/', 274,
        ':', 298,
        '<', 268,
        '=', 271,
        '>', 266,
        'F', 17,
        'T', 21,
        '\\', 132,
        'a', 106,
        'b', 102,
        'c', 24,
        'd', 54,
        'e', 76,
        'f', 25,
        'g', 81,
        'i', 61,
        'l', 97,
        'm', 29,
        'r', 56,
        's', 41,
        't', 46,
        'v', 26,
        'w', 67,
        '{', 234,
        '|', 131,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(132);
      if (lookahead == '{') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '{') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 15,
        '#', 137,
        '&', 13,
        '(', 259,
        ')', 261,
        '/', 14,
        ':', 298,
        '<', 268,
        '=', 16,
        '>', 266,
        'b', 212,
        'c', 153,
        'd', 174,
        'e', 203,
        'f', 197,
        'g', 207,
        'i', 178,
        'r', 173,
        's', 228,
        'v', 149,
        'w', 184,
        '|', 131,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 262,
        '#', 137,
        ',', 260,
        '/', 14,
        'b', 212,
        'c', 153,
        'd', 175,
        'e', 203,
        'f', 197,
        'g', 207,
        'r', 173,
        'v', 149,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '}') ADVANCE(235);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == ')') ADVANCE(261);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(210);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(230);
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(141);
      if (lookahead == 'T') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(155);
      if (lookahead == 't') ADVANCE(214);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 137,
        '&', 13,
        '(', 259,
        ')', 261,
        '*', 275,
        '+', 273,
        ',', 260,
        '-', 272,
        '/', 274,
        '=', 270,
        'b', 212,
        'c', 153,
        'd', 175,
        'e', 203,
        'f', 197,
        'g', 207,
        'r', 173,
        'v', 149,
        '|', 131,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 137,
        '(', 259,
        '/', 14,
        ':', 298,
        'b', 212,
        'c', 148,
        'd', 171,
        'e', 203,
        'f', 197,
        'g', 207,
        'i', 178,
        'r', 173,
        's', 228,
        'v', 149,
        'w', 184,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 137,
        '/', 14,
        'b', 212,
        'c', 148,
        'd', 171,
        'e', 193,
        'f', 197,
        'g', 207,
        'i', 178,
        'r', 173,
        's', 228,
        'v', 149,
        'w', 184,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '#', 137,
        '/', 14,
        'b', 212,
        'c', 153,
        'd', 174,
        'e', 193,
        'f', 197,
        'g', 207,
        'i', 178,
        'r', 173,
        's', 228,
        'v', 149,
        'w', 184,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(137);
      if (lookahead == '/') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(287);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(264);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(276);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(280);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'w') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(251);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(245);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(294);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(299);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(301);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(292);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(284);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(255);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(312);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 129:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 130:
      if (lookahead == 'x') ADVANCE(113);
      END_STATE();
    case 131:
      if (lookahead == '|') ADVANCE(286);
      END_STATE();
    case 132:
      if (lookahead == '"' ||
          lookahead == 'N' ||
          lookahead == '\\' ||
          lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 133:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '!', 263,
        '"', 230,
        '#', 137,
        '&', 13,
        '(', 259,
        ')', 261,
        '*', 275,
        '+', 273,
        ',', 260,
        '-', 272,
        '/', 274,
        ':', 298,
        '<', 268,
        '=', 271,
        '>', 266,
        'F', 17,
        'T', 21,
        'a', 106,
        'b', 102,
        'c', 24,
        'd', 54,
        'e', 76,
        'f', 25,
        'g', 81,
        'i', 61,
        'l', 97,
        'm', 29,
        'r', 56,
        's', 41,
        't', 46,
        'v', 26,
        'w', 67,
        '{', 234,
        '|', 131,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 134:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '!', 15,
        '"', 230,
        '#', 137,
        '&', 13,
        '(', 259,
        ')', 261,
        ',', 260,
        '/', 14,
        ':', 298,
        '<', 268,
        '=', 16,
        '>', 266,
        'a', 106,
        'c', 36,
        'd', 59,
        'g', 80,
        'l', 97,
        'm', 29,
        's', 40,
        't', 45,
        'w', 67,
        '{', 234,
        '|', 131,
        '}', 235,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 135:
      if (eof) ADVANCE(136);
      ADVANCE_MAP(
        '#', 137,
        '&', 13,
        ')', 261,
        '*', 275,
        '+', 273,
        '-', 272,
        '/', 274,
        '=', 270,
        'c', 99,
        'm', 29,
        's', 40,
        't', 45,
        '|', 131,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 's') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(233);
      if (lookahead == '/') ADVANCE(232);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_flag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_defeated);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_defeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_format);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_negate);
      if (lookahead == '=') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(264);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_ascii);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_mart);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_movement);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 134},
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
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 9},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 9},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 9},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 135},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 134},
  [113] = {.lex_state = 134},
  [114] = {.lex_state = 134},
  [115] = {.lex_state = 135},
  [116] = {.lex_state = 134},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 134},
  [120] = {.lex_state = 134},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 134},
  [125] = {.lex_state = 134},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 134},
  [130] = {.lex_state = 134},
  [131] = {.lex_state = 134},
  [132] = {.lex_state = 134},
  [133] = {.lex_state = 134},
  [134] = {.lex_state = 134},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 134},
  [137] = {.lex_state = 134},
  [138] = {.lex_state = 134},
  [139] = {.lex_state = 134},
  [140] = {.lex_state = 134},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 134},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 134},
  [145] = {.lex_state = 134},
  [146] = {.lex_state = 134},
  [147] = {.lex_state = 134},
  [148] = {.lex_state = 134},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 134},
  [151] = {.lex_state = 134},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 134},
  [158] = {.lex_state = 134},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 134},
  [161] = {.lex_state = 134},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 134},
  [164] = {.lex_state = 134},
  [165] = {.lex_state = 5},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 134},
  [168] = {.lex_state = 134},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 134},
  [171] = {.lex_state = 134},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 134},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 134},
  [177] = {.lex_state = 134},
  [178] = {.lex_state = 134},
  [179] = {.lex_state = 134},
  [180] = {.lex_state = 134},
  [181] = {.lex_state = 134},
  [182] = {.lex_state = 134},
  [183] = {.lex_state = 134},
  [184] = {.lex_state = 134},
  [185] = {.lex_state = 134},
  [186] = {.lex_state = 134},
  [187] = {.lex_state = 134},
  [188] = {.lex_state = 134},
  [189] = {.lex_state = 134},
  [190] = {.lex_state = 134},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 134},
  [194] = {.lex_state = 134},
  [195] = {.lex_state = 134},
  [196] = {.lex_state = 12},
  [197] = {.lex_state = 5},
  [198] = {.lex_state = 134},
  [199] = {.lex_state = 134},
  [200] = {.lex_state = 134},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 134},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 134},
  [208] = {.lex_state = 134},
  [209] = {.lex_state = 134},
  [210] = {.lex_state = 134},
  [211] = {.lex_state = 134},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 134},
  [214] = {.lex_state = 134},
  [215] = {.lex_state = 134},
  [216] = {.lex_state = 134},
  [217] = {.lex_state = 134},
  [218] = {.lex_state = 134},
  [219] = {.lex_state = 134},
  [220] = {.lex_state = 134},
  [221] = {.lex_state = 134},
  [222] = {.lex_state = 134},
  [223] = {.lex_state = 134},
  [224] = {.lex_state = 134},
  [225] = {.lex_state = 134},
  [226] = {.lex_state = 134},
  [227] = {.lex_state = 134},
  [228] = {.lex_state = 134},
  [229] = {.lex_state = 134},
  [230] = {.lex_state = 134},
  [231] = {.lex_state = 134},
  [232] = {.lex_state = 134},
  [233] = {.lex_state = 134},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 134},
  [236] = {.lex_state = 134},
  [237] = {.lex_state = 134},
  [238] = {.lex_state = 134},
  [239] = {.lex_state = 134},
  [240] = {.lex_state = 134},
  [241] = {.lex_state = 134},
  [242] = {.lex_state = 134},
  [243] = {.lex_state = 134},
  [244] = {.lex_state = 134},
  [245] = {.lex_state = 134},
  [246] = {.lex_state = 134},
  [247] = {.lex_state = 134},
  [248] = {.lex_state = 134},
  [249] = {.lex_state = 134},
  [250] = {.lex_state = 134},
  [251] = {.lex_state = 134},
  [252] = {.lex_state = 134},
  [253] = {.lex_state = 134},
  [254] = {.lex_state = 134},
  [255] = {.lex_state = 134},
  [256] = {.lex_state = 134},
  [257] = {.lex_state = 134},
  [258] = {.lex_state = 134},
  [259] = {.lex_state = 134},
  [260] = {.lex_state = 5},
  [261] = {.lex_state = 134},
  [262] = {.lex_state = 134},
  [263] = {.lex_state = 134},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 134},
  [266] = {.lex_state = 134},
  [267] = {.lex_state = 134},
  [268] = {.lex_state = 134},
  [269] = {.lex_state = 134},
  [270] = {.lex_state = 134},
  [271] = {.lex_state = 134},
  [272] = {.lex_state = 134},
  [273] = {.lex_state = 134},
  [274] = {.lex_state = 134},
  [275] = {.lex_state = 134},
  [276] = {.lex_state = 134},
  [277] = {.lex_state = 134},
  [278] = {.lex_state = 134},
  [279] = {.lex_state = 134},
  [280] = {.lex_state = 134},
  [281] = {.lex_state = 134},
  [282] = {.lex_state = 134},
  [283] = {.lex_state = 134},
  [284] = {.lex_state = 134},
  [285] = {.lex_state = 134},
  [286] = {.lex_state = 134},
  [287] = {.lex_state = 134},
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
  },
  [1] = {
    [sym_source_file] = STATE(252),
    [sym__definition] = STATE(112),
    [sym_const] = STATE(112),
    [sym_script] = STATE(112),
    [sym_mart] = STATE(112),
    [sym_text] = STATE(112),
    [sym_movement] = STATE(112),
    [aux_sym_source_file_repeat1] = STATE(112),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_script] = ACTIONS(11),
    [anon_sym_mart] = ACTIONS(13),
    [anon_sym_text] = ACTIONS(15),
    [anon_sym_movement] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_while,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(36), 1,
      anon_sym_switch,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(39), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(52), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(27), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(24), 7,
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
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_while,
    ACTIONS(54), 1,
      anon_sym_do,
    ACTIONS(56), 1,
      anon_sym_switch,
    ACTIONS(60), 1,
      anon_sym_if,
    ACTIONS(58), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(52), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(50), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(48), 7,
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
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(52), 2,
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
    ACTIONS(58), 18,
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
    ACTIONS(64), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(62), 18,
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
    ACTIONS(68), 9,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(66), 18,
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
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(70), 18,
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
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_while,
    ACTIONS(54), 1,
      anon_sym_do,
    ACTIONS(56), 1,
      anon_sym_switch,
    ACTIONS(60), 1,
      anon_sym_if,
    STATE(189), 1,
      sym_scripting,
    STATE(52), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(50), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(48), 7,
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
  [305] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(76), 18,
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
  [339] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(220), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [389] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(96), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(94), 18,
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
  [423] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(100), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(98), 18,
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
  [457] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(104), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(102), 18,
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
  [491] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(91), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
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
  [541] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(281), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [591] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(211), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [641] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(108), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(106), 18,
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
  [675] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(30), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [725] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(255), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [775] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_while,
    ACTIONS(54), 1,
      anon_sym_do,
    ACTIONS(56), 1,
      anon_sym_switch,
    ACTIONS(60), 1,
      anon_sym_if,
    STATE(190), 1,
      sym_scripting,
    STATE(52), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(50), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(48), 7,
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
  [825] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(240), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [875] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(251), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [925] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(254), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [975] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(84), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
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
  [1025] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(30), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
    ACTIONS(58), 16,
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
  [1063] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_while,
    ACTIONS(54), 1,
      anon_sym_do,
    ACTIONS(56), 1,
      anon_sym_switch,
    ACTIONS(60), 1,
      anon_sym_if,
    STATE(67), 1,
      sym_scripting,
    STATE(52), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(50), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(48), 7,
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
  [1113] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(227), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1163] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_while,
    ACTIONS(54), 1,
      anon_sym_do,
    ACTIONS(56), 1,
      anon_sym_switch,
    ACTIONS(60), 1,
      anon_sym_if,
    STATE(75), 1,
      sym_scripting,
    STATE(52), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(50), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(48), 7,
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
  [1213] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(250), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1263] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_while,
    ACTIONS(122), 1,
      anon_sym_do,
    ACTIONS(125), 1,
      anon_sym_switch,
    ACTIONS(128), 1,
      anon_sym_if,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(116), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(113), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(30), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1313] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(238), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1363] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(243), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1413] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(245), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1463] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(247), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1513] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(248), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1563] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(287), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1613] = 11,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_while,
    ACTIONS(88), 1,
      anon_sym_do,
    ACTIONS(90), 1,
      anon_sym_switch,
    ACTIONS(92), 1,
      anon_sym_if,
    STATE(280), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(18), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1663] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(133), 8,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(131), 18,
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
  [1697] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(139), 1,
      anon_sym_elif,
    ACTIONS(141), 1,
      anon_sym_else,
    STATE(40), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(135), 18,
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
  [1733] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_elif,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      anon_sym_else,
    STATE(41), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(143), 18,
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
  [1769] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 1,
      anon_sym_elif,
    STATE(41), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(149), 19,
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
  [1803] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 20,
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
  [1832] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_COLON,
    ACTIONS(160), 18,
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
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(62), 12,
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
  [1893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(105), 1,
      sym_additives,
    ACTIONS(170), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(172), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(168), 12,
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
  [1925] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_elif,
    ACTIONS(176), 1,
      anon_sym_else,
    STATE(48), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(135), 16,
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
  [1959] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(262), 1,
      sym_additives,
    ACTIONS(180), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(182), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(178), 12,
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
  [1991] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_elif,
    ACTIONS(184), 1,
      anon_sym_else,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(143), 16,
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
  [2025] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 1,
      anon_sym_elif,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(149), 17,
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
  [2057] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(62), 18,
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
  [2085] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(66), 18,
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
  [2113] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 18,
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
  [2143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(162), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(160), 12,
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
  [2173] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 8,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(66), 12,
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
  [2201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(70), 12,
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
  [2231] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 18,
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
  [2258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(131), 12,
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
  [2285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(76), 12,
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
  [2312] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 18,
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
  [2339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(94), 12,
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
  [2366] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 18,
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
  [2393] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 18,
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
  [2420] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 18,
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
  [2447] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 18,
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
  [2474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(98), 12,
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
  [2501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(102), 12,
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
  [2528] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 18,
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
  [2555] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 18,
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
  [2582] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 18,
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
  [2609] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 18,
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
  [2636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 7,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(106), 12,
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
  [2663] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 18,
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
  [2690] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 18,
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
  [2717] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(156), 18,
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
  [2744] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 18,
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
  [2771] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(160), 16,
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
  [2802] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 18,
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
  [2829] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_function_call,
    STATE(79), 1,
      aux_sym_movement_repeat1,
    STATE(109), 1,
      sym__movement_expression,
    STATE(55), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(237), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(235), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2867] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_function_call,
    STATE(79), 1,
      aux_sym_movement_repeat1,
    STATE(109), 1,
      sym__movement_expression,
    STATE(55), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(247), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(244), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2905] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_function_call,
    STATE(81), 1,
      aux_sym_movement_repeat1,
    STATE(109), 1,
      sym__movement_expression,
    STATE(55), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(237), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(235), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2943] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_function_call,
    STATE(79), 1,
      aux_sym_movement_repeat1,
    STATE(109), 1,
      sym__movement_expression,
    STATE(55), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(237), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(235), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2981] = 9,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_function_call,
    STATE(78), 1,
      aux_sym_movement_repeat1,
    STATE(109), 1,
      sym__movement_expression,
    STATE(55), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(237), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(235), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3019] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(217), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3054] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 16,
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
  [3079] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 16,
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
  [3104] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 16,
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
  [3129] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(216), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3164] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 16,
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
  [3189] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(278), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3224] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(213), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3259] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 16,
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
  [3284] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 16,
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
  [3309] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(224), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3344] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(239), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3379] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 16,
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
  [3404] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 16,
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
  [3429] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(226), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3464] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(233), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3499] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(214), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3534] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(273), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3569] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(276), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3604] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(246), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3639] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(272), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3674] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      sym_negate,
    STATE(119), 1,
      sym_function_call,
    STATE(274), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3709] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(47), 1,
      sym_function_call,
    STATE(108), 1,
      sym__movement_expression,
    STATE(55), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(237), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(235), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3741] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(120), 1,
      sym_function_call,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(82), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_additives,
    ACTIONS(262), 14,
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
  [3793] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(264), 12,
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
  [3815] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(268), 12,
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
  [3839] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(274), 12,
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
  [3860] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym_negate,
    ACTIONS(276), 12,
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
  [3881] = 8,
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
    ACTIONS(280), 1,
      ts_builtin_sym_end,
    STATE(113), 7,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      sym_movement,
      aux_sym_source_file_repeat1,
  [3912] = 8,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      anon_sym_const,
    ACTIONS(287), 1,
      anon_sym_script,
    ACTIONS(290), 1,
      anon_sym_mart,
    ACTIONS(293), 1,
      anon_sym_text,
    ACTIONS(296), 1,
      anon_sym_movement,
    STATE(113), 7,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      sym_movement,
      aux_sym_source_file_repeat1,
  [3943] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_logical_operator,
    STATE(118), 1,
      sym_operator,
    ACTIONS(160), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(162), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(162), 1,
      sym_additives,
    ACTIONS(303), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [3991] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_logical_operator,
    STATE(121), 1,
      sym_operator,
    ACTIONS(160), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(162), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4017] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(305), 12,
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
  [4035] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(307), 2,
      sym_number,
      sym_identifier,
    STATE(123), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(164), 2,
      sym_string,
      sym_boolean,
    ACTIONS(311), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [4060] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      sym_logical_operator,
    STATE(118), 1,
      sym_operator,
    ACTIONS(317), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4087] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_logical_operator,
    STATE(121), 1,
      sym_operator,
    ACTIONS(317), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(315), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [4114] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 2,
      sym_number,
      sym_identifier,
    STATE(122), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(157), 2,
      sym_string,
      sym_boolean,
    ACTIONS(311), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [4139] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_logical_operator,
    STATE(162), 1,
      sym_additives,
    ACTIONS(319), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(303), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4163] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_logical_operator,
    STATE(162), 1,
      sym_additives,
    ACTIONS(319), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(303), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4187] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(329), 8,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ascii,
      anon_sym_custom,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4201] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(331), 8,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ascii,
      anon_sym_custom,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4215] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      sym_identifier,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      sym_scope,
    ACTIONS(337), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(183), 2,
      sym_string,
      sym__meta_function_pass,
  [4239] = 7,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      sym_identifier,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      sym_scope,
    ACTIONS(337), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(176), 2,
      sym_string,
      sym__meta_function_pass,
  [4263] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 6,
      sym_number,
      sym_identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [4278] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_text_directive,
    ACTIONS(349), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(130), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4299] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_text_directive,
    ACTIONS(349), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(133), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4320] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_text_directive,
    ACTIONS(349), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(133), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4341] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_text_directive,
    ACTIONS(349), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(131), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4362] = 6,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_text_directive,
    ACTIONS(362), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(133), 2,
      sym_string,
      aux_sym_text_repeat1,
  [4383] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(365), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(372), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(135), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [4413] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(375), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4425] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(377), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4437] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(379), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4449] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(381), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4461] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(383), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(387), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(135), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [4491] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(391), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(166), 1,
      sym_additives,
    ACTIONS(303), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [4517] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(393), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4529] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(395), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4541] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(397), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4553] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(399), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4565] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(401), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    ACTIONS(403), 1,
      anon_sym_DQUOTE,
    ACTIONS(405), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(141), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [4595] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(407), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4607] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(409), 6,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
      anon_sym_movement,
  [4619] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(411), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_RPAREN,
    STATE(184), 2,
      sym_string,
      sym__meta_function_pass,
  [4636] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    STATE(194), 2,
      sym_string,
      sym__meta_function_pass,
  [4653] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
    STATE(178), 2,
      sym_string,
      sym__meta_function_pass,
  [4670] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      sym_identifier,
    STATE(176), 2,
      sym_string,
      sym__meta_function_pass,
  [4687] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(182), 2,
      sym_string,
      sym__meta_function_pass,
  [4704] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_logical_operator,
    ACTIONS(319), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4718] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    ACTIONS(431), 1,
      anon_sym_case,
    ACTIONS(433), 1,
      anon_sym_default,
    STATE(160), 1,
      aux_sym_switch_statement_repeat1,
  [4734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(437), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4746] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    ACTIONS(441), 1,
      anon_sym_case,
    ACTIONS(444), 1,
      anon_sym_default,
    STATE(160), 1,
      aux_sym_switch_statement_repeat1,
  [4762] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(360), 4,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_ascii,
      anon_sym_custom,
  [4772] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(447), 2,
      sym_number,
      sym_identifier,
    STATE(107), 2,
      sym__expression,
      sym_arithmetic_expression,
  [4784] = 5,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_case,
    ACTIONS(433), 1,
      anon_sym_default,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_switch_statement_repeat1,
  [4800] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_logical_operator,
    ACTIONS(319), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4814] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(451), 1,
      sym_identifier,
    STATE(195), 2,
      sym_string,
      sym__meta_function_pass,
  [4828] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(453), 2,
      sym_number,
      sym_identifier,
    STATE(115), 2,
      sym__expression,
      sym_arithmetic_expression,
  [4840] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(229), 1,
      sym_scope,
    ACTIONS(455), 2,
      anon_sym_local,
      anon_sym_global,
  [4851] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_case,
    ACTIONS(433), 1,
      anon_sym_default,
    STATE(158), 1,
      aux_sym_switch_statement_repeat1,
  [4864] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_interpolation_repeat1,
  [4877] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_call_repeat1,
  [4890] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(222), 1,
      sym_scope,
    ACTIONS(455), 2,
      anon_sym_local,
      anon_sym_global,
  [4901] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_interpolation_repeat1,
  [4914] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [4923] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      aux_sym_interpolation_repeat1,
  [4936] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_interpolation_repeat1,
  [4949] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_function_call_repeat1,
  [4962] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(209), 1,
      sym_scope,
    ACTIONS(455), 2,
      anon_sym_local,
      anon_sym_global,
  [4973] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_function_call_repeat1,
  [4986] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_call_repeat1,
  [4999] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_call_repeat1,
  [5012] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_call_repeat1,
  [5025] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      aux_sym_function_call_repeat1,
  [5038] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_function_call_repeat1,
  [5051] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_function_call_repeat1,
  [5064] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_call_repeat1,
  [5077] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_call_repeat1,
  [5090] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_case,
    ACTIONS(433), 1,
      anon_sym_default,
    STATE(163), 1,
      aux_sym_switch_statement_repeat1,
  [5103] = 3,
    ACTIONS(7), 1,
      sym_comment,
    STATE(261), 1,
      sym_scope,
    ACTIONS(455), 2,
      anon_sym_local,
      anon_sym_global,
  [5114] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(501), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [5123] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(503), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [5132] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      aux_sym_interpolation_repeat1,
  [5145] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(507), 1,
      sym_identifier,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_interpolation_repeat1,
  [5158] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_function_call_repeat1,
  [5171] = 4,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_function_call_repeat1,
  [5184] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5192] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(305), 2,
      sym_number,
      sym_identifier,
  [5200] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
  [5210] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 1,
      anon_sym_LPAREN,
  [5220] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym_string,
  [5230] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_LPAREN,
  [5240] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(527), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
  [5250] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
  [5260] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_identifier,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
  [5270] = 3,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(175), 1,
      aux_sym_interpolation_repeat1,
  [5280] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(541), 1,
      sym_number,
  [5287] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(543), 1,
      sym_identifier,
  [5294] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(545), 1,
      sym_number,
  [5301] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COLON,
  [5308] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [5315] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
  [5322] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
  [5329] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(555), 1,
      sym_identifier,
  [5336] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
  [5343] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [5350] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_LBRACE,
  [5357] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [5364] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
  [5371] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
  [5378] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_COLON,
  [5385] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
  [5392] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [5399] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [5406] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [5413] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
  [5420] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
  [5427] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
  [5434] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RBRACE,
  [5441] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
  [5448] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [5455] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_LPAREN,
  [5462] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
  [5469] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [5476] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [5483] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_identifier,
  [5490] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_LBRACE,
  [5497] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
  [5504] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_LPAREN,
  [5511] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
  [5518] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [5525] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
  [5532] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_COLON,
  [5539] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
  [5546] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
  [5553] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_LBRACE,
  [5560] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACE,
  [5567] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RPAREN,
  [5574] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
  [5581] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
  [5588] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
  [5595] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
  [5602] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
  [5609] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
  [5616] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
  [5623] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
  [5630] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
  [5637] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [5644] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_LBRACE,
  [5651] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_LBRACE,
  [5658] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
  [5665] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(649), 1,
      sym_identifier,
  [5672] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
  [5679] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(653), 1,
      sym_number,
  [5686] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_while,
  [5693] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(657), 1,
      sym_identifier,
  [5700] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_LBRACE,
  [5707] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
  [5714] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_LBRACE,
  [5721] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_LPAREN,
  [5728] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
  [5735] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_LBRACE,
  [5742] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_LBRACE,
  [5749] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
  [5756] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
  [5763] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
  [5770] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_while,
  [5777] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
  [5784] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
  [5791] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
  [5798] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(685), 1,
      anon_sym_DQUOTE,
  [5805] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
  [5812] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
  [5819] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
  [5826] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
  [5833] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
  [5840] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
  [5847] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
  [5854] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
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
  [SMALL_STATE(10)] = 339,
  [SMALL_STATE(11)] = 389,
  [SMALL_STATE(12)] = 423,
  [SMALL_STATE(13)] = 457,
  [SMALL_STATE(14)] = 491,
  [SMALL_STATE(15)] = 541,
  [SMALL_STATE(16)] = 591,
  [SMALL_STATE(17)] = 641,
  [SMALL_STATE(18)] = 675,
  [SMALL_STATE(19)] = 725,
  [SMALL_STATE(20)] = 775,
  [SMALL_STATE(21)] = 825,
  [SMALL_STATE(22)] = 875,
  [SMALL_STATE(23)] = 925,
  [SMALL_STATE(24)] = 975,
  [SMALL_STATE(25)] = 1025,
  [SMALL_STATE(26)] = 1063,
  [SMALL_STATE(27)] = 1113,
  [SMALL_STATE(28)] = 1163,
  [SMALL_STATE(29)] = 1213,
  [SMALL_STATE(30)] = 1263,
  [SMALL_STATE(31)] = 1313,
  [SMALL_STATE(32)] = 1363,
  [SMALL_STATE(33)] = 1413,
  [SMALL_STATE(34)] = 1463,
  [SMALL_STATE(35)] = 1513,
  [SMALL_STATE(36)] = 1563,
  [SMALL_STATE(37)] = 1613,
  [SMALL_STATE(38)] = 1663,
  [SMALL_STATE(39)] = 1697,
  [SMALL_STATE(40)] = 1733,
  [SMALL_STATE(41)] = 1769,
  [SMALL_STATE(42)] = 1803,
  [SMALL_STATE(43)] = 1832,
  [SMALL_STATE(44)] = 1865,
  [SMALL_STATE(45)] = 1893,
  [SMALL_STATE(46)] = 1925,
  [SMALL_STATE(47)] = 1959,
  [SMALL_STATE(48)] = 1991,
  [SMALL_STATE(49)] = 2025,
  [SMALL_STATE(50)] = 2057,
  [SMALL_STATE(51)] = 2085,
  [SMALL_STATE(52)] = 2113,
  [SMALL_STATE(53)] = 2143,
  [SMALL_STATE(54)] = 2173,
  [SMALL_STATE(55)] = 2201,
  [SMALL_STATE(56)] = 2231,
  [SMALL_STATE(57)] = 2258,
  [SMALL_STATE(58)] = 2285,
  [SMALL_STATE(59)] = 2312,
  [SMALL_STATE(60)] = 2339,
  [SMALL_STATE(61)] = 2366,
  [SMALL_STATE(62)] = 2393,
  [SMALL_STATE(63)] = 2420,
  [SMALL_STATE(64)] = 2447,
  [SMALL_STATE(65)] = 2474,
  [SMALL_STATE(66)] = 2501,
  [SMALL_STATE(67)] = 2528,
  [SMALL_STATE(68)] = 2555,
  [SMALL_STATE(69)] = 2582,
  [SMALL_STATE(70)] = 2609,
  [SMALL_STATE(71)] = 2636,
  [SMALL_STATE(72)] = 2663,
  [SMALL_STATE(73)] = 2690,
  [SMALL_STATE(74)] = 2717,
  [SMALL_STATE(75)] = 2744,
  [SMALL_STATE(76)] = 2771,
  [SMALL_STATE(77)] = 2802,
  [SMALL_STATE(78)] = 2829,
  [SMALL_STATE(79)] = 2867,
  [SMALL_STATE(80)] = 2905,
  [SMALL_STATE(81)] = 2943,
  [SMALL_STATE(82)] = 2981,
  [SMALL_STATE(83)] = 3019,
  [SMALL_STATE(84)] = 3054,
  [SMALL_STATE(85)] = 3079,
  [SMALL_STATE(86)] = 3104,
  [SMALL_STATE(87)] = 3129,
  [SMALL_STATE(88)] = 3164,
  [SMALL_STATE(89)] = 3189,
  [SMALL_STATE(90)] = 3224,
  [SMALL_STATE(91)] = 3259,
  [SMALL_STATE(92)] = 3284,
  [SMALL_STATE(93)] = 3309,
  [SMALL_STATE(94)] = 3344,
  [SMALL_STATE(95)] = 3379,
  [SMALL_STATE(96)] = 3404,
  [SMALL_STATE(97)] = 3429,
  [SMALL_STATE(98)] = 3464,
  [SMALL_STATE(99)] = 3499,
  [SMALL_STATE(100)] = 3534,
  [SMALL_STATE(101)] = 3569,
  [SMALL_STATE(102)] = 3604,
  [SMALL_STATE(103)] = 3639,
  [SMALL_STATE(104)] = 3674,
  [SMALL_STATE(105)] = 3709,
  [SMALL_STATE(106)] = 3741,
  [SMALL_STATE(107)] = 3770,
  [SMALL_STATE(108)] = 3793,
  [SMALL_STATE(109)] = 3815,
  [SMALL_STATE(110)] = 3839,
  [SMALL_STATE(111)] = 3860,
  [SMALL_STATE(112)] = 3881,
  [SMALL_STATE(113)] = 3912,
  [SMALL_STATE(114)] = 3943,
  [SMALL_STATE(115)] = 3969,
  [SMALL_STATE(116)] = 3991,
  [SMALL_STATE(117)] = 4017,
  [SMALL_STATE(118)] = 4035,
  [SMALL_STATE(119)] = 4060,
  [SMALL_STATE(120)] = 4087,
  [SMALL_STATE(121)] = 4114,
  [SMALL_STATE(122)] = 4139,
  [SMALL_STATE(123)] = 4163,
  [SMALL_STATE(124)] = 4187,
  [SMALL_STATE(125)] = 4201,
  [SMALL_STATE(126)] = 4215,
  [SMALL_STATE(127)] = 4239,
  [SMALL_STATE(128)] = 4263,
  [SMALL_STATE(129)] = 4278,
  [SMALL_STATE(130)] = 4299,
  [SMALL_STATE(131)] = 4320,
  [SMALL_STATE(132)] = 4341,
  [SMALL_STATE(133)] = 4362,
  [SMALL_STATE(134)] = 4383,
  [SMALL_STATE(135)] = 4395,
  [SMALL_STATE(136)] = 4413,
  [SMALL_STATE(137)] = 4425,
  [SMALL_STATE(138)] = 4437,
  [SMALL_STATE(139)] = 4449,
  [SMALL_STATE(140)] = 4461,
  [SMALL_STATE(141)] = 4473,
  [SMALL_STATE(142)] = 4491,
  [SMALL_STATE(143)] = 4503,
  [SMALL_STATE(144)] = 4517,
  [SMALL_STATE(145)] = 4529,
  [SMALL_STATE(146)] = 4541,
  [SMALL_STATE(147)] = 4553,
  [SMALL_STATE(148)] = 4565,
  [SMALL_STATE(149)] = 4577,
  [SMALL_STATE(150)] = 4595,
  [SMALL_STATE(151)] = 4607,
  [SMALL_STATE(152)] = 4619,
  [SMALL_STATE(153)] = 4636,
  [SMALL_STATE(154)] = 4653,
  [SMALL_STATE(155)] = 4670,
  [SMALL_STATE(156)] = 4687,
  [SMALL_STATE(157)] = 4704,
  [SMALL_STATE(158)] = 4718,
  [SMALL_STATE(159)] = 4734,
  [SMALL_STATE(160)] = 4746,
  [SMALL_STATE(161)] = 4762,
  [SMALL_STATE(162)] = 4772,
  [SMALL_STATE(163)] = 4784,
  [SMALL_STATE(164)] = 4800,
  [SMALL_STATE(165)] = 4814,
  [SMALL_STATE(166)] = 4828,
  [SMALL_STATE(167)] = 4840,
  [SMALL_STATE(168)] = 4851,
  [SMALL_STATE(169)] = 4864,
  [SMALL_STATE(170)] = 4877,
  [SMALL_STATE(171)] = 4890,
  [SMALL_STATE(172)] = 4901,
  [SMALL_STATE(173)] = 4914,
  [SMALL_STATE(174)] = 4923,
  [SMALL_STATE(175)] = 4936,
  [SMALL_STATE(176)] = 4949,
  [SMALL_STATE(177)] = 4962,
  [SMALL_STATE(178)] = 4973,
  [SMALL_STATE(179)] = 4986,
  [SMALL_STATE(180)] = 4999,
  [SMALL_STATE(181)] = 5012,
  [SMALL_STATE(182)] = 5025,
  [SMALL_STATE(183)] = 5038,
  [SMALL_STATE(184)] = 5051,
  [SMALL_STATE(185)] = 5064,
  [SMALL_STATE(186)] = 5077,
  [SMALL_STATE(187)] = 5090,
  [SMALL_STATE(188)] = 5103,
  [SMALL_STATE(189)] = 5114,
  [SMALL_STATE(190)] = 5123,
  [SMALL_STATE(191)] = 5132,
  [SMALL_STATE(192)] = 5145,
  [SMALL_STATE(193)] = 5158,
  [SMALL_STATE(194)] = 5171,
  [SMALL_STATE(195)] = 5184,
  [SMALL_STATE(196)] = 5192,
  [SMALL_STATE(197)] = 5200,
  [SMALL_STATE(198)] = 5210,
  [SMALL_STATE(199)] = 5220,
  [SMALL_STATE(200)] = 5230,
  [SMALL_STATE(201)] = 5240,
  [SMALL_STATE(202)] = 5250,
  [SMALL_STATE(203)] = 5260,
  [SMALL_STATE(204)] = 5270,
  [SMALL_STATE(205)] = 5280,
  [SMALL_STATE(206)] = 5287,
  [SMALL_STATE(207)] = 5294,
  [SMALL_STATE(208)] = 5301,
  [SMALL_STATE(209)] = 5308,
  [SMALL_STATE(210)] = 5315,
  [SMALL_STATE(211)] = 5322,
  [SMALL_STATE(212)] = 5329,
  [SMALL_STATE(213)] = 5336,
  [SMALL_STATE(214)] = 5343,
  [SMALL_STATE(215)] = 5350,
  [SMALL_STATE(216)] = 5357,
  [SMALL_STATE(217)] = 5364,
  [SMALL_STATE(218)] = 5371,
  [SMALL_STATE(219)] = 5378,
  [SMALL_STATE(220)] = 5385,
  [SMALL_STATE(221)] = 5392,
  [SMALL_STATE(222)] = 5399,
  [SMALL_STATE(223)] = 5406,
  [SMALL_STATE(224)] = 5413,
  [SMALL_STATE(225)] = 5420,
  [SMALL_STATE(226)] = 5427,
  [SMALL_STATE(227)] = 5434,
  [SMALL_STATE(228)] = 5441,
  [SMALL_STATE(229)] = 5448,
  [SMALL_STATE(230)] = 5455,
  [SMALL_STATE(231)] = 5462,
  [SMALL_STATE(232)] = 5469,
  [SMALL_STATE(233)] = 5476,
  [SMALL_STATE(234)] = 5483,
  [SMALL_STATE(235)] = 5490,
  [SMALL_STATE(236)] = 5497,
  [SMALL_STATE(237)] = 5504,
  [SMALL_STATE(238)] = 5511,
  [SMALL_STATE(239)] = 5518,
  [SMALL_STATE(240)] = 5525,
  [SMALL_STATE(241)] = 5532,
  [SMALL_STATE(242)] = 5539,
  [SMALL_STATE(243)] = 5546,
  [SMALL_STATE(244)] = 5553,
  [SMALL_STATE(245)] = 5560,
  [SMALL_STATE(246)] = 5567,
  [SMALL_STATE(247)] = 5574,
  [SMALL_STATE(248)] = 5581,
  [SMALL_STATE(249)] = 5588,
  [SMALL_STATE(250)] = 5595,
  [SMALL_STATE(251)] = 5602,
  [SMALL_STATE(252)] = 5609,
  [SMALL_STATE(253)] = 5616,
  [SMALL_STATE(254)] = 5623,
  [SMALL_STATE(255)] = 5630,
  [SMALL_STATE(256)] = 5637,
  [SMALL_STATE(257)] = 5644,
  [SMALL_STATE(258)] = 5651,
  [SMALL_STATE(259)] = 5658,
  [SMALL_STATE(260)] = 5665,
  [SMALL_STATE(261)] = 5672,
  [SMALL_STATE(262)] = 5679,
  [SMALL_STATE(263)] = 5686,
  [SMALL_STATE(264)] = 5693,
  [SMALL_STATE(265)] = 5700,
  [SMALL_STATE(266)] = 5707,
  [SMALL_STATE(267)] = 5714,
  [SMALL_STATE(268)] = 5721,
  [SMALL_STATE(269)] = 5728,
  [SMALL_STATE(270)] = 5735,
  [SMALL_STATE(271)] = 5742,
  [SMALL_STATE(272)] = 5749,
  [SMALL_STATE(273)] = 5756,
  [SMALL_STATE(274)] = 5763,
  [SMALL_STATE(275)] = 5770,
  [SMALL_STATE(276)] = 5777,
  [SMALL_STATE(277)] = 5784,
  [SMALL_STATE(278)] = 5791,
  [SMALL_STATE(279)] = 5798,
  [SMALL_STATE(280)] = 5805,
  [SMALL_STATE(281)] = 5812,
  [SMALL_STATE(282)] = 5819,
  [SMALL_STATE(283)] = 5826,
  [SMALL_STATE(284)] = 5833,
  [SMALL_STATE(285)] = 5840,
  [SMALL_STATE(286)] = 5847,
  [SMALL_STATE(287)] = 5854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(286),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(282),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_control_flow, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_control_flow, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 8),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 8),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 9),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 9),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 13),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 13),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 14),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 14),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(237),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(285),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 7, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 7, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 1, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 1, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_statement, 8, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 8, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 12, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 12, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 11, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 11, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 7),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 7, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 7, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 6, 0, 7),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6, 0, 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 7, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__movement_expression, 5, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__movement_expression, 5, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_movement_repeat1, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_movement_repeat1, 2, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(201),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(203),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4, 0, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additives, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 4, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(279),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 4, 0, 5),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(135),
  [372] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(204),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 7, 0, 12),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 4, 0, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, 0, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 7, 0, 10),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, 0, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 8, 0, 11),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 7, 0, 11),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 8, 0, 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 4, 0, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_movement, 5, 0, 5),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 8, 0, 15),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 8, 0, 10),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(208),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [461] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 3, 0, 0),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 4, 0, 0),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additives, 1, 0, 0),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 5, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 6, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [633] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1, 0, 0),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_directive, 1, 0, 0),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
