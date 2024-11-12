#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
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
  anon_sym_if = 33,
  anon_sym_local = 34,
  anon_sym_global = 35,
  anon_sym_script = 36,
  anon_sym_mart = 37,
  anon_sym_text = 38,
  sym_source_file = 39,
  sym__definition = 40,
  sym_const = 41,
  sym_string = 42,
  sym_interpolation = 43,
  sym__meta_function_pass = 44,
  sym__expression = 45,
  sym_arithmetic_expression = 46,
  sym_builtin_func = 47,
  sym_function_call = 48,
  sym_operator = 49,
  sym_additives = 50,
  sym_boolean = 51,
  sym__boolean_expression = 52,
  sym_if_statement = 53,
  sym_scope = 54,
  sym_script = 55,
  sym_scripting = 56,
  sym_mart = 57,
  sym_text = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_string_repeat1 = 60,
  aux_sym_function_call_repeat1 = 61,
  aux_sym_scripting_repeat1 = 62,
  aux_sym_mart_repeat1 = 63,
  aux_sym_text_repeat1 = 64,
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
  [sym__boolean_expression] = "_boolean_expression",
  [sym_if_statement] = "if_statement",
  [sym_scope] = "scope",
  [sym_script] = "script",
  [sym_scripting] = "scripting",
  [sym_mart] = "mart",
  [sym_text] = "text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_scripting_repeat1] = "scripting_repeat1",
  [aux_sym_mart_repeat1] = "mart_repeat1",
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
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_if_statement] = sym_if_statement,
  [sym_scope] = sym_scope,
  [sym_script] = sym_script,
  [sym_scripting] = sym_scripting,
  [sym_mart] = sym_mart,
  [sym_text] = sym_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_scripting_repeat1] = aux_sym_scripting_repeat1,
  [aux_sym_mart_repeat1] = aux_sym_mart_repeat1,
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
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scripting_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_mart_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '!', 118,
        '"', 100,
        '#', 67,
        '(', 114,
        ')', 116,
        '*', 130,
        '+', 128,
        ',', 115,
        '-', 127,
        '/', 129,
        '<', 123,
        '=', 126,
        '>', 121,
        'F', 10,
        'T', 14,
        '\\', 61,
        'c', 17,
        'e', 39,
        'f', 19,
        'g', 36,
        'i', 31,
        'l', 45,
        'm', 18,
        'r', 30,
        's', 23,
        't', 27,
        '{', 103,
        '}', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '{') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '{') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 8,
        '#', 67,
        '(', 114,
        ')', 116,
        '/', 7,
        '<', 123,
        '=', 9,
        '>', 121,
        'c', 78,
        'e', 88,
        'g', 90,
        'i', 84,
        'r', 83,
        '}', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'g') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '}') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'T') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 't') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(135);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == '"' ||
          lookahead == 'N' ||
          lookahead == '\\' ||
          lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 62:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 63:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '!', 118,
        '"', 100,
        '#', 67,
        '(', 114,
        ')', 116,
        '*', 130,
        '+', 128,
        ',', 115,
        '-', 127,
        '/', 129,
        '<', 123,
        '=', 126,
        '>', 121,
        'F', 10,
        'T', 14,
        'c', 17,
        'e', 39,
        'f', 19,
        'g', 36,
        'i', 31,
        'l', 45,
        'm', 18,
        'r', 30,
        's', 23,
        't', 27,
        '{', 103,
        '}', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 64:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '!', 8,
        '#', 67,
        '(', 114,
        ')', 116,
        '/', 7,
        '<', 123,
        '=', 9,
        '>', 121,
        'c', 44,
        'm', 18,
        's', 23,
        't', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      ADVANCE_MAP(
        '#', 67,
        ')', 116,
        '*', 130,
        '+', 128,
        '-', 127,
        '/', 129,
        '=', 125,
        'c', 44,
        'm', 18,
        's', 23,
        't', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_call);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_negate);
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_mart);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 65},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 64},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 64},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 65},
  [31] = {.lex_state = 65},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 64},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 64},
  [38] = {.lex_state = 65},
  [39] = {.lex_state = 64},
  [40] = {.lex_state = 64},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 64},
  [43] = {.lex_state = 64},
  [44] = {.lex_state = 64},
  [45] = {.lex_state = 64},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_local] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_mart] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym__definition] = STATE(17),
    [sym_const] = STATE(17),
    [sym_script] = STATE(17),
    [sym_mart] = STATE(17),
    [sym_text] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
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
    ACTIONS(15), 8,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(17), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
  [21] = 3,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(21), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
  [44] = 2,
    ACTIONS(25), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(27), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
  [64] = 2,
    ACTIONS(29), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(31), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
  [84] = 2,
    ACTIONS(33), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(35), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
  [104] = 2,
    ACTIONS(37), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(39), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
  [124] = 2,
    ACTIONS(41), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(43), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
  [144] = 2,
    ACTIONS(45), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 8,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
  [164] = 3,
    ACTIONS(51), 1,
      sym_comment,
    STATE(58), 1,
      sym_additives,
    ACTIONS(49), 11,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [184] = 7,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_const,
    ACTIONS(61), 1,
      anon_sym_script,
    ACTIONS(64), 1,
      anon_sym_mart,
    ACTIONS(67), 1,
      anon_sym_text,
    STATE(11), 6,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      aux_sym_source_file_repeat1,
  [211] = 4,
    ACTIONS(72), 1,
      sym_comment,
    STATE(58), 1,
      sym_additives,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
    ACTIONS(74), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [232] = 7,
    ACTIONS(76), 1,
      sym_comment,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_if,
    STATE(3), 1,
      sym_builtin_func,
    STATE(13), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(84), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [259] = 7,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_if,
    STATE(3), 1,
      sym_builtin_func,
    STATE(13), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(96), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [286] = 7,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      sym_comment,
    STATE(3), 1,
      sym_builtin_func,
    STATE(93), 1,
      sym_scripting,
    STATE(14), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(96), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [313] = 7,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      sym_comment,
    STATE(3), 1,
      sym_builtin_func,
    STATE(81), 1,
      sym_scripting,
    STATE(14), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(96), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [340] = 7,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(9), 1,
      anon_sym_script,
    ACTIONS(11), 1,
      anon_sym_mart,
    ACTIONS(13), 1,
      anon_sym_text,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      sym_comment,
    STATE(11), 6,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      sym_text,
      aux_sym_source_file_repeat1,
  [367] = 7,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_if,
    ACTIONS(100), 1,
      sym_comment,
    STATE(3), 1,
      sym_builtin_func,
    STATE(101), 1,
      sym_scripting,
    STATE(14), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
    ACTIONS(96), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [394] = 5,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 2,
      sym_number,
      sym_identifier,
    STATE(30), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(99), 2,
      sym_string,
      sym_boolean,
    ACTIONS(110), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [416] = 5,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 2,
      sym_number,
      sym_identifier,
    STATE(31), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(77), 2,
      sym_string,
      sym_boolean,
    ACTIONS(110), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [438] = 6,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      sym_negate,
    STATE(3), 1,
      sym_builtin_func,
    STATE(25), 1,
      sym_function_call,
    STATE(95), 1,
      sym__boolean_expression,
    ACTIONS(96), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [460] = 3,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(118), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(120), 6,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_if,
  [476] = 4,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_operator,
    ACTIONS(120), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 5,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [494] = 4,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_operator,
    ACTIONS(120), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 5,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [512] = 4,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym_operator,
    ACTIONS(128), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [529] = 4,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      sym_operator,
    ACTIONS(128), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(126), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [546] = 2,
    ACTIONS(132), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(134), 6,
      sym_identifier,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
      anon_sym_if,
  [559] = 4,
    ACTIONS(136), 1,
      sym_identifier,
    STATE(3), 1,
      sym_builtin_func,
    STATE(26), 1,
      sym_function_call,
    ACTIONS(96), 4,
      anon_sym_end,
      anon_sym_return,
      anon_sym_call,
      anon_sym_goto,
  [575] = 2,
    ACTIONS(140), 1,
      anon_sym_DQUOTE,
    ACTIONS(138), 6,
      sym_number,
      sym_identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [587] = 3,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_additives,
    ACTIONS(74), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [601] = 3,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_additives,
    ACTIONS(74), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [615] = 4,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(148), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(41), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [630] = 1,
    ACTIONS(152), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [639] = 1,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [648] = 4,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    ACTIONS(158), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(35), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [663] = 1,
    ACTIONS(164), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [672] = 1,
    ACTIONS(166), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [681] = 2,
    STATE(57), 1,
      sym_additives,
    ACTIONS(74), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [692] = 1,
    ACTIONS(168), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [701] = 1,
    ACTIONS(170), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [710] = 4,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
    STATE(35), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [725] = 1,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [734] = 1,
    ACTIONS(178), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [743] = 1,
    ACTIONS(180), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [752] = 1,
    ACTIONS(182), 6,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
      anon_sym_text,
  [761] = 4,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(184), 1,
      sym_identifier,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(59), 2,
      sym_string,
      sym__meta_function_pass,
  [775] = 4,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(61), 2,
      sym_string,
      sym__meta_function_pass,
  [789] = 2,
    ACTIONS(192), 2,
      anon_sym_DQUOTE,
      anon_sym_LBRACE,
    ACTIONS(194), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [798] = 1,
    ACTIONS(196), 4,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [805] = 3,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(75), 2,
      sym_string,
      sym__meta_function_pass,
  [816] = 3,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_string,
      aux_sym_text_repeat1,
  [827] = 3,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(56), 2,
      sym_string,
      aux_sym_text_repeat1,
  [838] = 1,
    ACTIONS(207), 4,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [845] = 3,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_string,
      aux_sym_text_repeat1,
  [856] = 3,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_string,
      aux_sym_text_repeat1,
  [867] = 3,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(51), 2,
      sym_string,
      aux_sym_text_repeat1,
  [878] = 2,
    ACTIONS(215), 2,
      sym_number,
      sym_identifier,
    STATE(12), 2,
      sym__expression,
      sym_arithmetic_expression,
  [887] = 2,
    ACTIONS(217), 2,
      sym_number,
      sym_identifier,
    STATE(10), 2,
      sym__expression,
      sym_arithmetic_expression,
  [896] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_function_call_repeat1,
  [906] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_function_call_repeat1,
  [916] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_function_call_repeat1,
  [926] = 3,
    ACTIONS(227), 1,
      sym_identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      aux_sym_mart_repeat1,
  [936] = 3,
    ACTIONS(231), 1,
      sym_identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_mart_repeat1,
  [946] = 2,
    STATE(86), 1,
      sym_scope,
    ACTIONS(235), 2,
      anon_sym_local,
      anon_sym_global,
  [954] = 3,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_mart_repeat1,
  [964] = 3,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_mart_repeat1,
  [974] = 2,
    STATE(80), 1,
      sym_scope,
    ACTIONS(235), 2,
      anon_sym_local,
      anon_sym_global,
  [982] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_function_call_repeat1,
  [992] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_function_call_repeat1,
  [1002] = 2,
    STATE(89), 1,
      sym_scope,
    ACTIONS(235), 2,
      anon_sym_local,
      anon_sym_global,
  [1010] = 3,
    ACTIONS(250), 1,
      sym_identifier,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_mart_repeat1,
  [1020] = 2,
    ACTIONS(255), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
  [1027] = 2,
    ACTIONS(259), 1,
      sym_identifier,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
  [1034] = 1,
    ACTIONS(263), 2,
      sym_number,
      sym_identifier,
  [1039] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1044] = 2,
    ACTIONS(265), 1,
      sym_identifier,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
  [1051] = 1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
  [1055] = 1,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
  [1059] = 1,
    ACTIONS(271), 1,
      sym_identifier,
  [1063] = 1,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [1067] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
  [1071] = 1,
    ACTIONS(277), 1,
      anon_sym_LPAREN,
  [1075] = 1,
    ACTIONS(279), 1,
      sym_identifier,
  [1079] = 1,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
  [1083] = 1,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
  [1087] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1091] = 1,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
  [1095] = 1,
    ACTIONS(289), 1,
      sym_identifier,
  [1099] = 1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1103] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [1107] = 1,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
  [1111] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [1115] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1119] = 1,
    ACTIONS(301), 1,
      sym_identifier,
  [1123] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [1127] = 1,
    ACTIONS(305), 1,
      sym_identifier,
  [1131] = 1,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
  [1135] = 1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
  [1139] = 1,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
  [1143] = 1,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
  [1147] = 1,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
  [1151] = 1,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 259,
  [SMALL_STATE(15)] = 286,
  [SMALL_STATE(16)] = 313,
  [SMALL_STATE(17)] = 340,
  [SMALL_STATE(18)] = 367,
  [SMALL_STATE(19)] = 394,
  [SMALL_STATE(20)] = 416,
  [SMALL_STATE(21)] = 438,
  [SMALL_STATE(22)] = 460,
  [SMALL_STATE(23)] = 476,
  [SMALL_STATE(24)] = 494,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 529,
  [SMALL_STATE(27)] = 546,
  [SMALL_STATE(28)] = 559,
  [SMALL_STATE(29)] = 575,
  [SMALL_STATE(30)] = 587,
  [SMALL_STATE(31)] = 601,
  [SMALL_STATE(32)] = 615,
  [SMALL_STATE(33)] = 630,
  [SMALL_STATE(34)] = 639,
  [SMALL_STATE(35)] = 648,
  [SMALL_STATE(36)] = 663,
  [SMALL_STATE(37)] = 672,
  [SMALL_STATE(38)] = 681,
  [SMALL_STATE(39)] = 692,
  [SMALL_STATE(40)] = 701,
  [SMALL_STATE(41)] = 710,
  [SMALL_STATE(42)] = 725,
  [SMALL_STATE(43)] = 734,
  [SMALL_STATE(44)] = 743,
  [SMALL_STATE(45)] = 752,
  [SMALL_STATE(46)] = 761,
  [SMALL_STATE(47)] = 775,
  [SMALL_STATE(48)] = 789,
  [SMALL_STATE(49)] = 798,
  [SMALL_STATE(50)] = 805,
  [SMALL_STATE(51)] = 816,
  [SMALL_STATE(52)] = 827,
  [SMALL_STATE(53)] = 838,
  [SMALL_STATE(54)] = 845,
  [SMALL_STATE(55)] = 856,
  [SMALL_STATE(56)] = 867,
  [SMALL_STATE(57)] = 878,
  [SMALL_STATE(58)] = 887,
  [SMALL_STATE(59)] = 896,
  [SMALL_STATE(60)] = 906,
  [SMALL_STATE(61)] = 916,
  [SMALL_STATE(62)] = 926,
  [SMALL_STATE(63)] = 936,
  [SMALL_STATE(64)] = 946,
  [SMALL_STATE(65)] = 954,
  [SMALL_STATE(66)] = 964,
  [SMALL_STATE(67)] = 974,
  [SMALL_STATE(68)] = 982,
  [SMALL_STATE(69)] = 992,
  [SMALL_STATE(70)] = 1002,
  [SMALL_STATE(71)] = 1010,
  [SMALL_STATE(72)] = 1020,
  [SMALL_STATE(73)] = 1027,
  [SMALL_STATE(74)] = 1034,
  [SMALL_STATE(75)] = 1039,
  [SMALL_STATE(76)] = 1044,
  [SMALL_STATE(77)] = 1051,
  [SMALL_STATE(78)] = 1055,
  [SMALL_STATE(79)] = 1059,
  [SMALL_STATE(80)] = 1063,
  [SMALL_STATE(81)] = 1067,
  [SMALL_STATE(82)] = 1071,
  [SMALL_STATE(83)] = 1075,
  [SMALL_STATE(84)] = 1079,
  [SMALL_STATE(85)] = 1083,
  [SMALL_STATE(86)] = 1087,
  [SMALL_STATE(87)] = 1091,
  [SMALL_STATE(88)] = 1095,
  [SMALL_STATE(89)] = 1099,
  [SMALL_STATE(90)] = 1103,
  [SMALL_STATE(91)] = 1107,
  [SMALL_STATE(92)] = 1111,
  [SMALL_STATE(93)] = 1115,
  [SMALL_STATE(94)] = 1119,
  [SMALL_STATE(95)] = 1123,
  [SMALL_STATE(96)] = 1127,
  [SMALL_STATE(97)] = 1131,
  [SMALL_STATE(98)] = 1135,
  [SMALL_STATE(99)] = 1139,
  [SMALL_STATE(100)] = 1143,
  [SMALL_STATE(101)] = 1147,
  [SMALL_STATE(102)] = 1151,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_func, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 12),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 11),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 11),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 8),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 7),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 7),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 4, 0, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 4, 0, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 4, 0, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 7, 0, 9),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 7, 0, 10),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 6),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, 0, 4),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 5, 0, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 8, 0, 13),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 8, 0, 9),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 8, 0, 10),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mart_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mart_repeat1, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additives, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
