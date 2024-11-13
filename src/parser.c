#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 248
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 14

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
  sym_source_file = 58,
  sym__definition = 59,
  sym_const = 60,
  sym_string = 61,
  sym_interpolation = 62,
  sym__meta_function_pass = 63,
  sym__expression = 64,
  sym_arithmetic_expression = 65,
  sym_builtin_func = 66,
  sym_builtin_control_flow = 67,
  sym_function_call = 68,
  sym_operator = 69,
  sym_additives = 70,
  sym_boolean = 71,
  sym_text_directive = 72,
  sym_logical_operator = 73,
  sym__boolean_expression = 74,
  sym_while_statement = 75,
  sym_do_while_statement = 76,
  sym_switch_statement = 77,
  sym_if_statement = 78,
  sym_scope = 79,
  sym_script = 80,
  sym_label = 81,
  sym_scripting = 82,
  sym_mart = 83,
  sym_text = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_string_repeat1 = 86,
  aux_sym_interpolation_repeat1 = 87,
  aux_sym_function_call_repeat1 = 88,
  aux_sym_switch_statement_repeat1 = 89,
  aux_sym_if_statement_repeat1 = 90,
  aux_sym_scripting_repeat1 = 91,
  aux_sym_text_repeat1 = 92,
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_const] = "const",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__meta_function_pass] = "_meta_function_pass",
  [sym__expression] = "_expression",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_switch_statement_repeat1] = "switch_statement_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_scripting_repeat1] = "scripting_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_const] = sym_const,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__meta_function_pass] = sym__meta_function_pass,
  [sym__expression] = sym__expression,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_interpolation_repeat1] = aux_sym_interpolation_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_switch_statement_repeat1] = aux_sym_switch_statement_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_scripting_repeat1] = aux_sym_scripting_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
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
};

