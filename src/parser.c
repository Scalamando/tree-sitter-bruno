#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_body_COLONgraphqlvars = 23,
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
  sym_textline = 35,
  sym_assert_key = 36,
  sym_key = 37,
  sym_operator = 38,
  sym_value = 39,
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
  sym_bodymultipart = 61,
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
  sym_rawtext = 72,
  sym_dictionary = 73,
  sym_dictionary_pair = 74,
  sym_assert_dictionary = 75,
  sym_assert_dictionary_pair = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_rawtext_repeat1 = 78,
  aux_sym_dictionary_repeat1 = 79,
  aux_sym_assert_dictionary_repeat1 = 80,
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
  [anon_sym_body_COLONgraphqlvars] = "keyword",
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
  [sym_textline] = "textline",
  [sym_assert_key] = "assert_key",
  [sym_key] = "key",
  [sym_operator] = "operator",
  [sym_value] = "value",
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
  [sym_bodymultipart] = "bodymultipart",
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
  [sym_rawtext] = "rawtext",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_pair] = "dictionary_pair",
  [sym_assert_dictionary] = "assert_dictionary",
  [sym_assert_dictionary_pair] = "assert_dictionary_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_rawtext_repeat1] = "rawtext_repeat1",
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
  [anon_sym_body_COLONgraphqlvars] = anon_sym_meta,
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
  [sym_textline] = sym_textline,
  [sym_assert_key] = sym_assert_key,
  [sym_key] = sym_key,
  [sym_operator] = sym_operator,
  [sym_value] = sym_value,
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
  [sym_bodymultipart] = sym_bodymultipart,
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
  [sym_rawtext] = sym_rawtext,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_pair] = sym_dictionary_pair,
  [sym_assert_dictionary] = sym_assert_dictionary,
  [sym_assert_dictionary_pair] = sym_assert_dictionary_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_rawtext_repeat1] = aux_sym_rawtext_repeat1,
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
  [anon_sym_body_COLONgraphqlvars] = {
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
  [sym_textline] = {
    .visible = true,
    .named = true,
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
  [sym_bodymultipart] = {
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
  [sym_rawtext] = {
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
  [aux_sym_rawtext_repeat1] = {
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

enum {
  field_auths = 1,
  field_bodies = 2,
  field_docs = 3,
  field_headers = 4,
  field_http = 5,
  field_meta = 6,
  field_query = 7,
  field_script = 8,
  field_tests = 9,
  field_varsandassert = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_auths] = "auths",
  [field_bodies] = "bodies",
  [field_docs] = "docs",
  [field_headers] = "headers",
  [field_http] = "http",
  [field_meta] = "meta",
  [field_query] = "query",
  [field_script] = "script",
  [field_tests] = "tests",
  [field_varsandassert] = "varsandassert",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 1},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 1},
  [11] = {.index = 10, .length = 10},
  [12] = {.index = 20, .length = 20},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_meta, 0},
  [1] =
    {field_http, 0},
  [2] =
    {field_query, 0},
  [3] =
    {field_headers, 0},
  [4] =
    {field_auths, 0},
  [5] =
    {field_bodies, 0},
  [6] =
    {field_varsandassert, 0},
  [7] =
    {field_script, 0},
  [8] =
    {field_tests, 0},
  [9] =
    {field_docs, 0},
  [10] =
    {field_auths, 0, .inherited = true},
    {field_bodies, 0, .inherited = true},
    {field_docs, 0, .inherited = true},
    {field_headers, 0, .inherited = true},
    {field_http, 0, .inherited = true},
    {field_meta, 0, .inherited = true},
    {field_query, 0, .inherited = true},
    {field_script, 0, .inherited = true},
    {field_tests, 0, .inherited = true},
    {field_varsandassert, 0, .inherited = true},
  [20] =
    {field_auths, 0, .inherited = true},
    {field_auths, 1, .inherited = true},
    {field_bodies, 0, .inherited = true},
    {field_bodies, 1, .inherited = true},
    {field_docs, 0, .inherited = true},
    {field_docs, 1, .inherited = true},
    {field_headers, 0, .inherited = true},
    {field_headers, 1, .inherited = true},
    {field_http, 0, .inherited = true},
    {field_http, 1, .inherited = true},
    {field_meta, 0, .inherited = true},
    {field_meta, 1, .inherited = true},
    {field_query, 0, .inherited = true},
    {field_query, 1, .inherited = true},
    {field_script, 0, .inherited = true},
    {field_script, 1, .inherited = true},
    {field_tests, 0, .inherited = true},
    {field_tests, 1, .inherited = true},
    {field_varsandassert, 0, .inherited = true},
    {field_varsandassert, 1, .inherited = true},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(186);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'q') ADVANCE(177);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'v') ADVANCE(19);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '}') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(229);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '}') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(228);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(224);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(231);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(126);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(133);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(199);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(103);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(111);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(135);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(94);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(184);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == 'g') ADVANCE(123);
      if (lookahead == 'j') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(113);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(207);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(211);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 'q') ADVANCE(77);
      END_STATE();
    case 113:
      if (lookahead == 'q') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 'q') ADVANCE(179);
      END_STATE();
    case 115:
      if (lookahead == 'q') ADVANCE(180);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(209);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(164);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(205);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 178:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 181:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 182:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 183:
      if (lookahead == 'x') ADVANCE(163);
      END_STATE();
    case 184:
      if (lookahead == 'y') ADVANCE(203);
      END_STATE();
    case 185:
      if (lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(65);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphqlvars);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(228);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\r') ADVANCE(224);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead == '\n') ADVANCE(225);
      if (lookahead == '\r') ADVANCE(224);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_textline);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead == '}') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_operator);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(231);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
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
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
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
    [anon_sym_body_COLONgraphqlvars] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym_meta] = STATE(27),
    [sym_http] = STATE(28),
    [sym_http_verb] = STATE(63),
    [sym_query] = STATE(30),
    [sym_headers] = STATE(5),
    [sym_auths] = STATE(32),
    [sym_authawsv4] = STATE(33),
    [sym_authbasic] = STATE(33),
    [sym_authbearer] = STATE(33),
    [sym_authdigest] = STATE(33),
    [sym_bodies] = STATE(34),
    [sym_bodyforms] = STATE(35),
    [sym_body] = STATE(35),
    [sym_bodyjson] = STATE(35),
    [sym_bodytext] = STATE(35),
    [sym_bodyxml] = STATE(35),
    [sym_bodysparql] = STATE(35),
    [sym_bodygraphql] = STATE(35),
    [sym_bodygraphqlvars] = STATE(35),
    [sym_bodyformurlencoded] = STATE(36),
    [sym_bodymultipart] = STATE(36),
    [sym_varsandassert] = STATE(37),
    [sym_varsreq] = STATE(38),
    [sym_varsres] = STATE(38),
    [sym_assert] = STATE(38),
    [sym_script] = STATE(39),
    [sym_scriptreq] = STATE(40),
    [sym_scriptres] = STATE(40),
    [sym_tests] = STATE(41),
    [sym_docs] = STATE(42),
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
    [anon_sym_body_COLONgraphqlvars] = ACTIONS(35),
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
    [sym_meta] = STATE(27),
    [sym_http] = STATE(28),
    [sym_http_verb] = STATE(63),
    [sym_query] = STATE(30),
    [sym_headers] = STATE(5),
    [sym_auths] = STATE(32),
    [sym_authawsv4] = STATE(33),
    [sym_authbasic] = STATE(33),
    [sym_authbearer] = STATE(33),
    [sym_authdigest] = STATE(33),
    [sym_bodies] = STATE(34),
    [sym_bodyforms] = STATE(35),
    [sym_body] = STATE(35),
    [sym_bodyjson] = STATE(35),
    [sym_bodytext] = STATE(35),
    [sym_bodyxml] = STATE(35),
    [sym_bodysparql] = STATE(35),
    [sym_bodygraphql] = STATE(35),
    [sym_bodygraphqlvars] = STATE(35),
    [sym_bodyformurlencoded] = STATE(36),
    [sym_bodymultipart] = STATE(36),
    [sym_varsandassert] = STATE(37),
    [sym_varsreq] = STATE(38),
    [sym_varsres] = STATE(38),
    [sym_assert] = STATE(38),
    [sym_script] = STATE(39),
    [sym_scriptreq] = STATE(40),
    [sym_scriptres] = STATE(40),
    [sym_tests] = STATE(41),
    [sym_docs] = STATE(42),
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
    [anon_sym_body_COLONgraphqlvars] = ACTIONS(35),
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
    [sym_meta] = STATE(27),
    [sym_http] = STATE(28),
    [sym_http_verb] = STATE(63),
    [sym_query] = STATE(30),
    [sym_headers] = STATE(5),
    [sym_auths] = STATE(32),
    [sym_authawsv4] = STATE(33),
    [sym_authbasic] = STATE(33),
    [sym_authbearer] = STATE(33),
    [sym_authdigest] = STATE(33),
    [sym_bodies] = STATE(34),
    [sym_bodyforms] = STATE(35),
    [sym_body] = STATE(35),
    [sym_bodyjson] = STATE(35),
    [sym_bodytext] = STATE(35),
    [sym_bodyxml] = STATE(35),
    [sym_bodysparql] = STATE(35),
    [sym_bodygraphql] = STATE(35),
    [sym_bodygraphqlvars] = STATE(35),
    [sym_bodyformurlencoded] = STATE(36),
    [sym_bodymultipart] = STATE(36),
    [sym_varsandassert] = STATE(37),
    [sym_varsreq] = STATE(38),
    [sym_varsres] = STATE(38),
    [sym_assert] = STATE(38),
    [sym_script] = STATE(39),
    [sym_scriptreq] = STATE(40),
    [sym_scriptres] = STATE(40),
    [sym_tests] = STATE(41),
    [sym_docs] = STATE(42),
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
    [anon_sym_body_COLONgraphqlvars] = ACTIONS(104),
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1330] = 2,
    ACTIONS(276), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(274), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1368] = 2,
    ACTIONS(280), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(278), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1406] = 2,
    ACTIONS(284), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(282), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1444] = 2,
    ACTIONS(288), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(286), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1482] = 2,
    ACTIONS(292), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(290), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1520] = 2,
    ACTIONS(296), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(294), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1558] = 2,
    ACTIONS(300), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(298), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1596] = 2,
    ACTIONS(304), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(302), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1634] = 2,
    ACTIONS(308), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(306), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1672] = 2,
    ACTIONS(312), 3,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
    ACTIONS(310), 30,
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
      anon_sym_body_COLONgraphqlvars,
      anon_sym_body_COLONform_DASHurlencoded,
      anon_sym_body_COLONmultipart_DASHform,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1710] = 3,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      sym_key,
    STATE(52), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1721] = 3,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 1,
      sym_assert_key,
    STATE(53), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1732] = 4,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 1,
      sym_textline,
    STATE(56), 1,
      aux_sym_rawtext_repeat1,
    STATE(87), 1,
      sym_rawtext,
  [1745] = 3,
    ACTIONS(316), 1,
      sym_key,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(54), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1756] = 3,
    ACTIONS(320), 1,
      sym_assert_key,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(55), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1767] = 3,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      sym_key,
    STATE(54), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1778] = 3,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(337), 1,
      sym_assert_key,
    STATE(55), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1789] = 3,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 1,
      sym_textline,
    STATE(57), 1,
      aux_sym_rawtext_repeat1,
  [1799] = 3,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      sym_textline,
    STATE(57), 1,
      aux_sym_rawtext_repeat1,
  [1809] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_textblock,
  [1816] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_textblock,
  [1823] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_dictionary,
  [1830] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_dictionary,
  [1837] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_dictionary,
  [1844] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_dictionary,
  [1851] = 1,
    ACTIONS(353), 2,
      anon_sym_RBRACE,
      sym_assert_key,
  [1856] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_textblock,
  [1863] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_dictionary,
  [1870] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_textblock,
  [1877] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_textblock,
  [1884] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_dictionary,
  [1891] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_dictionary,
  [1898] = 1,
    ACTIONS(355), 2,
      anon_sym_RBRACE,
      sym_key,
  [1903] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_dictionary,
  [1910] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_dictionary,
  [1917] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_dictionary,
  [1924] = 2,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_assert_dictionary,
  [1931] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_dictionary,
  [1938] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_textblock,
  [1945] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_textblock,
  [1952] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_dictionary,
  [1959] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_textblock,
  [1966] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_textblock,
  [1973] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_textblock,
  [1980] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_textblock,
  [1987] = 1,
    ACTIONS(359), 1,
      sym_value,
  [1991] = 1,
    ACTIONS(361), 1,
      sym_operator,
  [1995] = 1,
    ACTIONS(363), 1,
      sym_value,
  [1999] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
  [2003] = 1,
    ACTIONS(367), 1,
      sym_operator,
  [2007] = 1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
  [2011] = 1,
    ACTIONS(371), 1,
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
  [SMALL_STATE(40)] = 1368,
  [SMALL_STATE(41)] = 1406,
  [SMALL_STATE(42)] = 1444,
  [SMALL_STATE(43)] = 1482,
  [SMALL_STATE(44)] = 1520,
  [SMALL_STATE(45)] = 1558,
  [SMALL_STATE(46)] = 1596,
  [SMALL_STATE(47)] = 1634,
  [SMALL_STATE(48)] = 1672,
  [SMALL_STATE(49)] = 1710,
  [SMALL_STATE(50)] = 1721,
  [SMALL_STATE(51)] = 1732,
  [SMALL_STATE(52)] = 1745,
  [SMALL_STATE(53)] = 1756,
  [SMALL_STATE(54)] = 1767,
  [SMALL_STATE(55)] = 1778,
  [SMALL_STATE(56)] = 1789,
  [SMALL_STATE(57)] = 1799,
  [SMALL_STATE(58)] = 1809,
  [SMALL_STATE(59)] = 1816,
  [SMALL_STATE(60)] = 1823,
  [SMALL_STATE(61)] = 1830,
  [SMALL_STATE(62)] = 1837,
  [SMALL_STATE(63)] = 1844,
  [SMALL_STATE(64)] = 1851,
  [SMALL_STATE(65)] = 1856,
  [SMALL_STATE(66)] = 1863,
  [SMALL_STATE(67)] = 1870,
  [SMALL_STATE(68)] = 1877,
  [SMALL_STATE(69)] = 1884,
  [SMALL_STATE(70)] = 1891,
  [SMALL_STATE(71)] = 1898,
  [SMALL_STATE(72)] = 1903,
  [SMALL_STATE(73)] = 1910,
  [SMALL_STATE(74)] = 1917,
  [SMALL_STATE(75)] = 1924,
  [SMALL_STATE(76)] = 1931,
  [SMALL_STATE(77)] = 1938,
  [SMALL_STATE(78)] = 1945,
  [SMALL_STATE(79)] = 1952,
  [SMALL_STATE(80)] = 1959,
  [SMALL_STATE(81)] = 1966,
  [SMALL_STATE(82)] = 1973,
  [SMALL_STATE(83)] = 1980,
  [SMALL_STATE(84)] = 1987,
  [SMALL_STATE(85)] = 1991,
  [SMALL_STATE(86)] = 1995,
  [SMALL_STATE(87)] = 1999,
  [SMALL_STATE(88)] = 2003,
  [SMALL_STATE(89)] = 2007,
  [SMALL_STATE(90)] = 2011,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 11),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(62),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(89),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(89),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(66),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(61),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(60),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(73),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(76),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(79),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(81),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(83),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(82),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(80),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(78),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(77),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(59),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(74),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(72),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(70),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(69),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(75),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(68),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(67),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(65),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 12), SHIFT_REPEAT(58),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptreq, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptreq, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphql, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphql, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodysparql, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodysparql, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyxml, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyxml, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodytext, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodytext, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 2),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyjson, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyjson, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authawsv4, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authawsv4, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptres, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptres, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authdigest, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authdigest, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsres, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsres, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsreq, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsreq, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphqlvars, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphqlvars, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 6),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 6),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyforms, 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyforms, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsandassert, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsandassert, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 8),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 8),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 9),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 9),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 10),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 10),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodymultipart, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodymultipart, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformurlencoded, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformurlencoded, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbearer, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbearer, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbasic, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbasic, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(88),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2), SHIFT_REPEAT(85),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rawtext, 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rawtext_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rawtext_repeat1, 2), SHIFT_REPEAT(57),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary_pair, 3),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_pair, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1),
  [371] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
