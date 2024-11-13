#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_end = 10,
  anon_sym_return = 11,
  anon_sym_call = 12,
  anon_sym_goto = 13,
  anon_sym_LPAREN = 14,
  anon_sym_COMMA = 15,
  anon_sym_RPAREN = 16,
  sym_negate = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_GT = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_EQ = 24,
  anon_sym_DASH = 25,
  anon_sym_PLUS = 26,
  anon_sym_SLASH = 27,
  anon_sym_STAR = 28,
  anon_sym_TRUE = 29,
  anon_sym_true = 30,
  anon_sym_FALSE = 31,
  anon_sym_false = 32,
  anon_sym_PIPE_PIPE = 33,
  anon_sym_AMP_AMP = 34,
  anon_sym_if = 35,
  anon_sym_local = 36,
  anon_sym_global = 37,
  anon_sym_script = 38,
  anon_sym_mart = 39,
  anon_sym_text = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym_const = 43,
  sym_string = 44,
  sym_interpolation = 45,
  sym__meta_function_pass = 46,
  sym__expression = 47,
  sym_arithmetic_expression = 48,
  sym_builtin_func = 49,
  sym_function_call = 50,
  sym_operator = 51,
  sym_additives = 52,
  sym_boolean = 53,
  sym_logical_operator = 54,
  sym__boolean_expression = 55,
  sym_if_statement = 56,
  sym_scope = 57,
  sym_script = 58,
  sym_scripting = 59,
  sym_mart = 60,
  sym_text = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_string_repeat1 = 63,
  aux_sym_interpolation_repeat1 = 64,
  aux_sym_function_call_repeat1 = 65,
  aux_sym_scripting_repeat1 = 66,
  aux_sym_text_repeat1 = 67,
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
  [anon_sym_end] = "end",
  [anon_sym_return] = "return",
  [anon_sym_call] = "call",
  [anon_sym_goto] = "goto",
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
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_if] = "if",
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
  [sym_function_call] = "function_call",
  [sym_operator] = "operator",
  [sym_additives] = "additives",
  [sym_boolean] = "boolean",
  [sym_logical_operator] = "logical_operator",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_if_statement] = "if_statement",
  [sym_scope] = "scope",
  [sym_script] = "script",
  [sym_scripting] = "scripting",
  [sym_mart] = "mart",
  [sym_text] = "text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_interpolation_repeat1] = "interpolation_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
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
  [anon_sym_end] = anon_sym_end,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_goto] = anon_sym_goto,
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
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_if] = anon_sym_if,
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
  [sym_function_call] = sym_function_call,
  [sym_operator] = sym_operator,
  [sym_additives] = sym_additives,
  [sym_boolean] = sym_boolean,
  [sym_logical_operator] = sym_logical_operator,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_if_statement] = sym_if_statement,
  [sym_scope] = sym_scope,
  [sym_script] = sym_script,
  [sym_scripting] = sym_scripting,
  [sym_mart] = sym_mart,
  [sym_text] = sym_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_interpolation_repeat1] = aux_sym_interpolation_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
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
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
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
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
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
  [sym_logical_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean_expression] = {
    .visible = false,
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
  field_builtin_func = 1,
  field_const_name = 2,
  field_function_name = 3,
  field_function_params = 4,
  field_mart_name = 5,
  field_script_name = 6,
  field_text_name = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_builtin_func] = "builtin_func",
  [field_const_name] = "const_name",
  [field_function_name] = "function_name",
  [field_function_params] = "function_params",
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
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 3},
  [12] = {.index = 15, .length = 3},
  [13] = {.index = 18, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_const_name, 1},
  [1] =
    {field_function_name, 0},
  [2] =
    {field_builtin_func, 0},
  [3] =
    {field_mart_name, 1},
  [4] =
    {field_text_name, 1},
  [5] =
    {field_script_name, 1},
  [6] =
    {field_function_name, 0},
    {field_function_params, 2},
  [8] =
    {field_builtin_func, 0},
    {field_function_params, 2},
  [10] =
    {field_mart_name, 4},
  [11] =
    {field_text_name, 4},
  [12] =
    {field_function_name, 0},
    {field_function_params, 2},
    {field_function_params, 3},
  [15] =
    {field_builtin_func, 0},
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
  [4] = 4,
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
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
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '!', 120,
        '"', 102,
        '#', 69,
        '&', 7,
        '(', 116,
        ')', 118,
        '*', 132,
        '+', 130,
        ',', 117,
        '-', 129,
        '/', 131,
        '<', 125,
        '=', 128,
        '>', 123,
        'F', 11,
        'T', 15,
        '\\', 63,
        'c', 18,
        'e', 40,
        'f', 20,
        'g', 37,
        'i', 32,
        'l', 46,
        'm', 19,
        'r', 31,
        's', 24,
        't', 28,
        '{', 105,
        '|', 62,
        '}', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(63);
      if (lookahead == '{') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '{') ADVANCE(105);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 9,
        '#', 69,
        '&', 7,
        '(', 116,
        ')', 118,
        '/', 8,
        '<', 125,
        '=', 10,
        '>', 123,
        'c', 80,
        'e', 90,
        'g', 92,
        'i', 86,
        'r', 85,
        '|', 62,
        '}', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(119);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'g') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(118);
      if (lookahead == '}') ADVANCE(106);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == 'F') ADVANCE(73);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(81);
      if (lookahead == 't') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == '|') ADVANCE(141);
      END_STATE();
    case 63:
      if (lookahead == '"' ||
          lookahead == 'N' ||
          lookahead == '\\' ||
          lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 64:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '!', 120,
        '"', 102,
        '#', 69,
        '&', 7,
        '(', 116,
        ')', 118,
        '*', 132,
        '+', 130,
        ',', 117,
        '-', 129,
        '/', 131,
        '<', 125,
        '=', 128,
        '>', 123,
        'F', 11,
        'T', 15,
        'c', 18,
        'e', 40,
        'f', 20,
        'g', 37,
        'i', 32,
        'l', 46,
        'm', 19,
        'r', 31,
        's', 24,
        't', 28,
        '{', 105,
        '|', 62,
        '}', 106,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '!', 9,
        '#', 69,
        '&', 7,
        '(', 116,
        ')', 118,
        '/', 8,
        '<', 125,
        '=', 10,
        '>', 123,
        'c', 45,
        'm', 19,
        's', 24,
        't', 27,
        '|', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '#', 69,
        '&', 7,
        ')', 118,
        '*', 132,
        '+', 130,
        '-', 129,
        '/', 131,
        '=', 127,
        'c', 45,
        'm', 19,
        's', 24,
        't', 27,
        '|', 62,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(103);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_negate);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_mart);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 67},
  [11] = {.lex_state = 66},
  [12] = {.lex_state = 66},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 67},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 66},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 66},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 66},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 66},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 66},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 67},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 66},
  [43] = {.lex_state = 66},
  [44] = {.lex_state = 66},
  [45] = {.lex_state = 66},
  [46] = {.lex_state = 66},
  [47] = {.lex_state = 66},
  [48] = {.lex_state = 66},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 66},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 66},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 64},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 64},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 64},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
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
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
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
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_mart] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(96),
    [sym__definition] = STATE(11),
    [sym_const] = STATE(11),
    [sym_script] = STATE(11),
    [sym_mart] = STATE(11),
    [sym_text] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_script] = ACTIONS(9),
    [anon_sym_mart] = ACTIONS(11),
    [anon_sym_text] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(17), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(15), 10,
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
  [23] = 3,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(19), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [48] = 2,
    ACTIONS(27), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(25), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [70] = 2,
    ACTIONS(31), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(29), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [92] = 2,
    ACTIONS(35), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(33), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [114] = 2,
    ACTIONS(39), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(37), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [136] = 2,
    ACTIONS(43), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(41), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [158] = 2,
    ACTIONS(47), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(45), 9,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [180] = 3,
    ACTIONS(51), 1,
      sym_comment,
    STATE(58), 1,
      sym_additives,
    ACTIONS(49), 13,
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
  [202] = 7,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(9), 1,
      anon_sym_script,
    ACTIONS(11), 1,
      anon_sym_mart,
    ACTIONS(13), 1,
      anon_sym_text,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_comment,
    STATE(12), 6,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      aux_sym_source_file_repeat1,
  [229] = 7,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_const,
    ACTIONS(65), 1,
      anon_sym_script,
    ACTIONS(68), 1,
      anon_sym_mart,
    ACTIONS(71), 1,
      anon_sym_text,
    STATE(12), 6,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      aux_sym_source_file_repeat1,
  [256] = 7,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_if,
    STATE(3), 1,
      sym_builtin_func,
    STATE(100), 1,
      sym_scripting,
    STATE(16), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [283] = 4,
    ACTIONS(84), 1,
      sym_comment,
    STATE(58), 1,
      sym_additives,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
    ACTIONS(86), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [304] = 7,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 1,
      anon_sym_if,
    STATE(3), 1,
      sym_builtin_func,
    STATE(15), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(96), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [331] = 7,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_builtin_func,
    STATE(15), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [358] = 5,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_operator,
    STATE(30), 1,
      sym_logical_operator,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [381] = 7,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_if,
    STATE(3), 1,
      sym_builtin_func,
    STATE(97), 1,
      sym_scripting,
    STATE(16), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [408] = 5,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_operator,
    STATE(29), 1,
      sym_logical_operator,
    ACTIONS(110), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(108), 7,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [431] = 7,
    ACTIONS(74), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_if,
    STATE(3), 1,
      sym_builtin_func,
    STATE(107), 1,
      sym_scripting,
    STATE(16), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [458] = 6,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_operator,
    STATE(30), 1,
      sym_logical_operator,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [482] = 5,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 2,
      sym_number,
      sym_identifier,
    STATE(25), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(63), 2,
      sym_string,
      sym_boolean,
    ACTIONS(124), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [504] = 6,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_operator,
    STATE(29), 1,
      sym_logical_operator,
    ACTIONS(116), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(114), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [528] = 5,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 2,
      sym_number,
      sym_identifier,
    STATE(26), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(64), 2,
      sym_string,
      sym_boolean,
    ACTIONS(124), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [550] = 5,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_logical_operator,
    STATE(58), 1,
      sym_additives,
    ACTIONS(118), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(86), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [571] = 5,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_logical_operator,
    STATE(58), 1,
      sym_additives,
    ACTIONS(118), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(86), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [592] = 3,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(110), 6,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_if,
  [608] = 6,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_negate,
    STATE(3), 1,
      sym_builtin_func,
    STATE(21), 1,
      sym_function_call,
    STATE(87), 1,
      sym__boolean_expression,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [630] = 6,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_negate,
    STATE(3), 1,
      sym_builtin_func,
    STATE(21), 1,
      sym_function_call,
    STATE(106), 1,
      sym__boolean_expression,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [652] = 6,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_negate,
    STATE(3), 1,
      sym_builtin_func,
    STATE(21), 1,
      sym_function_call,
    STATE(95), 1,
      sym__boolean_expression,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [674] = 6,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_negate,
    STATE(3), 1,
      sym_builtin_func,
    STATE(21), 1,
      sym_function_call,
    STATE(108), 1,
      sym__boolean_expression,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [696] = 6,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_negate,
    STATE(3), 1,
      sym_builtin_func,
    STATE(21), 1,
      sym_function_call,
    STATE(111), 1,
      sym__boolean_expression,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [718] = 2,
    ACTIONS(138), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(140), 6,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_if,
  [731] = 4,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(3), 1,
      sym_builtin_func,
    STATE(23), 1,
      sym_function_call,
    ACTIONS(78), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [747] = 2,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 6,
      sym_number,
      sym_identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [759] = 1,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [768] = 4,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(51), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [783] = 2,
    STATE(62), 1,
      sym_additives,
    ACTIONS(86), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [794] = 1,
    ACTIONS(156), 6,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [803] = 4,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(160), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(40), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [818] = 2,
    ACTIONS(168), 1,
      sym_negate,
    ACTIONS(166), 5,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [829] = 1,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [838] = 1,
    ACTIONS(172), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [847] = 1,
    ACTIONS(174), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [856] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [865] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [874] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [883] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [892] = 1,
    ACTIONS(184), 6,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [901] = 1,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [910] = 4,
    ACTIONS(154), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(40), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [925] = 1,
    ACTIONS(192), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [934] = 4,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      sym_identifier,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(78), 2,
      sym_string,
      sym__meta_function_pass,
  [948] = 4,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(79), 2,
      sym_string,
      sym__meta_function_pass,
  [962] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(85), 2,
      sym_string,
      sym__meta_function_pass,
  [973] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    STATE(60), 2,
      sym_string,
      aux_sym_text_repeat1,
  [984] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_string,
      aux_sym_text_repeat1,
  [995] = 2,
    ACTIONS(208), 2,
      sym_number,
      sym_identifier,
    STATE(10), 2,
      sym__expression,
      sym_arithmetic_expression,
  [1004] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string,
      aux_sym_text_repeat1,
  [1015] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_string,
      aux_sym_text_repeat1,
  [1026] = 2,
    ACTIONS(214), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(216), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [1035] = 2,
    ACTIONS(218), 2,
      sym_number,
      sym_identifier,
    STATE(14), 2,
      sym__expression,
      sym_arithmetic_expression,
  [1044] = 3,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_logical_operator,
    ACTIONS(118), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1055] = 3,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_logical_operator,
    ACTIONS(118), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1066] = 3,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(65), 2,
      sym_string,
      aux_sym_text_repeat1,
  [1077] = 3,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_interpolation_repeat1,
  [1087] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_function_call_repeat1,
  [1097] = 3,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_interpolation_repeat1,
  [1107] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_function_call_repeat1,
  [1117] = 3,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_interpolation_repeat1,
  [1127] = 3,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_interpolation_repeat1,
  [1137] = 3,
    ACTIONS(225), 1,
      sym_identifier,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_interpolation_repeat1,
  [1147] = 1,
    ACTIONS(248), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [1153] = 2,
    STATE(109), 1,
      sym_scope,
    ACTIONS(250), 2,
      anon_sym_local,
      anon_sym_global,
  [1161] = 3,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(75), 1,
      aux_sym_function_call_repeat1,
  [1171] = 2,
    STATE(101), 1,
      sym_scope,
    ACTIONS(250), 2,
      anon_sym_local,
      anon_sym_global,
  [1179] = 3,
    ACTIONS(257), 1,
      sym_identifier,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_interpolation_repeat1,
  [1189] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_function_call_repeat1,
  [1199] = 3,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_function_call_repeat1,
  [1209] = 2,
    STATE(98), 1,
      sym_scope,
    ACTIONS(250), 2,
      anon_sym_local,
      anon_sym_global,
  [1217] = 2,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
  [1224] = 2,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_interpolation_repeat1,
  [1231] = 2,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
  [1238] = 1,
    ACTIONS(275), 2,
      sym_number,
      sym_identifier,
  [1243] = 1,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1248] = 2,
    ACTIONS(277), 1,
      sym_identifier,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
  [1255] = 1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [1259] = 1,
    ACTIONS(283), 1,
      sym_identifier,
  [1263] = 1,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
  [1267] = 1,
    ACTIONS(287), 1,
      sym_identifier,
  [1271] = 1,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
  [1275] = 1,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
  [1279] = 1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
  [1283] = 1,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
  [1287] = 1,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
  [1291] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [1295] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1299] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [1303] = 1,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
  [1307] = 1,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
  [1311] = 1,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
  [1315] = 1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
  [1319] = 1,
    ACTIONS(311), 1,
      sym_identifier,
  [1323] = 1,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
  [1327] = 1,
    ACTIONS(315), 1,
      sym_identifier,
  [1331] = 1,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
  [1335] = 1,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
  [1339] = 1,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [1343] = 1,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [1347] = 1,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [1351] = 1,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 202,
  [SMALL_STATE(12)] = 229,
  [SMALL_STATE(13)] = 256,
  [SMALL_STATE(14)] = 283,
  [SMALL_STATE(15)] = 304,
  [SMALL_STATE(16)] = 331,
  [SMALL_STATE(17)] = 358,
  [SMALL_STATE(18)] = 381,
  [SMALL_STATE(19)] = 408,
  [SMALL_STATE(20)] = 431,
  [SMALL_STATE(21)] = 458,
  [SMALL_STATE(22)] = 482,
  [SMALL_STATE(23)] = 504,
  [SMALL_STATE(24)] = 528,
  [SMALL_STATE(25)] = 550,
  [SMALL_STATE(26)] = 571,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 608,
  [SMALL_STATE(29)] = 630,
  [SMALL_STATE(30)] = 652,
  [SMALL_STATE(31)] = 674,
  [SMALL_STATE(32)] = 696,
  [SMALL_STATE(33)] = 718,
  [SMALL_STATE(34)] = 731,
  [SMALL_STATE(35)] = 747,
  [SMALL_STATE(36)] = 759,
  [SMALL_STATE(37)] = 768,
  [SMALL_STATE(38)] = 783,
  [SMALL_STATE(39)] = 794,
  [SMALL_STATE(40)] = 803,
  [SMALL_STATE(41)] = 818,
  [SMALL_STATE(42)] = 829,
  [SMALL_STATE(43)] = 838,
  [SMALL_STATE(44)] = 847,
  [SMALL_STATE(45)] = 856,
  [SMALL_STATE(46)] = 865,
  [SMALL_STATE(47)] = 874,
  [SMALL_STATE(48)] = 883,
  [SMALL_STATE(49)] = 892,
  [SMALL_STATE(50)] = 901,
  [SMALL_STATE(51)] = 910,
  [SMALL_STATE(52)] = 925,
  [SMALL_STATE(53)] = 934,
  [SMALL_STATE(54)] = 948,
  [SMALL_STATE(55)] = 962,
  [SMALL_STATE(56)] = 973,
  [SMALL_STATE(57)] = 984,
  [SMALL_STATE(58)] = 995,
  [SMALL_STATE(59)] = 1004,
  [SMALL_STATE(60)] = 1015,
  [SMALL_STATE(61)] = 1026,
  [SMALL_STATE(62)] = 1035,
  [SMALL_STATE(63)] = 1044,
  [SMALL_STATE(64)] = 1055,
  [SMALL_STATE(65)] = 1066,
  [SMALL_STATE(66)] = 1077,
  [SMALL_STATE(67)] = 1087,
  [SMALL_STATE(68)] = 1097,
  [SMALL_STATE(69)] = 1107,
  [SMALL_STATE(70)] = 1117,
  [SMALL_STATE(71)] = 1127,
  [SMALL_STATE(72)] = 1137,
  [SMALL_STATE(73)] = 1147,
  [SMALL_STATE(74)] = 1153,
  [SMALL_STATE(75)] = 1161,
  [SMALL_STATE(76)] = 1171,
  [SMALL_STATE(77)] = 1179,
  [SMALL_STATE(78)] = 1189,
  [SMALL_STATE(79)] = 1199,
  [SMALL_STATE(80)] = 1209,
  [SMALL_STATE(81)] = 1217,
  [SMALL_STATE(82)] = 1224,
  [SMALL_STATE(83)] = 1231,
  [SMALL_STATE(84)] = 1238,
  [SMALL_STATE(85)] = 1243,
  [SMALL_STATE(86)] = 1248,
  [SMALL_STATE(87)] = 1255,
  [SMALL_STATE(88)] = 1259,
  [SMALL_STATE(89)] = 1263,
  [SMALL_STATE(90)] = 1267,
  [SMALL_STATE(91)] = 1271,
  [SMALL_STATE(92)] = 1275,
  [SMALL_STATE(93)] = 1279,
  [SMALL_STATE(94)] = 1283,
  [SMALL_STATE(95)] = 1287,
  [SMALL_STATE(96)] = 1291,
  [SMALL_STATE(97)] = 1295,
  [SMALL_STATE(98)] = 1299,
  [SMALL_STATE(99)] = 1303,
  [SMALL_STATE(100)] = 1307,
  [SMALL_STATE(101)] = 1311,
  [SMALL_STATE(102)] = 1315,
  [SMALL_STATE(103)] = 1319,
  [SMALL_STATE(104)] = 1323,
  [SMALL_STATE(105)] = 1327,
  [SMALL_STATE(106)] = 1331,
  [SMALL_STATE(107)] = 1335,
  [SMALL_STATE(108)] = 1339,
  [SMALL_STATE(109)] = 1343,
  [SMALL_STATE(110)] = 1347,
  [SMALL_STATE(111)] = 1351,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 8),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 7),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 11),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 11),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 12),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 12),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(81),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4, 0, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 4, 0, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 4, 0, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logical_operator, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 4, 0, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 7, 0, 9),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 8, 0, 9),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 7, 0, 10),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, 0, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 8, 0, 10),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 8, 0, 13),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, 0, 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolation_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additives, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 5, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 6, 0, 0),
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
