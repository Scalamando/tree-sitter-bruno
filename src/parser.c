#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_meta = 1,
  anon_sym_get = 2,
  anon_sym_post = 3,
  anon_sym_put = 4,
  anon_sym_delete = 5,
  anon_sym_patch = 6,
  anon_sym_options = 7,
  anon_sym_head = 8,
  anon_sym_connect = 9,
  anon_sym_trace = 10,
  anon_sym_query = 11,
  anon_sym_headers = 12,
  anon_sym_auth_COLONawsv4 = 13,
  anon_sym_auth_COLONbasic = 14,
  anon_sym_auth_COLONbearer = 15,
  anon_sym_auth_COLONdigest = 16,
  anon_sym_body = 17,
  anon_sym_body_COLONjson = 18,
  anon_sym_body_COLONtext = 19,
  anon_sym_body_COLONxml = 20,
  anon_sym_body_COLONsparql = 21,
  anon_sym_body_COLONgraphql = 22,
  anon_sym_body_COLONgraphql_COLONvars = 23,
  anon_sym_body_COLONform_DASHurlencoded = 24,
  anon_sym_body_COLONmultipart_DASHform = 25,
  anon_sym_vars_COLONpre_DASHrequest = 26,
  anon_sym_vars_COLONpost_DASHresponse = 27,
  anon_sym_assert = 28,
  anon_sym_script_COLONpre_DASHrequest = 29,
  anon_sym_script_COLONpost_DASHresponse = 30,
  anon_sym_tests = 31,
  anon_sym_docs = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  sym_assert_key = 35,
  sym_key = 36,
  sym_operator = 37,
  sym_value = 38,
  sym_rawtext = 39,
  sym_source_file = 40,
  sym_meta = 41,
  sym_http = 42,
  sym_http_verb = 43,
  sym_query = 44,
  sym_headers = 45,
  sym_auths = 46,
  sym_authawsv4 = 47,
  sym_authbasic = 48,
  sym_authbearer = 49,
  sym_authdigest = 50,
  sym_bodies = 51,
  sym_bodyforms = 52,
  sym_body = 53,
  sym_bodyjson = 54,
  sym_bodytext = 55,
  sym_bodyxml = 56,
  sym_bodysparql = 57,
  sym_bodygraphql = 58,
  sym_bodygraphqlvars = 59,
  sym_bodyformurlencoded = 60,
  sym_bodyformmultipart = 61,
  sym_varsandassert = 62,
  sym_varsreq = 63,
  sym_varsres = 64,
  sym_assert = 65,
  sym_script = 66,
  sym_scriptreq = 67,
  sym_scriptres = 68,
  sym_tests = 69,
  sym_docs = 70,
  sym_textblock = 71,
  sym_dictionary = 72,
  sym_dictionary_pair = 73,
  sym_assert_dictionary = 74,
  sym_assert_dictionary_pair = 75,
  aux_sym_source_file_repeat1 = 76,
  aux_sym_dictionary_repeat1 = 77,
  aux_sym_assert_dictionary_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_meta] = "keyword",
  [anon_sym_get] = "get",
  [anon_sym_post] = "post",
  [anon_sym_put] = "put",
  [anon_sym_delete] = "delete",
  [anon_sym_patch] = "patch",
  [anon_sym_options] = "options",
  [anon_sym_head] = "head",
  [anon_sym_connect] = "connect",
  [anon_sym_trace] = "trace",
  [anon_sym_query] = "keyword",
  [anon_sym_headers] = "keyword",
  [anon_sym_auth_COLONawsv4] = "keyword",
  [anon_sym_auth_COLONbasic] = "keyword",
  [anon_sym_auth_COLONbearer] = "keyword",
  [anon_sym_auth_COLONdigest] = "keyword",
  [anon_sym_body] = "keyword",
  [anon_sym_body_COLONjson] = "keyword",
  [anon_sym_body_COLONtext] = "keyword",
  [anon_sym_body_COLONxml] = "keyword",
  [anon_sym_body_COLONsparql] = "keyword",
  [anon_sym_body_COLONgraphql] = "keyword",
  [anon_sym_body_COLONgraphql_COLONvars] = "keyword",
  [anon_sym_body_COLONform_DASHurlencoded] = "keyword",
  [anon_sym_body_COLONmultipart_DASHform] = "keyword",
  [anon_sym_vars_COLONpre_DASHrequest] = "keyword",
  [anon_sym_vars_COLONpost_DASHresponse] = "keyword",
  [anon_sym_assert] = "keyword",
  [anon_sym_script_COLONpre_DASHrequest] = "keyword",
  [anon_sym_script_COLONpost_DASHresponse] = "keyword",
  [anon_sym_tests] = "keyword",
  [anon_sym_docs] = "keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_assert_key] = "assert_key",
  [sym_key] = "key",
  [sym_operator] = "operator",
  [sym_value] = "value",
  [sym_rawtext] = "rawtext",
  [sym_source_file] = "source_file",
  [sym_meta] = "meta",
  [sym_http] = "http",
  [sym_http_verb] = "http_verb",
  [sym_query] = "query",
  [sym_headers] = "headers",
  [sym_auths] = "auths",
  [sym_authawsv4] = "authawsv4",
  [sym_authbasic] = "authbasic",
  [sym_authbearer] = "authbearer",
  [sym_authdigest] = "authdigest",
  [sym_bodies] = "bodies",
  [sym_bodyforms] = "bodyforms",
  [sym_body] = "body",
  [sym_bodyjson] = "bodyjson",
  [sym_bodytext] = "bodytext",
  [sym_bodyxml] = "bodyxml",
  [sym_bodysparql] = "bodysparql",
  [sym_bodygraphql] = "bodygraphql",
  [sym_bodygraphqlvars] = "bodygraphqlvars",
  [sym_bodyformurlencoded] = "bodyformurlencoded",
  [sym_bodyformmultipart] = "bodyformmultipart",
  [sym_varsandassert] = "varsandassert",
  [sym_varsreq] = "varsreq",
  [sym_varsres] = "varsres",
  [sym_assert] = "assert",
  [sym_script] = "script",
  [sym_scriptreq] = "scriptreq",
  [sym_scriptres] = "scriptres",
  [sym_tests] = "tests",
  [sym_docs] = "docs",
  [sym_textblock] = "textblock",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_pair] = "dictionary_pair",
  [sym_assert_dictionary] = "assert_dictionary",
  [sym_assert_dictionary_pair] = "assert_dictionary_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_dictionary_repeat1] = "dictionary_repeat1",
  [aux_sym_assert_dictionary_repeat1] = "assert_dictionary_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_post] = anon_sym_post,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_delete] = anon_sym_delete,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_head] = anon_sym_head,
  [anon_sym_connect] = anon_sym_connect,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_query] = anon_sym_meta,
  [anon_sym_headers] = anon_sym_meta,
  [anon_sym_auth_COLONawsv4] = anon_sym_meta,
  [anon_sym_auth_COLONbasic] = anon_sym_meta,
  [anon_sym_auth_COLONbearer] = anon_sym_meta,
  [anon_sym_auth_COLONdigest] = anon_sym_meta,
  [anon_sym_body] = anon_sym_meta,
  [anon_sym_body_COLONjson] = anon_sym_meta,
  [anon_sym_body_COLONtext] = anon_sym_meta,
  [anon_sym_body_COLONxml] = anon_sym_meta,
  [anon_sym_body_COLONsparql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql] = anon_sym_meta,
  [anon_sym_body_COLONgraphql_COLONvars] = anon_sym_meta,
  [anon_sym_body_COLONform_DASHurlencoded] = anon_sym_meta,
  [anon_sym_body_COLONmultipart_DASHform] = anon_sym_meta,
  [anon_sym_vars_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_vars_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_assert] = anon_sym_meta,
  [anon_sym_script_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_script_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_tests] = anon_sym_meta,
  [anon_sym_docs] = anon_sym_meta,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_assert_key] = sym_assert_key,
  [sym_key] = sym_key,
  [sym_operator] = sym_operator,
  [sym_value] = sym_value,
  [sym_rawtext] = sym_rawtext,
  [sym_source_file] = sym_source_file,
  [sym_meta] = sym_meta,
  [sym_http] = sym_http,
  [sym_http_verb] = sym_http_verb,
  [sym_query] = sym_query,
  [sym_headers] = sym_headers,
  [sym_auths] = sym_auths,
  [sym_authawsv4] = sym_authawsv4,
  [sym_authbasic] = sym_authbasic,
  [sym_authbearer] = sym_authbearer,
  [sym_authdigest] = sym_authdigest,
  [sym_bodies] = sym_bodies,
  [sym_bodyforms] = sym_bodyforms,
  [sym_body] = sym_body,
  [sym_bodyjson] = sym_bodyjson,
  [sym_bodytext] = sym_bodytext,
  [sym_bodyxml] = sym_bodyxml,
  [sym_bodysparql] = sym_bodysparql,
  [sym_bodygraphql] = sym_bodygraphql,
  [sym_bodygraphqlvars] = sym_bodygraphqlvars,
  [sym_bodyformurlencoded] = sym_bodyformurlencoded,
  [sym_bodyformmultipart] = sym_bodyformmultipart,
  [sym_varsandassert] = sym_varsandassert,
  [sym_varsreq] = sym_varsreq,
  [sym_varsres] = sym_varsres,
  [sym_assert] = sym_assert,
  [sym_script] = sym_script,
  [sym_scriptreq] = sym_scriptreq,
  [sym_scriptres] = sym_scriptres,
  [sym_tests] = sym_tests,
  [sym_docs] = sym_docs,
  [sym_textblock] = sym_textblock,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_pair] = sym_dictionary_pair,
  [sym_assert_dictionary] = sym_assert_dictionary,
  [sym_assert_dictionary_pair] = sym_assert_dictionary_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_dictionary_repeat1] = aux_sym_dictionary_repeat1,
  [aux_sym_assert_dictionary_repeat1] = aux_sym_assert_dictionary_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_head] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_connect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_headers] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONawsv4] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbasic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONbearer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_auth_COLONdigest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONjson] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONtext] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONxml] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONsparql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONgraphql_COLONvars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONform_DASHurlencoded] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_body_COLONmultipart_DASHform] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpre_DASHrequest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script_COLONpost_DASHresponse] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tests] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_docs] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_assert_key] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_rawtext] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_http] = {
    .visible = true,
    .named = true,
  },
  [sym_http_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_headers] = {
    .visible = true,
    .named = true,
  },
  [sym_auths] = {
    .visible = true,
    .named = true,
  },
  [sym_authawsv4] = {
    .visible = true,
    .named = true,
  },
  [sym_authbasic] = {
    .visible = true,
    .named = true,
  },
  [sym_authbearer] = {
    .visible = true,
    .named = true,
  },
  [sym_authdigest] = {
    .visible = true,
    .named = true,
  },
  [sym_bodies] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyforms] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyjson] = {
    .visible = true,
    .named = true,
  },
  [sym_bodytext] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyxml] = {
    .visible = true,
    .named = true,
  },
  [sym_bodysparql] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygraphql] = {
    .visible = true,
    .named = true,
  },
  [sym_bodygraphqlvars] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyformurlencoded] = {
    .visible = true,
    .named = true,
  },
  [sym_bodyformmultipart] = {
    .visible = true,
    .named = true,
  },
  [sym_varsandassert] = {
    .visible = true,
    .named = true,
  },
  [sym_varsreq] = {
    .visible = true,
    .named = true,
  },
  [sym_varsres] = {
    .visible = true,
    .named = true,
  },
  [sym_assert] = {
    .visible = true,
    .named = true,
  },
  [sym_script] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptreq] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptres] = {
    .visible = true,
    .named = true,
  },
  [sym_tests] = {
    .visible = true,
    .named = true,
  },
  [sym_docs] = {
    .visible = true,
    .named = true,
  },
  [sym_textblock] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_dictionary_pair] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assert_dictionary_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(185);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'd') ADVANCE(37);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == 'h') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(175);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead == '}') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(224);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(223);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(198);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(109);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(209);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'g') ADVANCE(121);
      if (lookahead == 'j') ADVANCE(150);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == 't') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 64:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(5);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 110:
      if (lookahead == 'q') ADVANCE(75);
      END_STATE();
    case 111:
      if (lookahead == 'q') ADVANCE(76);
      END_STATE();
    case 112:
      if (lookahead == 'q') ADVANCE(177);
      END_STATE();
    case 113:
      if (lookahead == 'q') ADVANCE(178);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 179:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 180:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 181:
      if (lookahead == 'w') ADVANCE(137);
      END_STATE();
    case 182:
      if (lookahead == 'x') ADVANCE(161);
      END_STATE();
    case 183:
      if (lookahead == 'y') ADVANCE(202);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(63);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(180);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(224);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(226);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

