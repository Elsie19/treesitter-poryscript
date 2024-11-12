#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 9

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
  anon_sym_LPAREN = 10,
  anon_sym_COMMA = 11,
  anon_sym_RPAREN = 12,
  sym_negate = 13,
  anon_sym_EQ_EQ = 14,
  anon_sym_BANG_EQ = 15,
  anon_sym_GT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_LT = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_EQ = 20,
  anon_sym_DASH = 21,
  anon_sym_PLUS = 22,
  anon_sym_SLASH = 23,
  anon_sym_STAR = 24,
  anon_sym_TRUE = 25,
  anon_sym_true = 26,
  anon_sym_FALSE = 27,
  anon_sym_false = 28,
  anon_sym_if = 29,
  anon_sym_local = 30,
  anon_sym_global = 31,
  anon_sym_script = 32,
  anon_sym_mart = 33,
  sym_source_file = 34,
  sym__definition = 35,
  sym_const = 36,
  sym_string = 37,
  sym_interpolation = 38,
  sym__meta_function_pass = 39,
  sym__expression = 40,
  sym_arithmetic_expression = 41,
  sym_function_call = 42,
  sym_operator = 43,
  sym_additives = 44,
  sym_boolean = 45,
  sym__boolean_expression = 46,
  sym_if_statement = 47,
  sym_scope = 48,
  sym_script = 49,
  sym_scripting = 50,
  sym_mart = 51,
  aux_sym_source_file_repeat1 = 52,
  aux_sym_string_repeat1 = 53,
  aux_sym_function_call_repeat1 = 54,
  aux_sym_scripting_repeat1 = 55,
  aux_sym_mart_repeat1 = 56,
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_const] = "const",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__meta_function_pass] = "_meta_function_pass",
  [sym__expression] = "_expression",
  [sym_arithmetic_expression] = "arithmetic_expression",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym_scripting_repeat1] = "scripting_repeat1",
  [aux_sym_mart_repeat1] = "mart_repeat1",
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_const] = sym_const,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__meta_function_pass] = sym__meta_function_pass,
  [sym__expression] = sym__expression,
  [sym_arithmetic_expression] = sym_arithmetic_expression,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym_scripting_repeat1] = aux_sym_scripting_repeat1,
  [aux_sym_mart_repeat1] = aux_sym_mart_repeat1,
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
};