enum ts_field_identifiers {
  field_const_name = 1,
  field_function_name = 2,
  field_function_params = 3,
  field_label_name = 4,
  field_mart_name = 5,
  field_script_name = 6,
  field_text_name = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_const_name] = "const_name",
  [field_function_name] = "function_name",
  [field_function_params] = "function_params",
  [field_label_name] = "label_name",
  [field_mart_name] = "mart_name",
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
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 3},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 1},
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
    {field_script_name, 1},
  [5] =
    {field_label_name, 0},
  [6] =
    {field_function_name, 0},
    {field_function_params, 2},
  [8] =
    {field_function_params, 2},
  [9] =
    {field_mart_name, 4},
  [10] =
    {field_text_name, 4},
  [11] =
    {field_function_name, 0},
    {field_function_params, 2},
    {field_function_params, 3},
  [14] =
    {field_function_params, 2},
    {field_function_params, 3},
  [16] =
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
  [25] = 8,
  [26] = 26,
  [27] = 27,
  [28] = 3,
  [29] = 9,
  [30] = 19,
  [31] = 31,
  [32] = 10,
  [33] = 20,
  [34] = 21,
  [35] = 11,
  [36] = 26,
  [37] = 27,
  [38] = 2,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 7,
  [45] = 5,
  [46] = 6,
  [47] = 39,
  [48] = 41,
  [49] = 40,
  [50] = 43,
  [51] = 42,
  [52] = 13,
  [53] = 53,
  [54] = 14,
  [55] = 16,
  [56] = 56,
  [57] = 17,
  [58] = 58,
  [59] = 22,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 18,
  [66] = 61,
  [67] = 56,
  [68] = 63,
  [69] = 58,
  [70] = 64,
  [71] = 60,
  [72] = 62,
  [73] = 53,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 74,
  [83] = 83,
  [84] = 80,
  [85] = 76,
  [86] = 79,
  [87] = 78,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 102,
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
  [127] = 127,
  [128] = 127,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 136,
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
  [149] = 140,
  [150] = 150,
  [151] = 146,
  [152] = 152,
  [153] = 153,
  [154] = 150,
  [155] = 145,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 148,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 165,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 171,
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
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 184,
  [204] = 204,
  [205] = 205,
  [206] = 176,
  [207] = 207,
  [208] = 186,
  [209] = 209,
  [210] = 191,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 182,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 212,
  [224] = 224,
  [225] = 187,
  [226] = 193,
  [227] = 194,
  [228] = 228,
  [229] = 209,
  [230] = 220,
  [231] = 228,
  [232] = 202,
  [233] = 205,
  [234] = 215,
  [235] = 190,
  [236] = 222,
  [237] = 237,
  [238] = 213,
  [239] = 239,
  [240] = 204,
  [241] = 241,
  [242] = 179,
  [243] = 180,
  [244] = 214,
  [245] = 207,
  [246] = 177,
  [247] = 195,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(123);
      ADVANCE_MAP(
        '!', 249,
        '"', 217,
        '#', 124,
        '&', 11,
        '(', 245,
        ')', 247,
        '*', 261,
        '+', 259,
        ',', 246,
        '-', 258,
        '/', 260,
        ':', 284,
        '<', 254,
        '=', 257,
        '>', 252,
        'F', 15,
        'T', 19,
        '\\', 118,
        'a', 95,
        'b', 91,
        'c', 22,
        'd', 50,
        'e', 68,
        'f', 23,
        'g', 72,
        'i', 54,
        'l', 86,
        'm', 27,
        'r', 52,
        's', 37,
        't', 42,
        'v', 24,
        'w', 59,
        '{', 220,
        '|', 117,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead == '{') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '{') ADVANCE(220);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 13,
        '#', 124,
        '&', 11,
        '(', 245,
        ')', 247,
        '/', 12,
        ':', 284,
        '<', 254,
        '=', 14,
        '>', 252,
        'b', 199,
        'c', 140,
        'd', 161,
        'e', 190,
        'f', 184,
        'g', 194,
        'i', 165,
        'r', 160,
        's', 215,
        'v', 136,
        'w', 171,
        '|', 117,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 248,
        '&', 11,
        ')', 247,
        '*', 261,
        '+', 259,
        '-', 258,
        '/', 260,
        '=', 256,
        'b', 199,
        'c', 140,
        'd', 162,
        'e', 190,
        'f', 184,
        'g', 194,
        'r', 160,
        'v', 136,
        '|', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == '}') ADVANCE(221);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == ')') ADVANCE(247);
      if (lookahead == 'g') ADVANCE(186);
      if (lookahead == 'l') ADVANCE(197);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(217);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 't') ADVANCE(201);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 8:
      ADVANCE_MAP(
        '#', 124,
        '(', 245,
        '/', 12,
        ':', 284,
        'b', 199,
        'c', 135,
        'd', 158,
        'e', 190,
        'f', 184,
        'g', 194,
        'i', 165,
        'r', 160,
        's', 215,
        'v', 136,
        'w', 171,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '#', 124,
        '/', 12,
        'b', 199,
        'c', 135,
        'd', 158,
        'e', 180,
        'f', 184,
        'g', 194,
        'i', 165,
        'r', 160,
        's', 215,
        'v', 136,
        'w', 171,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '#', 124,
        '/', 12,
        'b', 199,
        'c', 140,
        'd', 161,
        'e', 180,
        'f', 184,
        'g', 194,
        'i', 165,
        'r', 160,
        's', 215,
        'v', 136,
        'w', 171,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 11:
      if (lookahead == '&') ADVANCE(273);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(124);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(262);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(266);
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
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(65);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(285);
      END_STATE();
    case 55:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(287);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(227);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(278);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(270);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(297);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 111:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 116:
      if (lookahead == 'x') ADVANCE(101);
      END_STATE();
    case 117:
      if (lookahead == '|') ADVANCE(272);
      END_STATE();
    case 118:
      if (lookahead == '"' ||
          lookahead == 'N' ||
          lookahead == '\\' ||
          lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 119:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 120:
      if (eof) ADVANCE(123);
      ADVANCE_MAP(
        '!', 249,
        '"', 217,
        '#', 124,
        '&', 11,
        '(', 245,
        ')', 247,
        '*', 261,
        '+', 259,
        ',', 246,
        '-', 258,
        '/', 260,
        ':', 284,
        '<', 254,
        '=', 257,
        '>', 252,
        'F', 15,
        'T', 19,
        'a', 95,
        'b', 91,
        'c', 22,
        'd', 50,
        'e', 68,
        'f', 23,
        'g', 72,
        'i', 54,
        'l', 86,
        'm', 27,
        'r', 52,
        's', 37,
        't', 42,
        'v', 24,
        'w', 59,
        '{', 220,
        '|', 117,
        '}', 221,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(120);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 121:
      if (eof) ADVANCE(123);
      ADVANCE_MAP(
        '!', 13,
        '#', 124,
        '&', 11,
        '(', 245,
        ')', 247,
        '/', 12,
        '<', 254,
        '=', 14,
        '>', 252,
        'c', 88,
        'm', 27,
        's', 36,
        't', 41,
        '|', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(121);
      END_STATE();
    case 122:
      if (eof) ADVANCE(123);
      ADVANCE_MAP(
        '#', 124,
        '&', 11,
        ')', 247,
        '*', 261,
        '+', 259,
        '-', 258,
        '/', 260,
        '=', 256,
        'c', 88,
        'm', 27,
        's', 36,
        't', 41,
        '|', 117,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(137);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_flag);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_flag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_var);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_defeated);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_defeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_format);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_negate);
      if (lookahead == '=') ADVANCE(251);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(250);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_ascii);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_switch);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_local);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_global);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_mart);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 121},
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
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 8},
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
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 122},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 121},
  [92] = {.lex_state = 121},
  [93] = {.lex_state = 121},
  [94] = {.lex_state = 122},
  [95] = {.lex_state = 121},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 121},
  [99] = {.lex_state = 121},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 121},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 121},
  [116] = {.lex_state = 121},
  [117] = {.lex_state = 121},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 121},
  [120] = {.lex_state = 121},
  [121] = {.lex_state = 121},
  [122] = {.lex_state = 121},
  [123] = {.lex_state = 121},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 121},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 119},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 119},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 119},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 0},
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
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 5},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
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
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(224),
    [sym__definition] = STATE(95),
    [sym_const] = STATE(95),
    [sym_script] = STATE(95),
    [sym_mart] = STATE(95),
    [sym_text] = STATE(95),
    [aux_sym_source_file_repeat1] = STATE(95),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_script] = ACTIONS(9),
    [anon_sym_mart] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_while,
    ACTIONS(32), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_switch,
    ACTIONS(40), 1,
      anon_sym_if,
    ACTIONS(38), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(44), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(26), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(23), 7,
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
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_while,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(59), 2,
      anon_sym_case,
      anon_sym_default,
    STATE(44), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(51), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(49), 7,
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
  [108] = 4,
    ACTIONS(47), 2,
      sym_comment,
      anon_sym_RBRACE,
    STATE(44), 2,
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
    ACTIONS(59), 18,
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
  [146] = 2,
    ACTIONS(63), 10,
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
    ACTIONS(65), 18,
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
    ACTIONS(67), 10,
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
    ACTIONS(69), 18,
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
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(73), 18,
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
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(212), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [297] = 11,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      sym_comment,
    STATE(73), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(28), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [347] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(184), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [397] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(204), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [447] = 11,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      sym_comment,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(38), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [497] = 2,
    ACTIONS(97), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(99), 18,
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
    ACTIONS(101), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(103), 18,
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
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(199), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [611] = 2,
    ACTIONS(105), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(107), 18,
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
    ACTIONS(109), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(111), 18,
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
    ACTIONS(113), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(115), 18,
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
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    ACTIONS(93), 1,
      sym_comment,
    STATE(69), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(28), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [757] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(186), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [807] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(191), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [857] = 2,
    ACTIONS(117), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(119), 18,
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
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_while,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(121), 1,
      sym_comment,
    STATE(158), 1,
      sym_scripting,
    STATE(44), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(51), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(49), 7,
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
  [939] = 11,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_while,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(121), 1,
      sym_comment,
    STATE(142), 1,
      sym_scripting,
    STATE(44), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(51), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(49), 7,
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
  [989] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(223), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(238), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1089] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(244), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1139] = 4,
    ACTIONS(47), 2,
      sym_comment,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    STATE(38), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
    ACTIONS(59), 16,
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
  [1175] = 11,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_while,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(123), 1,
      sym_comment,
    STATE(53), 1,
      sym_scripting,
    STATE(44), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(51), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(49), 7,
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
  [1225] = 11,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_while,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(57), 1,
      anon_sym_switch,
    ACTIONS(61), 1,
      anon_sym_if,
    ACTIONS(123), 1,
      sym_comment,
    STATE(58), 1,
      sym_scripting,
    STATE(44), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(51), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(49), 7,
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
  [1275] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(183), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1325] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(203), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1375] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(208), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1425] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(210), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1475] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(240), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1525] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(213), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1575] = 11,
    ACTIONS(77), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_while,
    ACTIONS(87), 1,
      anon_sym_do,
    ACTIONS(89), 1,
      anon_sym_switch,
    ACTIONS(91), 1,
      anon_sym_if,
    STATE(214), 1,
      sym_scripting,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
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
  [1625] = 11,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_while,
    ACTIONS(140), 1,
      anon_sym_do,
    ACTIONS(143), 1,
      anon_sym_switch,
    ACTIONS(146), 1,
      anon_sym_if,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(134), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(131), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
    STATE(38), 7,
      sym_function_call,
      sym_while_statement,
      sym_do_while_statement,
      sym_switch_statement,
      sym_if_statement,
      sym_label,
      aux_sym_scripting_repeat1,
  [1675] = 5,
    ACTIONS(153), 1,
      anon_sym_elif,
    ACTIONS(155), 1,
      anon_sym_else,
    STATE(41), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(149), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(151), 18,
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
  [1709] = 4,
    ACTIONS(161), 1,
      anon_sym_elif,
    STATE(40), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(157), 2,
      sym_comment,
      anon_sym_RBRACE,
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
  [1741] = 5,
    ACTIONS(153), 1,
      anon_sym_elif,
    ACTIONS(168), 1,
      anon_sym_else,
    STATE(40), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(164), 2,
      sym_comment,
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
      anon_sym_case,
      anon_sym_default,
      anon_sym_if,
  [1775] = 4,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_COLON,
    ACTIONS(170), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(172), 18,
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
    ACTIONS(178), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(180), 20,
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
  [1833] = 3,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(73), 18,
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
  [1861] = 2,
    ACTIONS(63), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(65), 18,
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
  [1887] = 2,
    ACTIONS(67), 3,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
    ACTIONS(69), 18,
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
  [1913] = 5,
    ACTIONS(184), 1,
      anon_sym_elif,
    ACTIONS(186), 1,
      anon_sym_else,
    STATE(48), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(149), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(151), 16,
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
  [1945] = 5,
    ACTIONS(184), 1,
      anon_sym_elif,
    ACTIONS(188), 1,
      anon_sym_else,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(164), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(166), 16,
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
  [1977] = 4,
    ACTIONS(190), 1,
      anon_sym_elif,
    STATE(49), 1,
      aux_sym_if_statement_repeat1,
    ACTIONS(157), 2,
      sym_comment,
      anon_sym_RBRACE,
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
  [2007] = 2,
    ACTIONS(178), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(180), 18,
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
  [2032] = 4,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_COLON,
    ACTIONS(170), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(172), 16,
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
  [2061] = 2,
    ACTIONS(97), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(99), 18,
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
  [2086] = 2,
    ACTIONS(197), 2,
      sym_comment,
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
  [2111] = 2,
    ACTIONS(101), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(103), 18,
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
    ACTIONS(105), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(107), 18,
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
    ACTIONS(201), 2,
      sym_comment,
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
  [2186] = 2,
    ACTIONS(109), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(111), 18,
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
    ACTIONS(205), 2,
      sym_comment,
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
  [2236] = 2,
    ACTIONS(117), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(119), 18,
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
    ACTIONS(209), 2,
      sym_comment,
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
  [2286] = 2,
    ACTIONS(213), 2,
      sym_comment,
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
  [2311] = 2,
    ACTIONS(217), 2,
      sym_comment,
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
  [2336] = 2,
    ACTIONS(221), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(223), 18,
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
    ACTIONS(225), 2,
      sym_comment,
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
  [2386] = 2,
    ACTIONS(113), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(115), 18,
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
    ACTIONS(213), 2,
      sym_comment,
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
  [2434] = 2,
    ACTIONS(201), 2,
      sym_comment,
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
  [2457] = 2,
    ACTIONS(221), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(223), 16,
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
  [2480] = 2,
    ACTIONS(205), 2,
      sym_comment,
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
  [2503] = 2,
    ACTIONS(225), 2,
      sym_comment,
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
  [2526] = 2,
    ACTIONS(209), 2,
      sym_comment,
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
  [2549] = 2,
    ACTIONS(217), 2,
      sym_comment,
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
  [2572] = 2,
    ACTIONS(197), 2,
      sym_comment,
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
  [2595] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(247), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2627] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(185), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2659] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(205), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2691] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(241), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2723] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(222), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2755] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(215), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2787] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(202), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2819] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(192), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2851] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(195), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2883] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(201), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2915] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(232), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2947] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(233), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [2979] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(234), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3011] = 7,
    ACTIONS(229), 1,
      sym_identifier,
    ACTIONS(231), 1,
      sym_negate,
    STATE(99), 1,
      sym_function_call,
    STATE(236), 1,
      sym__boolean_expression,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3043] = 3,
    ACTIONS(235), 1,
      sym_comment,
    STATE(129), 1,
      sym_additives,
    ACTIONS(233), 13,
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
  [3065] = 5,
    ACTIONS(237), 1,
      sym_identifier,
    STATE(98), 1,
      sym_function_call,
    STATE(7), 2,
      sym_builtin_func,
      sym_builtin_control_flow,
    ACTIONS(83), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_break,
      anon_sym_continue,
    ACTIONS(81), 7,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_flag,
      anon_sym_var,
      anon_sym_defeated,
      anon_sym_value,
      anon_sym_format,
  [3091] = 2,
    ACTIONS(241), 1,
      sym_negate,
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
  [3109] = 5,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_logical_operator,
    STATE(97), 1,
      sym_operator,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(170), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3132] = 5,
    ACTIONS(243), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_logical_operator,
    STATE(96), 1,
      sym_operator,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(170), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3155] = 7,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_const,
    ACTIONS(253), 1,
      anon_sym_script,
    ACTIONS(256), 1,
      anon_sym_mart,
    ACTIONS(259), 1,
      anon_sym_text,
    STATE(93), 6,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      aux_sym_source_file_repeat1,
  [3182] = 4,
    ACTIONS(264), 1,
      sym_comment,
    STATE(129), 1,
      sym_additives,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
    ACTIONS(266), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3203] = 7,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(9), 1,
      anon_sym_script,
    ACTIONS(11), 1,
      anon_sym_mart,
    ACTIONS(13), 1,
      anon_sym_text,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
    ACTIONS(270), 1,
      sym_comment,
    STATE(93), 6,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      aux_sym_source_file_repeat1,
  [3230] = 5,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 2,
      sym_number,
      sym_identifier,
    STATE(100), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(132), 2,
      sym_string,
      sym_boolean,
    ACTIONS(276), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [3252] = 5,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(278), 2,
      sym_number,
      sym_identifier,
    STATE(101), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(135), 2,
      sym_string,
      sym_boolean,
    ACTIONS(276), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [3274] = 6,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      sym_logical_operator,
    STATE(97), 1,
      sym_operator,
    ACTIONS(284), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3298] = 6,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_logical_operator,
    STATE(96), 1,
      sym_operator,
    ACTIONS(284), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(286), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(282), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [3322] = 5,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_logical_operator,
    STATE(129), 1,
      sym_additives,
    ACTIONS(286), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(266), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3343] = 5,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_logical_operator,
    STATE(129), 1,
      sym_additives,
    ACTIONS(286), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(266), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3364] = 6,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      sym_identifier,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_scope,
    ACTIONS(298), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(159), 2,
      sym_string,
      sym__meta_function_pass,
  [3385] = 1,
    ACTIONS(300), 8,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ascii,
      anon_sym_custom,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3396] = 6,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      sym_identifier,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(216), 1,
      sym_scope,
    ACTIONS(298), 2,
      anon_sym_local,
      anon_sym_global,
    STATE(148), 2,
      sym_string,
      sym__meta_function_pass,
  [3417] = 1,
    ACTIONS(306), 8,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_ascii,
      anon_sym_custom,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3428] = 5,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_text_directive,
    ACTIONS(310), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(107), 2,
      sym_string,
      aux_sym_text_repeat1,
  [3446] = 5,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_text_directive,
    ACTIONS(310), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(111), 2,
      sym_string,
      aux_sym_text_repeat1,
  [3464] = 5,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_text_directive,
    ACTIONS(310), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(110), 2,
      sym_string,
      aux_sym_text_repeat1,
  [3482] = 2,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 6,
      sym_number,
      sym_identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [3494] = 5,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_text_directive,
    ACTIONS(310), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(111), 2,
      sym_string,
      aux_sym_text_repeat1,
  [3512] = 5,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_text_directive,
    ACTIONS(327), 2,
      anon_sym_ascii,
      anon_sym_custom,
    STATE(111), 2,
      sym_string,
      aux_sym_text_repeat1,
  [3530] = 4,
    ACTIONS(330), 1,
      anon_sym_DQUOTE,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(112), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3545] = 1,
    ACTIONS(338), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3554] = 2,
    STATE(134), 1,
      sym_additives,
    ACTIONS(266), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [3565] = 1,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3574] = 1,
    ACTIONS(342), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3583] = 1,
    ACTIONS(344), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3592] = 4,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(112), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3607] = 1,
    ACTIONS(352), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3616] = 1,
    ACTIONS(354), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3625] = 1,
    ACTIONS(356), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3634] = 1,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3643] = 1,
    ACTIONS(360), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3652] = 4,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(118), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [3667] = 1,
    ACTIONS(366), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [3676] = 4,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(159), 2,
      sym_string,
      sym__meta_function_pass,
  [3690] = 4,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(140), 2,
      sym_string,
      sym__meta_function_pass,
  [3704] = 4,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      sym_identifier,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(149), 2,
      sym_string,
      sym__meta_function_pass,
  [3718] = 2,
    ACTIONS(378), 2,
      sym_number,
      sym_identifier,
    STATE(88), 2,
      sym__expression,
      sym_arithmetic_expression,
  [3727] = 3,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    ACTIONS(380), 1,
      sym_identifier,
    STATE(167), 2,
      sym_string,
      sym__meta_function_pass,
  [3738] = 2,
    ACTIONS(382), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(384), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [3747] = 3,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_logical_operator,
    ACTIONS(286), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3758] = 1,
    ACTIONS(325), 4,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_ascii,
      anon_sym_custom,
  [3765] = 2,
    ACTIONS(386), 2,
      sym_number,
      sym_identifier,
    STATE(94), 2,
      sym__expression,
      sym_arithmetic_expression,
  [3774] = 3,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_logical_operator,
    ACTIONS(286), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3785] = 4,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    ACTIONS(390), 1,
      anon_sym_case,
    ACTIONS(392), 1,
      anon_sym_default,
    STATE(138), 1,
      aux_sym_switch_statement_repeat1,
  [3798] = 4,
    ACTIONS(390), 1,
      anon_sym_case,
    ACTIONS(392), 1,
      anon_sym_default,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      aux_sym_switch_statement_repeat1,
  [3811] = 4,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
    ACTIONS(398), 1,
      anon_sym_case,
    ACTIONS(401), 1,
      anon_sym_default,
    STATE(138), 1,
      aux_sym_switch_statement_repeat1,
  [3824] = 1,
    ACTIONS(404), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [3830] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_function_call_repeat1,
  [3840] = 3,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_interpolation_repeat1,
  [3850] = 1,
    ACTIONS(415), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [3856] = 2,
    STATE(217), 1,
      sym_scope,
    ACTIONS(417), 2,
      anon_sym_local,
      anon_sym_global,
  [3864] = 2,
    STATE(197), 1,
      sym_scope,
    ACTIONS(417), 2,
      anon_sym_local,
      anon_sym_global,
  [3872] = 3,
    ACTIONS(390), 1,
      anon_sym_case,
    ACTIONS(392), 1,
      anon_sym_default,
    STATE(137), 1,
      aux_sym_switch_statement_repeat1,
  [3882] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
  [3892] = 3,
    ACTIONS(421), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      aux_sym_interpolation_repeat1,
  [3902] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_function_call_repeat1,
  [3912] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_function_call_repeat1,
  [3922] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
  [3932] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
  [3942] = 3,
    ACTIONS(433), 1,
      sym_identifier,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      aux_sym_interpolation_repeat1,
  [3952] = 3,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_interpolation_repeat1,
  [3962] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
  [3972] = 3,
    ACTIONS(390), 1,
      anon_sym_case,
    ACTIONS(392), 1,
      anon_sym_default,
    STATE(136), 1,
      aux_sym_switch_statement_repeat1,
  [3982] = 3,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_interpolation_repeat1,
  [3992] = 3,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_function_call_repeat1,
  [4002] = 1,
    ACTIONS(450), 3,
      anon_sym_RBRACE,
      anon_sym_case,
      anon_sym_default,
  [4008] = 3,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_function_call_repeat1,
  [4018] = 3,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(141), 1,
      aux_sym_interpolation_repeat1,
  [4028] = 2,
    STATE(175), 1,
      sym_scope,
    ACTIONS(417), 2,
      anon_sym_local,
      anon_sym_global,
  [4036] = 2,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(156), 1,
      aux_sym_interpolation_repeat1,
  [4043] = 2,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
  [4050] = 1,
    ACTIONS(462), 2,
      sym_number,
      sym_identifier,
  [4055] = 2,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
  [4062] = 2,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
  [4069] = 1,
    ACTIONS(448), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4074] = 2,
    ACTIONS(472), 1,
      sym_identifier,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
  [4081] = 2,
    ACTIONS(274), 1,
      anon_sym_DQUOTE,
    STATE(133), 1,
      sym_string,
  [4088] = 2,
    ACTIONS(476), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
  [4095] = 1,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
  [4099] = 1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [4103] = 1,
    ACTIONS(484), 1,
      sym_identifier,
  [4107] = 1,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
  [4111] = 1,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
  [4115] = 1,
    ACTIONS(490), 1,
      anon_sym_COLON,
  [4119] = 1,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
  [4123] = 1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
  [4127] = 1,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
  [4131] = 1,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
  [4135] = 1,
    ACTIONS(500), 1,
      anon_sym_LBRACE,
  [4139] = 1,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
  [4143] = 1,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [4147] = 1,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
  [4151] = 1,
    ACTIONS(292), 1,
      anon_sym_RPAREN,
  [4155] = 1,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
  [4159] = 1,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
  [4163] = 1,
    ACTIONS(512), 1,
      sym_number,
  [4167] = 1,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [4171] = 1,
    ACTIONS(516), 1,
      anon_sym_while,
  [4175] = 1,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
  [4179] = 1,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [4183] = 1,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
  [4187] = 1,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
  [4191] = 1,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [4195] = 1,
    ACTIONS(528), 1,
      anon_sym_COLON,
  [4199] = 1,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [4203] = 1,
    ACTIONS(532), 1,
      sym_identifier,
  [4207] = 1,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
  [4211] = 1,
    ACTIONS(536), 1,
      sym_identifier,
  [4215] = 1,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [4219] = 1,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
  [4223] = 1,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
  [4227] = 1,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [4231] = 1,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [4235] = 1,
    ACTIONS(548), 1,
      anon_sym_COLON,
  [4239] = 1,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
  [4243] = 1,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
  [4247] = 1,
    ACTIONS(554), 1,
      anon_sym_LBRACE,
  [4251] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [4255] = 1,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
  [4259] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
  [4263] = 1,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
  [4267] = 1,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
  [4271] = 1,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
  [4275] = 1,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
  [4279] = 1,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
  [4283] = 1,
    ACTIONS(572), 1,
      sym_identifier,
  [4287] = 1,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
  [4291] = 1,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
  [4295] = 1,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [4299] = 1,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [4303] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [4307] = 1,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
  [4311] = 1,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
  [4315] = 1,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
  [4319] = 1,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
  [4323] = 1,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
  [4327] = 1,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
  [4331] = 1,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
  [4335] = 1,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
  [4339] = 1,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [4343] = 1,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [4347] = 1,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
  [4351] = 1,
    ACTIONS(606), 1,
      anon_sym_while,
  [4355] = 1,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
  [4359] = 1,
    ACTIONS(610), 1,
      anon_sym_LBRACE,
  [4363] = 1,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
  [4367] = 1,
    ACTIONS(614), 1,
      anon_sym_DQUOTE,
  [4371] = 1,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
  [4375] = 1,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
  [4379] = 1,
    ACTIONS(618), 1,
      anon_sym_LPAREN,
  [4383] = 1,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
  [4387] = 1,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
  [4391] = 1,
    ACTIONS(624), 1,
      anon_sym_LPAREN,
  [4395] = 1,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
  [4399] = 1,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
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
  [SMALL_STATE(28)] = 1139,
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
  [SMALL_STATE(41)] = 1741,
  [SMALL_STATE(42)] = 1775,
  [SMALL_STATE(43)] = 1806,
  [SMALL_STATE(44)] = 1833,
  [SMALL_STATE(45)] = 1861,
  [SMALL_STATE(46)] = 1887,
  [SMALL_STATE(47)] = 1913,
  [SMALL_STATE(48)] = 1945,
  [SMALL_STATE(49)] = 1977,
  [SMALL_STATE(50)] = 2007,
  [SMALL_STATE(51)] = 2032,
  [SMALL_STATE(52)] = 2061,
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
  [SMALL_STATE(67)] = 2434,
  [SMALL_STATE(68)] = 2457,
  [SMALL_STATE(69)] = 2480,
  [SMALL_STATE(70)] = 2503,
  [SMALL_STATE(71)] = 2526,
  [SMALL_STATE(72)] = 2549,
  [SMALL_STATE(73)] = 2572,
  [SMALL_STATE(74)] = 2595,
  [SMALL_STATE(75)] = 2627,
  [SMALL_STATE(76)] = 2659,
  [SMALL_STATE(77)] = 2691,
  [SMALL_STATE(78)] = 2723,
  [SMALL_STATE(79)] = 2755,
  [SMALL_STATE(80)] = 2787,
  [SMALL_STATE(81)] = 2819,
  [SMALL_STATE(82)] = 2851,
  [SMALL_STATE(83)] = 2883,
  [SMALL_STATE(84)] = 2915,
  [SMALL_STATE(85)] = 2947,
  [SMALL_STATE(86)] = 2979,
  [SMALL_STATE(87)] = 3011,
  [SMALL_STATE(88)] = 3043,
  [SMALL_STATE(89)] = 3065,
  [SMALL_STATE(90)] = 3091,
  [SMALL_STATE(91)] = 3109,
  [SMALL_STATE(92)] = 3132,
  [SMALL_STATE(93)] = 3155,
  [SMALL_STATE(94)] = 3182,
  [SMALL_STATE(95)] = 3203,
  [SMALL_STATE(96)] = 3230,
  [SMALL_STATE(97)] = 3252,
  [SMALL_STATE(98)] = 3274,
  [SMALL_STATE(99)] = 3298,
  [SMALL_STATE(100)] = 3322,
  [SMALL_STATE(101)] = 3343,
  [SMALL_STATE(102)] = 3364,
  [SMALL_STATE(103)] = 3385,
  [SMALL_STATE(104)] = 3396,
  [SMALL_STATE(105)] = 3417,
  [SMALL_STATE(106)] = 3428,
  [SMALL_STATE(107)] = 3446,
  [SMALL_STATE(108)] = 3464,
  [SMALL_STATE(109)] = 3482,
  [SMALL_STATE(110)] = 3494,
  [SMALL_STATE(111)] = 3512,
  [SMALL_STATE(112)] = 3530,
  [SMALL_STATE(113)] = 3545,
  [SMALL_STATE(114)] = 3554,
  [SMALL_STATE(115)] = 3565,
  [SMALL_STATE(116)] = 3574,
  [SMALL_STATE(117)] = 3583,
  [SMALL_STATE(118)] = 3592,
  [SMALL_STATE(119)] = 3607,
  [SMALL_STATE(120)] = 3616,
  [SMALL_STATE(121)] = 3625,
  [SMALL_STATE(122)] = 3634,
  [SMALL_STATE(123)] = 3643,
  [SMALL_STATE(124)] = 3652,
  [SMALL_STATE(125)] = 3667,
  [SMALL_STATE(126)] = 3676,
  [SMALL_STATE(127)] = 3690,
  [SMALL_STATE(128)] = 3704,
  [SMALL_STATE(129)] = 3718,
  [SMALL_STATE(130)] = 3727,
  [SMALL_STATE(131)] = 3738,
  [SMALL_STATE(132)] = 3747,
  [SMALL_STATE(133)] = 3758,
  [SMALL_STATE(134)] = 3765,
  [SMALL_STATE(135)] = 3774,
  [SMALL_STATE(136)] = 3785,
  [SMALL_STATE(137)] = 3798,
  [SMALL_STATE(138)] = 3811,
  [SMALL_STATE(139)] = 3824,
  [SMALL_STATE(140)] = 3830,
  [SMALL_STATE(141)] = 3840,
  [SMALL_STATE(142)] = 3850,
  [SMALL_STATE(143)] = 3856,
  [SMALL_STATE(144)] = 3864,
  [SMALL_STATE(145)] = 3872,
  [SMALL_STATE(146)] = 3882,
  [SMALL_STATE(147)] = 3892,
  [SMALL_STATE(148)] = 3902,
  [SMALL_STATE(149)] = 3912,
  [SMALL_STATE(150)] = 3922,
  [SMALL_STATE(151)] = 3932,
  [SMALL_STATE(152)] = 3942,
  [SMALL_STATE(153)] = 3952,
  [SMALL_STATE(154)] = 3962,
  [SMALL_STATE(155)] = 3972,
  [SMALL_STATE(156)] = 3982,
  [SMALL_STATE(157)] = 3992,
  [SMALL_STATE(158)] = 4002,
  [SMALL_STATE(159)] = 4008,
  [SMALL_STATE(160)] = 4018,
  [SMALL_STATE(161)] = 4028,
  [SMALL_STATE(162)] = 4036,
  [SMALL_STATE(163)] = 4043,
  [SMALL_STATE(164)] = 4050,
  [SMALL_STATE(165)] = 4055,
  [SMALL_STATE(166)] = 4062,
  [SMALL_STATE(167)] = 4069,
  [SMALL_STATE(168)] = 4074,
  [SMALL_STATE(169)] = 4081,
  [SMALL_STATE(170)] = 4088,
  [SMALL_STATE(171)] = 4095,
  [SMALL_STATE(172)] = 4099,
  [SMALL_STATE(173)] = 4103,
  [SMALL_STATE(174)] = 4107,
  [SMALL_STATE(175)] = 4111,
  [SMALL_STATE(176)] = 4115,
  [SMALL_STATE(177)] = 4119,
  [SMALL_STATE(178)] = 4123,
  [SMALL_STATE(179)] = 4127,
  [SMALL_STATE(180)] = 4131,
  [SMALL_STATE(181)] = 4135,
  [SMALL_STATE(182)] = 4139,
  [SMALL_STATE(183)] = 4143,
  [SMALL_STATE(184)] = 4147,
  [SMALL_STATE(185)] = 4151,
  [SMALL_STATE(186)] = 4155,
  [SMALL_STATE(187)] = 4159,
  [SMALL_STATE(188)] = 4163,
  [SMALL_STATE(189)] = 4167,
  [SMALL_STATE(190)] = 4171,
  [SMALL_STATE(191)] = 4175,
  [SMALL_STATE(192)] = 4179,
  [SMALL_STATE(193)] = 4183,
  [SMALL_STATE(194)] = 4187,
  [SMALL_STATE(195)] = 4191,
  [SMALL_STATE(196)] = 4195,
  [SMALL_STATE(197)] = 4199,
  [SMALL_STATE(198)] = 4203,
  [SMALL_STATE(199)] = 4207,
  [SMALL_STATE(200)] = 4211,
  [SMALL_STATE(201)] = 4215,
  [SMALL_STATE(202)] = 4219,
  [SMALL_STATE(203)] = 4223,
  [SMALL_STATE(204)] = 4227,
  [SMALL_STATE(205)] = 4231,
  [SMALL_STATE(206)] = 4235,
  [SMALL_STATE(207)] = 4239,
  [SMALL_STATE(208)] = 4243,
  [SMALL_STATE(209)] = 4247,
  [SMALL_STATE(210)] = 4251,
  [SMALL_STATE(211)] = 4255,
  [SMALL_STATE(212)] = 4259,
  [SMALL_STATE(213)] = 4263,
  [SMALL_STATE(214)] = 4267,
  [SMALL_STATE(215)] = 4271,
  [SMALL_STATE(216)] = 4275,
  [SMALL_STATE(217)] = 4279,
  [SMALL_STATE(218)] = 4283,
  [SMALL_STATE(219)] = 4287,
  [SMALL_STATE(220)] = 4291,
  [SMALL_STATE(221)] = 4295,
  [SMALL_STATE(222)] = 4299,
  [SMALL_STATE(223)] = 4303,
  [SMALL_STATE(224)] = 4307,
  [SMALL_STATE(225)] = 4311,
  [SMALL_STATE(226)] = 4315,
  [SMALL_STATE(227)] = 4319,
  [SMALL_STATE(228)] = 4323,
  [SMALL_STATE(229)] = 4327,
  [SMALL_STATE(230)] = 4331,
  [SMALL_STATE(231)] = 4335,
  [SMALL_STATE(232)] = 4339,
  [SMALL_STATE(233)] = 4343,
  [SMALL_STATE(234)] = 4347,
  [SMALL_STATE(235)] = 4351,
  [SMALL_STATE(236)] = 4355,
  [SMALL_STATE(237)] = 4359,
  [SMALL_STATE(238)] = 4363,
  [SMALL_STATE(239)] = 4367,
  [SMALL_STATE(240)] = 4371,
  [SMALL_STATE(241)] = 4375,
  [SMALL_STATE(242)] = 4379,
  [SMALL_STATE(243)] = 4383,
  [SMALL_STATE(244)] = 4387,
  [SMALL_STATE(245)] = 4391,
  [SMALL_STATE(246)] = 4395,
  [SMALL_STATE(247)] = 4399,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(246),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(243),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scripting, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_control_flow, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_control_flow, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 7),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 8),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 8),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 11),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 11),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 12),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(245),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 7, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 7, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 6),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 6, 0, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 6, 0, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 7, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_while_statement, 8, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_while_statement, 8, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 11, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 11, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 12, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 12, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 7, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 7, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(200),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4, 0, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 4, 0, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 2, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 4, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(162),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 7, 0, 9),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 7, 0, 10),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, 0, 3),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, 0, 4),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 8, 0, 13),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 8, 0, 9),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 4, 0, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 8, 0, 10),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 4, 0, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(189),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 4, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_switch_statement_repeat1, 3, 0, 0),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additives, 1, 0, 0),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 5, 0, 0),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 6, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [584] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_directive, 1, 0, 0),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