enum {
  ts_external_token_rawtext = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_rawtext] = sym_rawtext,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_rawtext] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_post] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_delete] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_head] = ACTIONS(1),
    [anon_sym_connect] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_headers] = ACTIONS(1),
    [anon_sym_auth_COLONawsv4] = ACTIONS(1),
    [anon_sym_auth_COLONbasic] = ACTIONS(1),
    [anon_sym_auth_COLONbearer] = ACTIONS(1),
    [anon_sym_auth_COLONdigest] = ACTIONS(1),
    [anon_sym_body] = ACTIONS(1),
    [anon_sym_body_COLONjson] = ACTIONS(1),
    [anon_sym_body_COLONtext] = ACTIONS(1),
    [anon_sym_body_COLONxml] = ACTIONS(1),
    [anon_sym_body_COLONsparql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql] = ACTIONS(1),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(1),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(1),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(1),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_tests] = ACTIONS(1),
    [anon_sym_docs] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_rawtext] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(78),
    [sym_meta] = STATE(2),
    [sym_http] = STATE(2),
    [sym_http_verb] = STATE(50),
    [sym_query] = STATE(2),
    [sym_headers] = STATE(2),
    [sym_auths] = STATE(2),
    [sym_authawsv4] = STATE(28),
    [sym_authbasic] = STATE(28),
    [sym_authbearer] = STATE(28),
    [sym_authdigest] = STATE(28),
    [sym_bodies] = STATE(2),
    [sym_bodyforms] = STATE(29),
    [sym_body] = STATE(29),
    [sym_bodyjson] = STATE(29),
    [sym_bodytext] = STATE(29),
    [sym_bodyxml] = STATE(29),
    [sym_bodysparql] = STATE(29),
    [sym_bodygraphql] = STATE(29),
    [sym_bodygraphqlvars] = STATE(29),
    [sym_bodyformurlencoded] = STATE(30),
    [sym_bodyformmultipart] = STATE(30),
    [sym_varsandassert] = STATE(2),
    [sym_varsreq] = STATE(14),
    [sym_varsres] = STATE(14),
    [sym_assert] = STATE(14),
    [sym_script] = STATE(2),
    [sym_scriptreq] = STATE(32),
    [sym_scriptres] = STATE(32),
    [sym_tests] = STATE(2),
    [sym_docs] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_meta] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_options] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_connect] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(7),
    [anon_sym_query] = ACTIONS(11),
    [anon_sym_headers] = ACTIONS(13),
    [anon_sym_auth_COLONawsv4] = ACTIONS(15),
    [anon_sym_auth_COLONbasic] = ACTIONS(17),
    [anon_sym_auth_COLONbearer] = ACTIONS(19),
    [anon_sym_auth_COLONdigest] = ACTIONS(21),
    [anon_sym_body] = ACTIONS(23),
    [anon_sym_body_COLONjson] = ACTIONS(25),
    [anon_sym_body_COLONtext] = ACTIONS(27),
    [anon_sym_body_COLONxml] = ACTIONS(29),
    [anon_sym_body_COLONsparql] = ACTIONS(31),
    [anon_sym_body_COLONgraphql] = ACTIONS(33),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(35),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(37),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(39),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(41),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(43),
    [anon_sym_assert] = ACTIONS(45),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(47),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(49),
    [anon_sym_tests] = ACTIONS(51),
    [anon_sym_docs] = ACTIONS(53),
  },
  [2] = {
    [sym_meta] = STATE(3),
    [sym_http] = STATE(3),
    [sym_http_verb] = STATE(50),
    [sym_query] = STATE(3),
    [sym_headers] = STATE(3),
    [sym_auths] = STATE(3),
    [sym_authawsv4] = STATE(28),
    [sym_authbasic] = STATE(28),
    [sym_authbearer] = STATE(28),
    [sym_authdigest] = STATE(28),
    [sym_bodies] = STATE(3),
    [sym_bodyforms] = STATE(29),
    [sym_body] = STATE(29),
    [sym_bodyjson] = STATE(29),
    [sym_bodytext] = STATE(29),
    [sym_bodyxml] = STATE(29),
    [sym_bodysparql] = STATE(29),
    [sym_bodygraphql] = STATE(29),
    [sym_bodygraphqlvars] = STATE(29),
    [sym_bodyformurlencoded] = STATE(30),
    [sym_bodyformmultipart] = STATE(30),
    [sym_varsandassert] = STATE(3),
    [sym_varsreq] = STATE(14),
    [sym_varsres] = STATE(14),
    [sym_assert] = STATE(14),
    [sym_script] = STATE(3),
    [sym_scriptreq] = STATE(32),
    [sym_scriptres] = STATE(32),
    [sym_tests] = STATE(3),
    [sym_docs] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_meta] = ACTIONS(5),
    [anon_sym_get] = ACTIONS(7),
    [anon_sym_post] = ACTIONS(7),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_delete] = ACTIONS(7),
    [anon_sym_patch] = ACTIONS(7),
    [anon_sym_options] = ACTIONS(7),
    [anon_sym_head] = ACTIONS(9),
    [anon_sym_connect] = ACTIONS(7),
    [anon_sym_trace] = ACTIONS(7),
    [anon_sym_query] = ACTIONS(11),
    [anon_sym_headers] = ACTIONS(13),
    [anon_sym_auth_COLONawsv4] = ACTIONS(15),
    [anon_sym_auth_COLONbasic] = ACTIONS(17),
    [anon_sym_auth_COLONbearer] = ACTIONS(19),
    [anon_sym_auth_COLONdigest] = ACTIONS(21),
    [anon_sym_body] = ACTIONS(23),
    [anon_sym_body_COLONjson] = ACTIONS(25),
    [anon_sym_body_COLONtext] = ACTIONS(27),
    [anon_sym_body_COLONxml] = ACTIONS(29),
    [anon_sym_body_COLONsparql] = ACTIONS(31),
    [anon_sym_body_COLONgraphql] = ACTIONS(33),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(35),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(37),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(39),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(41),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(43),
    [anon_sym_assert] = ACTIONS(45),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(47),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(49),
    [anon_sym_tests] = ACTIONS(51),
    [anon_sym_docs] = ACTIONS(53),
  },
  [3] = {
    [sym_meta] = STATE(3),
    [sym_http] = STATE(3),
    [sym_http_verb] = STATE(50),
    [sym_query] = STATE(3),
    [sym_headers] = STATE(3),
    [sym_auths] = STATE(3),
    [sym_authawsv4] = STATE(28),
    [sym_authbasic] = STATE(28),
    [sym_authbearer] = STATE(28),
    [sym_authdigest] = STATE(28),
    [sym_bodies] = STATE(3),
    [sym_bodyforms] = STATE(29),
    [sym_body] = STATE(29),
    [sym_bodyjson] = STATE(29),
    [sym_bodytext] = STATE(29),
    [sym_bodyxml] = STATE(29),
    [sym_bodysparql] = STATE(29),
    [sym_bodygraphql] = STATE(29),
    [sym_bodygraphqlvars] = STATE(29),
    [sym_bodyformurlencoded] = STATE(30),
    [sym_bodyformmultipart] = STATE(30),
    [sym_varsandassert] = STATE(3),
    [sym_varsreq] = STATE(14),
    [sym_varsres] = STATE(14),
    [sym_assert] = STATE(14),
    [sym_script] = STATE(3),
    [sym_scriptreq] = STATE(32),
    [sym_scriptres] = STATE(32),
    [sym_tests] = STATE(3),
    [sym_docs] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_meta] = ACTIONS(59),
    [anon_sym_get] = ACTIONS(62),
    [anon_sym_post] = ACTIONS(62),
    [anon_sym_put] = ACTIONS(62),
    [anon_sym_delete] = ACTIONS(62),
    [anon_sym_patch] = ACTIONS(62),
    [anon_sym_options] = ACTIONS(62),
    [anon_sym_head] = ACTIONS(65),
    [anon_sym_connect] = ACTIONS(62),
    [anon_sym_trace] = ACTIONS(62),
    [anon_sym_query] = ACTIONS(68),
    [anon_sym_headers] = ACTIONS(71),
    [anon_sym_auth_COLONawsv4] = ACTIONS(74),
    [anon_sym_auth_COLONbasic] = ACTIONS(77),
    [anon_sym_auth_COLONbearer] = ACTIONS(80),
    [anon_sym_auth_COLONdigest] = ACTIONS(83),
    [anon_sym_body] = ACTIONS(86),
    [anon_sym_body_COLONjson] = ACTIONS(89),
    [anon_sym_body_COLONtext] = ACTIONS(92),
    [anon_sym_body_COLONxml] = ACTIONS(95),
    [anon_sym_body_COLONsparql] = ACTIONS(98),
    [anon_sym_body_COLONgraphql] = ACTIONS(101),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(104),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(107),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(110),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(113),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(116),
    [anon_sym_assert] = ACTIONS(119),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(122),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(125),
    [anon_sym_tests] = ACTIONS(128),
    [anon_sym_docs] = ACTIONS(131),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(136), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(134), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [38] = 2,
    ACTIONS(140), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(138), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [76] = 2,
    ACTIONS(144), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(142), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [114] = 2,
    ACTIONS(148), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(146), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [152] = 2,
    ACTIONS(152), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(150), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [190] = 2,
    ACTIONS(156), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(154), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [228] = 2,
    ACTIONS(160), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(158), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [266] = 2,
    ACTIONS(164), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(162), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [304] = 2,
    ACTIONS(168), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(166), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [342] = 2,
    ACTIONS(172), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(170), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [380] = 2,
    ACTIONS(176), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(174), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [418] = 2,
    ACTIONS(180), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(178), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [456] = 2,
    ACTIONS(184), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(182), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [494] = 2,
    ACTIONS(188), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(186), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [532] = 2,
    ACTIONS(192), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(190), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [570] = 2,
    ACTIONS(196), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(194), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [608] = 2,
    ACTIONS(200), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(198), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [646] = 2,
    ACTIONS(204), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(202), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [684] = 2,
    ACTIONS(208), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(206), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [722] = 2,
    ACTIONS(212), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(210), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [760] = 2,
    ACTIONS(216), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(214), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [798] = 2,
    ACTIONS(220), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(218), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [836] = 2,
    ACTIONS(224), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(222), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [874] = 2,
    ACTIONS(228), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(226), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [912] = 2,
    ACTIONS(232), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(230), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [950] = 2,
    ACTIONS(236), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(234), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [988] = 2,
    ACTIONS(240), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(238), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1026] = 2,
    ACTIONS(244), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(242), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1064] = 2,
    ACTIONS(248), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(246), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1102] = 2,
    ACTIONS(252), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(250), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1140] = 2,
    ACTIONS(256), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(254), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1178] = 2,
    ACTIONS(260), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(258), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1216] = 2,
    ACTIONS(264), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(262), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1254] = 2,
    ACTIONS(268), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(266), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1292] = 2,
    ACTIONS(272), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(270), 30,
      ts_builtin_sym_end,
      anon_sym_meta,
      anon_sym_get,
      anon_sym_post,
      anon_sym_put,
      anon_sym_delete,
      anon_sym_patch,
      anon_sym_options,
      anon_sym_connect,
      anon_sym_trace,
      anon_sym_query,
      anon_sym_headers,
      anon_sym_auth_COLONawsv4,
      anon_sym_auth_COLONbasic,
      anon_sym_auth_COLONbearer,
      anon_sym_auth_COLONdigest,
      anon_sym_body_COLONjson,
      anon_sym_body_COLONtext,
      anon_sym_body_COLONxml,
      anon_sym_body_COLONsparql,
      anon_sym_body_COLONgraphql_COLONvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1330] = 3,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(276), 1,
      sym_key,
    STATE(41), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1341] = 3,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      sym_assert_key,
    STATE(42), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1352] = 3,
    ACTIONS(276), 1,
      sym_key,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1363] = 3,
    ACTIONS(280), 1,
      sym_assert_key,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1374] = 3,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 1,
      sym_key,
    STATE(43), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1385] = 3,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      sym_assert_key,
    STATE(44), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1396] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_textblock,
  [1403] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_textblock,
  [1410] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_dictionary,
  [1417] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_dictionary,
  [1424] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_dictionary,
  [1431] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_dictionary,
  [1438] = 1,
    ACTIONS(300), 2,
      anon_sym_RBRACE,
      sym_assert_key,
  [1443] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_textblock,
  [1450] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_textblock,
  [1457] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_textblock,
  [1464] = 2,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_assert_dictionary,
  [1471] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_dictionary,
  [1478] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_dictionary,
  [1485] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_dictionary,
  [1492] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_dictionary,
  [1499] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_dictionary,
  [1506] = 1,
    ACTIONS(304), 2,
      anon_sym_RBRACE,
      sym_key,
  [1511] = 2,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      sym_rawtext,
  [1518] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_dictionary,
  [1525] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_textblock,
  [1532] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_dictionary,
  [1539] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_textblock,
  [1546] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_textblock,
  [1553] = 2,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_dictionary,
  [1560] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_textblock,
  [1567] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_textblock,
  [1574] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_textblock,
  [1581] = 1,
    ACTIONS(310), 1,
      sym_value,
  [1585] = 1,
    ACTIONS(312), 1,
      sym_operator,
  [1589] = 1,
    ACTIONS(314), 1,
      sym_value,
  [1593] = 1,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
  [1597] = 1,
    ACTIONS(318), 1,
      sym_operator,
  [1601] = 1,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
  [1605] = 1,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 38,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 152,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 228,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 304,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 380,
  [SMALL_STATE(15)] = 418,
  [SMALL_STATE(16)] = 456,
  [SMALL_STATE(17)] = 494,
  [SMALL_STATE(18)] = 532,
  [SMALL_STATE(19)] = 570,
  [SMALL_STATE(20)] = 608,
  [SMALL_STATE(21)] = 646,
  [SMALL_STATE(22)] = 684,
  [SMALL_STATE(23)] = 722,
  [SMALL_STATE(24)] = 760,
  [SMALL_STATE(25)] = 798,
  [SMALL_STATE(26)] = 836,
  [SMALL_STATE(27)] = 874,
  [SMALL_STATE(28)] = 912,
  [SMALL_STATE(29)] = 950,
  [SMALL_STATE(30)] = 988,
  [SMALL_STATE(31)] = 1026,
  [SMALL_STATE(32)] = 1064,
  [SMALL_STATE(33)] = 1102,
  [SMALL_STATE(34)] = 1140,
  [SMALL_STATE(35)] = 1178,
  [SMALL_STATE(36)] = 1216,
  [SMALL_STATE(37)] = 1254,
  [SMALL_STATE(38)] = 1292,
  [SMALL_STATE(39)] = 1330,
  [SMALL_STATE(40)] = 1341,
  [SMALL_STATE(41)] = 1352,
  [SMALL_STATE(42)] = 1363,
  [SMALL_STATE(43)] = 1374,
  [SMALL_STATE(44)] = 1385,
  [SMALL_STATE(45)] = 1396,
  [SMALL_STATE(46)] = 1403,
  [SMALL_STATE(47)] = 1410,
  [SMALL_STATE(48)] = 1417,
  [SMALL_STATE(49)] = 1424,
  [SMALL_STATE(50)] = 1431,
  [SMALL_STATE(51)] = 1438,
  [SMALL_STATE(52)] = 1443,
  [SMALL_STATE(53)] = 1450,
  [SMALL_STATE(54)] = 1457,
  [SMALL_STATE(55)] = 1464,
  [SMALL_STATE(56)] = 1471,
  [SMALL_STATE(57)] = 1478,
  [SMALL_STATE(58)] = 1485,
  [SMALL_STATE(59)] = 1492,
  [SMALL_STATE(60)] = 1499,
  [SMALL_STATE(61)] = 1506,
  [SMALL_STATE(62)] = 1511,
  [SMALL_STATE(63)] = 1518,
  [SMALL_STATE(64)] = 1525,
  [SMALL_STATE(65)] = 1532,
  [SMALL_STATE(66)] = 1539,
  [SMALL_STATE(67)] = 1546,
  [SMALL_STATE(68)] = 1553,
  [SMALL_STATE(69)] = 1560,
  [SMALL_STATE(70)] = 1567,
  [SMALL_STATE(71)] = 1574,
  [SMALL_STATE(72)] = 1581,
  [SMALL_STATE(73)] = 1585,
  [SMALL_STATE(74)] = 1589,
  [SMALL_STATE(75)] = 1593,
  [SMALL_STATE(76)] = 1597,
  [SMALL_STATE(77)] = 1601,
  [SMALL_STATE(78)] = 1605,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptres, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptres, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformmultipart, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformmultipart, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodytext, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodytext, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyjson, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyjson, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsandassert, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsandassert, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptreq, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptreq, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodysparql, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodysparql, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsres, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsres, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbearer, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbearer, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsreq, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsreq, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyxml, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyxml, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformurlencoded, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformurlencoded, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphqlvars, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphqlvars, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyforms, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyforms, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authdigest, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authdigest, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphql, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphql, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbasic, 2),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbasic, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authawsv4, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authawsv4, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(76),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2), SHIFT_REPEAT(73),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary_pair, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_pair, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1),
  [322] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bruno_external_scanner_create(void);
void tree_sitter_bruno_external_scanner_destroy(void *);
bool tree_sitter_bruno_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bruno_external_scanner_serialize(void *, char *);
void tree_sitter_bruno_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bruno(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bruno_external_scanner_create,
      tree_sitter_bruno_external_scanner_destroy,
      tree_sitter_bruno_external_scanner_scan,
      tree_sitter_bruno_external_scanner_serialize,
      tree_sitter_bruno_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