enum ts_field_identifiers {
  field_const_name = 1,
  field_function_name = 2,
  field_function_params = 3,
  field_mart_name = 4,
  field_script_name = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_const_name] = "const_name",
  [field_function_name] = "function_name",
  [field_function_params] = "function_params",
  [field_mart_name] = "mart_name",
  [field_script_name] = "script_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 3},
  [8] = {.index = 10, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_const_name, 1},
  [1] =
    {field_function_name, 0},
  [2] =
    {field_mart_name, 1},
  [3] =
    {field_script_name, 1},
  [4] =
    {field_function_name, 0},
    {field_function_params, 2},
  [6] =
    {field_mart_name, 4},
  [7] =
    {field_function_name, 0},
    {field_function_params, 2},
    {field_function_params, 3},
  [10] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '!', 82,
        '"', 71,
        '#', 51,
        '(', 78,
        ')', 80,
        '*', 94,
        '+', 92,
        ',', 79,
        '-', 91,
        '/', 93,
        '<', 87,
        '=', 90,
        '>', 85,
        'F', 9,
        'T', 13,
        '\\', 45,
        'c', 32,
        'f', 16,
        'g', 30,
        'i', 25,
        'l', 34,
        'm', 17,
        's', 21,
        't', 36,
        '{', 74,
        '}', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '{') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '{') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 7,
        '#', 51,
        '(', 78,
        ')', 80,
        '/', 6,
        '<', 87,
        '=', 8,
        '>', 85,
        'i', 65,
        '}', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(80);
      if (lookahead == '}') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead == 'F') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 't') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(95);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(99);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == '"' ||
          lookahead == 'N' ||
          lookahead == '\\' ||
          lookahead == 'l' ||
          lookahead == 'n' ||
          lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 47:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '!', 82,
        '"', 71,
        '#', 51,
        '(', 78,
        ')', 80,
        '*', 94,
        '+', 92,
        ',', 79,
        '-', 91,
        '/', 93,
        '<', 87,
        '=', 90,
        '>', 85,
        'F', 9,
        'T', 13,
        'c', 32,
        'f', 16,
        'g', 30,
        'i', 25,
        'l', 34,
        'm', 17,
        's', 21,
        't', 36,
        '{', 74,
        '}', 76,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '!', 7,
        '#', 51,
        '(', 78,
        ')', 80,
        '/', 6,
        '<', 87,
        '=', 8,
        '>', 85,
        'c', 32,
        'm', 17,
        's', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      ADVANCE_MAP(
        '#', 51,
        ')', 80,
        '*', 94,
        '+', 92,
        '-', 91,
        '/', 93,
        '=', 89,
        'c', 32,
        'm', 17,
        's', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(75);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_negate);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_negate);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_local);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_mart);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 46},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 46},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym__definition] = STATE(9),
    [sym_const] = STATE(9),
    [sym_script] = STATE(9),
    [sym_mart] = STATE(9),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_script] = ACTIONS(9),
    [anon_sym_mart] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(15), 1,
      sym_comment,
    STATE(38), 1,
      sym_additives,
    ACTIONS(13), 10,
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
  [19] = 2,
    ACTIONS(19), 4,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(17), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [35] = 4,
    ACTIONS(23), 1,
      sym_comment,
    STATE(38), 1,
      sym_additives,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
    ACTIONS(25), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [55] = 5,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 2,
      sym_number,
      sym_identifier,
    STATE(15), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(69), 2,
      sym_string,
      sym_boolean,
    ACTIONS(31), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [77] = 2,
    ACTIONS(35), 4,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(33), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [93] = 2,
    ACTIONS(39), 4,
      sym_identifier,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_if,
    ACTIONS(37), 7,
      sym_comment,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [109] = 5,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 2,
      sym_number,
      sym_identifier,
    STATE(16), 2,
      sym__expression,
      sym_arithmetic_expression,
    STATE(76), 2,
      sym_string,
      sym_boolean,
    ACTIONS(31), 4,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [131] = 6,
    ACTIONS(7), 1,
      anon_sym_const,
    ACTIONS(9), 1,
      anon_sym_script,
    ACTIONS(11), 1,
      anon_sym_mart,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_comment,
    STATE(10), 5,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      aux_sym_source_file_repeat1,
  [154] = 6,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_comment,
    ACTIONS(52), 1,
      anon_sym_const,
    ACTIONS(55), 1,
      anon_sym_script,
    ACTIONS(58), 1,
      anon_sym_mart,
    STATE(10), 5,
      sym__definition,
      sym_const,
      sym_script,
      sym_mart,
      aux_sym_source_file_repeat1,
  [177] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym_operator,
    ACTIONS(65), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 5,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [195] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_operator,
    ACTIONS(65), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(63), 5,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [213] = 4,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      sym_operator,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [230] = 4,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_operator,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [247] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_additives,
    ACTIONS(25), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [261] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_additives,
    ACTIONS(25), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [275] = 5,
    ACTIONS(79), 1,
      sym_comment,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      anon_sym_if,
    STATE(17), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
  [293] = 5,
    ACTIONS(90), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(96), 1,
      anon_sym_if,
    STATE(17), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
  [311] = 2,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 6,
      sym_number,
      sym_identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [323] = 5,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      sym_comment,
    STATE(61), 1,
      sym_scripting,
    STATE(18), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
  [341] = 5,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      sym_comment,
    STATE(77), 1,
      sym_scripting,
    STATE(18), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
  [359] = 5,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_if,
    ACTIONS(102), 1,
      sym_comment,
    STATE(78), 1,
      sym_scripting,
    STATE(18), 3,
      sym_function_call,
      sym_if_statement,
      aux_sym_scripting_repeat1,
  [377] = 5,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      aux_sym_string_token1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(110), 1,
      sym_escape_sequence,
    STATE(24), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [394] = 5,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      aux_sym_string_token1,
    ACTIONS(116), 1,
      sym_escape_sequence,
    STATE(26), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [411] = 2,
    STATE(35), 1,
      sym_additives,
    ACTIONS(25), 5,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_STAR,
  [422] = 5,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_string_token1,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      sym_escape_sequence,
    STATE(26), 2,
      sym_interpolation,
      aux_sym_string_repeat1,
  [439] = 3,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(65), 2,
      sym_identifier,
      anon_sym_if,
  [451] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
  [459] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
  [467] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
  [475] = 4,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(44), 2,
      sym_string,
      sym__meta_function_pass,
  [489] = 1,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
  [497] = 1,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
  [505] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_const,
      anon_sym_script,
      anon_sym_mart,
  [513] = 2,
    ACTIONS(145), 2,
      sym_number,
      sym_identifier,
    STATE(4), 2,
      sym__expression,
      sym_arithmetic_expression,
  [522] = 3,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(56), 2,
      sym_string,
      sym__meta_function_pass,
  [533] = 2,
    ACTIONS(149), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(151), 2,
      sym_identifier,
      anon_sym_if,
  [542] = 2,
    ACTIONS(153), 2,
      sym_number,
      sym_identifier,
    STATE(2), 2,
      sym__expression,
      sym_arithmetic_expression,
  [551] = 4,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(157), 1,
      sym_negate,
    STATE(13), 1,
      sym_function_call,
    STATE(70), 1,
      sym__boolean_expression,
  [564] = 2,
    ACTIONS(161), 1,
      sym_escape_sequence,
    ACTIONS(159), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_LBRACE,
  [573] = 2,
    STATE(63), 1,
      sym_scope,
    ACTIONS(163), 2,
      anon_sym_local,
      anon_sym_global,
  [581] = 3,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_mart_repeat1,
  [591] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_function_call_repeat1,
  [601] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_function_call_repeat1,
  [611] = 3,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_mart_repeat1,
  [621] = 3,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_function_call_repeat1,
  [631] = 3,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_mart_repeat1,
  [641] = 3,
    ACTIONS(186), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      aux_sym_mart_repeat1,
  [651] = 3,
    ACTIONS(191), 1,
      sym_identifier,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym_mart_repeat1,
  [661] = 2,
    STATE(66), 1,
      sym_scope,
    ACTIONS(163), 2,
      anon_sym_local,
      anon_sym_global,
  [669] = 1,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [674] = 2,
    ACTIONS(197), 1,
      sym_identifier,
    STATE(14), 1,
      sym_function_call,
  [681] = 2,
    ACTIONS(199), 1,
      sym_identifier,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
  [688] = 2,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
  [695] = 1,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [700] = 1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [705] = 1,
    ACTIONS(209), 2,
      sym_number,
      sym_identifier,
  [710] = 1,
    ACTIONS(211), 1,
      anon_sym_LBRACE,
  [714] = 1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
  [718] = 1,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
  [722] = 1,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
  [726] = 1,
    ACTIONS(219), 1,
      sym_identifier,
  [730] = 1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
  [734] = 1,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
  [738] = 1,
    ACTIONS(225), 1,
      sym_identifier,
  [742] = 1,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
  [746] = 1,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
  [750] = 1,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
  [754] = 1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
  [758] = 1,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
  [762] = 1,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
  [766] = 1,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
  [770] = 1,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
  [774] = 1,
    ACTIONS(241), 1,
      sym_identifier,
  [778] = 1,
    ACTIONS(243), 1,
      sym_identifier,
  [782] = 1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
  [786] = 1,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
  [790] = 1,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
  [794] = 1,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 35,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 77,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 109,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 154,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 195,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 230,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 261,
  [SMALL_STATE(17)] = 275,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 323,
  [SMALL_STATE(21)] = 341,
  [SMALL_STATE(22)] = 359,
  [SMALL_STATE(23)] = 377,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 411,
  [SMALL_STATE(26)] = 422,
  [SMALL_STATE(27)] = 439,
  [SMALL_STATE(28)] = 451,
  [SMALL_STATE(29)] = 459,
  [SMALL_STATE(30)] = 467,
  [SMALL_STATE(31)] = 475,
  [SMALL_STATE(32)] = 489,
  [SMALL_STATE(33)] = 497,
  [SMALL_STATE(34)] = 505,
  [SMALL_STATE(35)] = 513,
  [SMALL_STATE(36)] = 522,
  [SMALL_STATE(37)] = 533,
  [SMALL_STATE(38)] = 542,
  [SMALL_STATE(39)] = 551,
  [SMALL_STATE(40)] = 564,
  [SMALL_STATE(41)] = 573,
  [SMALL_STATE(42)] = 581,
  [SMALL_STATE(43)] = 591,
  [SMALL_STATE(44)] = 601,
  [SMALL_STATE(45)] = 611,
  [SMALL_STATE(46)] = 621,
  [SMALL_STATE(47)] = 631,
  [SMALL_STATE(48)] = 641,
  [SMALL_STATE(49)] = 651,
  [SMALL_STATE(50)] = 661,
  [SMALL_STATE(51)] = 669,
  [SMALL_STATE(52)] = 674,
  [SMALL_STATE(53)] = 681,
  [SMALL_STATE(54)] = 688,
  [SMALL_STATE(55)] = 695,
  [SMALL_STATE(56)] = 700,
  [SMALL_STATE(57)] = 705,
  [SMALL_STATE(58)] = 710,
  [SMALL_STATE(59)] = 714,
  [SMALL_STATE(60)] = 718,
  [SMALL_STATE(61)] = 722,
  [SMALL_STATE(62)] = 726,
  [SMALL_STATE(63)] = 730,
  [SMALL_STATE(64)] = 734,
  [SMALL_STATE(65)] = 738,
  [SMALL_STATE(66)] = 742,
  [SMALL_STATE(67)] = 746,
  [SMALL_STATE(68)] = 750,
  [SMALL_STATE(69)] = 754,
  [SMALL_STATE(70)] = 758,
  [SMALL_STATE(71)] = 762,
  [SMALL_STATE(72)] = 766,
  [SMALL_STATE(73)] = 770,
  [SMALL_STATE(74)] = 774,
  [SMALL_STATE(75)] = 778,
  [SMALL_STATE(76)] = 782,
  [SMALL_STATE(77)] = 786,
  [SMALL_STATE(78)] = 790,
  [SMALL_STATE(79)] = 794,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arithmetic_expression, 3, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 5),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 4, 0, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 4, 0, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, 0, 7),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 5, 0, 7),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, 0, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, 0, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean_expression, 4, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_scripting_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scripting, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 4, 0, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 5, 0, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 5, 0, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 7, 0, 6),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 8, 0, 8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mart, 8, 0, 6),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_mart_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_mart_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additives, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [213] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
