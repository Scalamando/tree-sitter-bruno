#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

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
  anon_sym_vars = 26,
  anon_sym_vars_COLONsecret = 27,
  anon_sym_vars_COLONpre_DASHrequest = 28,
  anon_sym_vars_COLONpost_DASHresponse = 29,
  anon_sym_assert = 30,
  anon_sym_script_COLONpre_DASHrequest = 31,
  anon_sym_script_COLONpost_DASHresponse = 32,
  anon_sym_tests = 33,
  anon_sym_docs = 34,
  anon_sym_LBRACE = 35,
  anon_sym_RBRACE = 36,
  anon_sym_LBRACK = 37,
  anon_sym_COMMA = 38,
  anon_sym_RBRACK = 39,
  sym_array_value = 40,
  anon_sym_COLON = 41,
  sym_assert_key = 42,
  sym_key = 43,
  sym_value = 44,
  sym_rawtext = 45,
  sym_source_file = 46,
  sym_meta = 47,
  sym_http = 48,
  sym_http_verb = 49,
  sym_query = 50,
  sym_headers = 51,
  sym_auths = 52,
  sym_authawsv4 = 53,
  sym_authbasic = 54,
  sym_authbearer = 55,
  sym_authdigest = 56,
  sym_bodies = 57,
  sym_bodyforms = 58,
  sym_body = 59,
  sym_bodyjson = 60,
  sym_bodytext = 61,
  sym_bodyxml = 62,
  sym_bodysparql = 63,
  sym_bodygraphql = 64,
  sym_bodygraphqlvars = 65,
  sym_bodyformurlencoded = 66,
  sym_bodyformmultipart = 67,
  sym_varsandassert = 68,
  sym_vars = 69,
  sym_vars_secret = 70,
  sym_varsreq = 71,
  sym_varsres = 72,
  sym_assert = 73,
  sym_script = 74,
  sym_scriptreq = 75,
  sym_scriptres = 76,
  sym_tests = 77,
  sym_docs = 78,
  sym_textblock = 79,
  sym_array = 80,
  sym_dictionary = 81,
  sym_dictionary_pair = 82,
  sym_assert_dictionary = 83,
  sym_assert_dictionary_pair = 84,
  aux_sym_source_file_repeat1 = 85,
  aux_sym_array_repeat1 = 86,
  aux_sym_dictionary_repeat1 = 87,
  aux_sym_assert_dictionary_repeat1 = 88,
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
  [anon_sym_vars] = "keyword",
  [anon_sym_vars_COLONsecret] = "keyword",
  [anon_sym_vars_COLONpre_DASHrequest] = "keyword",
  [anon_sym_vars_COLONpost_DASHresponse] = "keyword",
  [anon_sym_assert] = "keyword",
  [anon_sym_script_COLONpre_DASHrequest] = "keyword",
  [anon_sym_script_COLONpost_DASHresponse] = "keyword",
  [anon_sym_tests] = "keyword",
  [anon_sym_docs] = "keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_array_value] = "array_value",
  [anon_sym_COLON] = ":",
  [sym_assert_key] = "assert_key",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_rawtext] = "rawtext",
  [sym_source_file] = "source_file",
  [sym_meta] = "meta",
  [sym_http] = "http",
  [sym_http_verb] = "keyword",
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
  [sym_vars] = "vars",
  [sym_vars_secret] = "vars_secret",
  [sym_varsreq] = "varsreq",
  [sym_varsres] = "varsres",
  [sym_assert] = "assert",
  [sym_script] = "script",
  [sym_scriptreq] = "scriptreq",
  [sym_scriptres] = "scriptres",
  [sym_tests] = "tests",
  [sym_docs] = "docs",
  [sym_textblock] = "textblock",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_dictionary_pair] = "dictionary_pair",
  [sym_assert_dictionary] = "assert_dictionary",
  [sym_assert_dictionary_pair] = "assert_dictionary_pair",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
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
  [anon_sym_vars] = anon_sym_meta,
  [anon_sym_vars_COLONsecret] = anon_sym_meta,
  [anon_sym_vars_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_vars_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_assert] = anon_sym_meta,
  [anon_sym_script_COLONpre_DASHrequest] = anon_sym_meta,
  [anon_sym_script_COLONpost_DASHresponse] = anon_sym_meta,
  [anon_sym_tests] = anon_sym_meta,
  [anon_sym_docs] = anon_sym_meta,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_array_value] = sym_array_value,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_assert_key] = sym_assert_key,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_rawtext] = sym_rawtext,
  [sym_source_file] = sym_source_file,
  [sym_meta] = sym_meta,
  [sym_http] = sym_http,
  [sym_http_verb] = anon_sym_meta,
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
  [sym_vars] = sym_vars,
  [sym_vars_secret] = sym_vars_secret,
  [sym_varsreq] = sym_varsreq,
  [sym_varsres] = sym_varsres,
  [sym_assert] = sym_assert,
  [sym_script] = sym_script,
  [sym_scriptreq] = sym_scriptreq,
  [sym_scriptres] = sym_scriptres,
  [sym_tests] = sym_tests,
  [sym_docs] = sym_docs,
  [sym_textblock] = sym_textblock,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_dictionary_pair] = sym_dictionary_pair,
  [sym_assert_dictionary] = sym_assert_dictionary,
  [sym_assert_dictionary_pair] = sym_assert_dictionary_pair,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
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
  [anon_sym_vars] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vars_COLONsecret] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_array_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
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
  [sym_vars] = {
    .visible = true,
    .named = true,
  },
  [sym_vars_secret] = {
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
  [sym_array] = {
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
  [aux_sym_array_repeat1] = {
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
  field_tag = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_tag] = "tag",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_tag, 0},
  [1] =
    {field_tag, 0, .inherited = true},
  [2] =
    {field_tag, 0, .inherited = true},
    {field_tag, 1, .inherited = true},
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
      if (eof) ADVANCE(190);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '[') ADVANCE(229);
      if (lookahead == ']') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(180);
      if (lookahead == 's') ADVANCE(26);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'v') ADVANCE(17);
      if (lookahead == '{') ADVANCE(225);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(236);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(235);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == ']') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(232);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(128);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(134);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(135);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(203);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(112);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(204);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(198);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 66:
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == 'g') ADVANCE(124);
      if (lookahead == 'j') ADVANCE(154);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'h') ADVANCE(196);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(211);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(212);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(175);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(215);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(102);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 113:
      if (lookahead == 'q') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 'q') ADVANCE(79);
      END_STATE();
    case 115:
      if (lookahead == 'q') ADVANCE(182);
      END_STATE();
    case 116:
      if (lookahead == 'q') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(197);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(218);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 179:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 180:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 181:
      if (lookahead == 'u') ADVANCE(125);
      END_STATE();
    case 182:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 184:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 185:
      if (lookahead == 'v') ADVANCE(25);
      END_STATE();
    case 186:
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 187:
      if (lookahead == 'x') ADVANCE(165);
      END_STATE();
    case 188:
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 189:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(185);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_vars);
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_vars_COLONsecret);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(236);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(235);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_array_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead == '}') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(238);
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
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
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
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
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
    [anon_sym_vars] = ACTIONS(1),
    [anon_sym_vars_COLONsecret] = ACTIONS(1),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(1),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(1),
    [anon_sym_tests] = ACTIONS(1),
    [anon_sym_docs] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_rawtext] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(90),
    [sym_meta] = STATE(5),
    [sym_http] = STATE(5),
    [sym_http_verb] = STATE(59),
    [sym_query] = STATE(5),
    [sym_headers] = STATE(5),
    [sym_auths] = STATE(5),
    [sym_authawsv4] = STATE(31),
    [sym_authbasic] = STATE(31),
    [sym_authbearer] = STATE(31),
    [sym_authdigest] = STATE(31),
    [sym_bodies] = STATE(5),
    [sym_bodyforms] = STATE(32),
    [sym_body] = STATE(32),
    [sym_bodyjson] = STATE(32),
    [sym_bodytext] = STATE(32),
    [sym_bodyxml] = STATE(32),
    [sym_bodysparql] = STATE(32),
    [sym_bodygraphql] = STATE(32),
    [sym_bodygraphqlvars] = STATE(32),
    [sym_bodyformurlencoded] = STATE(33),
    [sym_bodyformmultipart] = STATE(33),
    [sym_varsandassert] = STATE(5),
    [sym_vars] = STATE(34),
    [sym_vars_secret] = STATE(34),
    [sym_varsreq] = STATE(34),
    [sym_varsres] = STATE(34),
    [sym_assert] = STATE(34),
    [sym_script] = STATE(5),
    [sym_scriptreq] = STATE(35),
    [sym_scriptres] = STATE(35),
    [sym_tests] = STATE(5),
    [sym_docs] = STATE(5),
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
    [anon_sym_vars] = ACTIONS(41),
    [anon_sym_vars_COLONsecret] = ACTIONS(43),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(45),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(47),
    [anon_sym_assert] = ACTIONS(49),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(51),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(53),
    [anon_sym_tests] = ACTIONS(55),
    [anon_sym_docs] = ACTIONS(57),
  },
  [2] = {
    [sym_meta] = STATE(5),
    [sym_http] = STATE(5),
    [sym_http_verb] = STATE(59),
    [sym_query] = STATE(5),
    [sym_headers] = STATE(5),
    [sym_auths] = STATE(5),
    [sym_authawsv4] = STATE(31),
    [sym_authbasic] = STATE(31),
    [sym_authbearer] = STATE(31),
    [sym_authdigest] = STATE(31),
    [sym_bodies] = STATE(5),
    [sym_bodyforms] = STATE(32),
    [sym_body] = STATE(32),
    [sym_bodyjson] = STATE(32),
    [sym_bodytext] = STATE(32),
    [sym_bodyxml] = STATE(32),
    [sym_bodysparql] = STATE(32),
    [sym_bodygraphql] = STATE(32),
    [sym_bodygraphqlvars] = STATE(32),
    [sym_bodyformurlencoded] = STATE(33),
    [sym_bodyformmultipart] = STATE(33),
    [sym_varsandassert] = STATE(5),
    [sym_vars] = STATE(34),
    [sym_vars_secret] = STATE(34),
    [sym_varsreq] = STATE(34),
    [sym_varsres] = STATE(34),
    [sym_assert] = STATE(34),
    [sym_script] = STATE(5),
    [sym_scriptreq] = STATE(35),
    [sym_scriptres] = STATE(35),
    [sym_tests] = STATE(5),
    [sym_docs] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(59),
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
    [anon_sym_vars] = ACTIONS(41),
    [anon_sym_vars_COLONsecret] = ACTIONS(43),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(45),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(47),
    [anon_sym_assert] = ACTIONS(49),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(51),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(53),
    [anon_sym_tests] = ACTIONS(55),
    [anon_sym_docs] = ACTIONS(57),
  },
  [3] = {
    [sym_meta] = STATE(5),
    [sym_http] = STATE(5),
    [sym_http_verb] = STATE(59),
    [sym_query] = STATE(5),
    [sym_headers] = STATE(5),
    [sym_auths] = STATE(5),
    [sym_authawsv4] = STATE(31),
    [sym_authbasic] = STATE(31),
    [sym_authbearer] = STATE(31),
    [sym_authdigest] = STATE(31),
    [sym_bodies] = STATE(5),
    [sym_bodyforms] = STATE(32),
    [sym_body] = STATE(32),
    [sym_bodyjson] = STATE(32),
    [sym_bodytext] = STATE(32),
    [sym_bodyxml] = STATE(32),
    [sym_bodysparql] = STATE(32),
    [sym_bodygraphql] = STATE(32),
    [sym_bodygraphqlvars] = STATE(32),
    [sym_bodyformurlencoded] = STATE(33),
    [sym_bodyformmultipart] = STATE(33),
    [sym_varsandassert] = STATE(5),
    [sym_vars] = STATE(34),
    [sym_vars_secret] = STATE(34),
    [sym_varsreq] = STATE(34),
    [sym_varsres] = STATE(34),
    [sym_assert] = STATE(34),
    [sym_script] = STATE(5),
    [sym_scriptreq] = STATE(35),
    [sym_scriptres] = STATE(35),
    [sym_tests] = STATE(5),
    [sym_docs] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_meta] = ACTIONS(63),
    [anon_sym_get] = ACTIONS(66),
    [anon_sym_post] = ACTIONS(66),
    [anon_sym_put] = ACTIONS(66),
    [anon_sym_delete] = ACTIONS(66),
    [anon_sym_patch] = ACTIONS(66),
    [anon_sym_options] = ACTIONS(66),
    [anon_sym_head] = ACTIONS(69),
    [anon_sym_connect] = ACTIONS(66),
    [anon_sym_trace] = ACTIONS(66),
    [anon_sym_query] = ACTIONS(72),
    [anon_sym_headers] = ACTIONS(75),
    [anon_sym_auth_COLONawsv4] = ACTIONS(78),
    [anon_sym_auth_COLONbasic] = ACTIONS(81),
    [anon_sym_auth_COLONbearer] = ACTIONS(84),
    [anon_sym_auth_COLONdigest] = ACTIONS(87),
    [anon_sym_body] = ACTIONS(90),
    [anon_sym_body_COLONjson] = ACTIONS(93),
    [anon_sym_body_COLONtext] = ACTIONS(96),
    [anon_sym_body_COLONxml] = ACTIONS(99),
    [anon_sym_body_COLONsparql] = ACTIONS(102),
    [anon_sym_body_COLONgraphql] = ACTIONS(105),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(108),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(111),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(114),
    [anon_sym_vars] = ACTIONS(117),
    [anon_sym_vars_COLONsecret] = ACTIONS(120),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(123),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(126),
    [anon_sym_assert] = ACTIONS(129),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(132),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(135),
    [anon_sym_tests] = ACTIONS(138),
    [anon_sym_docs] = ACTIONS(141),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(146), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(144), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [40] = 2,
    ACTIONS(150), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(148), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [80] = 2,
    ACTIONS(154), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(152), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [120] = 2,
    ACTIONS(158), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(156), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [160] = 2,
    ACTIONS(162), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(160), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [200] = 2,
    ACTIONS(166), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(164), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [240] = 2,
    ACTIONS(170), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(168), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [280] = 2,
    ACTIONS(174), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(172), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [320] = 2,
    ACTIONS(178), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(176), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [360] = 2,
    ACTIONS(182), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(180), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [400] = 2,
    ACTIONS(186), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(184), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [440] = 2,
    ACTIONS(190), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(188), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [480] = 2,
    ACTIONS(194), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(192), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [520] = 2,
    ACTIONS(198), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(196), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [560] = 2,
    ACTIONS(202), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(200), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [600] = 2,
    ACTIONS(206), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(204), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [640] = 2,
    ACTIONS(210), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(208), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [680] = 2,
    ACTIONS(214), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(212), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [720] = 2,
    ACTIONS(218), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(216), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [760] = 2,
    ACTIONS(222), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(220), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [800] = 2,
    ACTIONS(226), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(224), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [840] = 2,
    ACTIONS(230), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(228), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [880] = 2,
    ACTIONS(234), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(232), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [920] = 2,
    ACTIONS(238), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(236), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [960] = 2,
    ACTIONS(242), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(240), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1000] = 2,
    ACTIONS(246), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(244), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1040] = 2,
    ACTIONS(250), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(248), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1080] = 2,
    ACTIONS(254), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(252), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1120] = 2,
    ACTIONS(258), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(256), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1160] = 2,
    ACTIONS(262), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(260), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1200] = 2,
    ACTIONS(266), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(264), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1240] = 2,
    ACTIONS(270), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(268), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1280] = 2,
    ACTIONS(274), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(272), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1320] = 2,
    ACTIONS(278), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(276), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1360] = 2,
    ACTIONS(282), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(280), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1400] = 2,
    ACTIONS(286), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(284), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1440] = 2,
    ACTIONS(290), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(288), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1480] = 2,
    ACTIONS(294), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(292), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1520] = 2,
    ACTIONS(298), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(296), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1560] = 2,
    ACTIONS(302), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(300), 31,
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
      anon_sym_vars_COLONsecret,
      anon_sym_vars_COLONpre_DASHrequest,
      anon_sym_vars_COLONpost_DASHresponse,
      anon_sym_assert,
      anon_sym_script_COLONpre_DASHrequest,
      anon_sym_script_COLONpost_DASHresponse,
      anon_sym_tests,
      anon_sym_docs,
  [1600] = 3,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 1,
      sym_key,
    STATE(46), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1611] = 3,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 1,
      sym_assert_key,
    STATE(47), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1622] = 3,
    ACTIONS(306), 1,
      sym_key,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(48), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1633] = 3,
    ACTIONS(310), 1,
      sym_assert_key,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1644] = 3,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 1,
      sym_key,
    STATE(48), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1655] = 3,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 1,
      sym_assert_key,
    STATE(49), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1666] = 3,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      sym_array_value,
    STATE(52), 1,
      aux_sym_array_repeat1,
  [1676] = 2,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [1684] = 3,
    ACTIONS(328), 1,
      sym_array_value,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_array_repeat1,
  [1694] = 3,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    ACTIONS(338), 1,
      sym_array_value,
    STATE(53), 1,
      aux_sym_array_repeat1,
  [1704] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_dictionary,
  [1711] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_dictionary,
  [1718] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_dictionary,
  [1725] = 2,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 1,
      sym_rawtext,
  [1732] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_dictionary,
  [1739] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_dictionary,
  [1746] = 1,
    ACTIONS(347), 2,
      anon_sym_RBRACE,
      sym_assert_key,
  [1751] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_textblock,
  [1758] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_textblock,
  [1765] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_textblock,
  [1772] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_textblock,
  [1779] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_dictionary,
  [1786] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_assert_dictionary,
  [1793] = 1,
    ACTIONS(353), 2,
      anon_sym_RBRACE,
      sym_key,
  [1798] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_dictionary,
  [1805] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_dictionary,
  [1812] = 2,
    ACTIONS(355), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_array,
  [1819] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_dictionary,
  [1826] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_dictionary,
  [1833] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_dictionary,
  [1840] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_dictionary,
  [1847] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_textblock,
  [1854] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_textblock,
  [1861] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_dictionary,
  [1868] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_textblock,
  [1875] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_textblock,
  [1882] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_textblock,
  [1889] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_textblock,
  [1896] = 2,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_textblock,
  [1903] = 1,
    ACTIONS(336), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [1908] = 1,
    ACTIONS(357), 1,
      sym_value,
  [1912] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [1916] = 1,
    ACTIONS(361), 1,
      sym_value,
  [1920] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
  [1924] = 1,
    ACTIONS(365), 1,
      anon_sym_COLON,
  [1928] = 1,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
  [1932] = 1,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 40,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 160,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 280,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 400,
  [SMALL_STATE(15)] = 440,
  [SMALL_STATE(16)] = 480,
  [SMALL_STATE(17)] = 520,
  [SMALL_STATE(18)] = 560,
  [SMALL_STATE(19)] = 600,
  [SMALL_STATE(20)] = 640,
  [SMALL_STATE(21)] = 680,
  [SMALL_STATE(22)] = 720,
  [SMALL_STATE(23)] = 760,
  [SMALL_STATE(24)] = 800,
  [SMALL_STATE(25)] = 840,
  [SMALL_STATE(26)] = 880,
  [SMALL_STATE(27)] = 920,
  [SMALL_STATE(28)] = 960,
  [SMALL_STATE(29)] = 1000,
  [SMALL_STATE(30)] = 1040,
  [SMALL_STATE(31)] = 1080,
  [SMALL_STATE(32)] = 1120,
  [SMALL_STATE(33)] = 1160,
  [SMALL_STATE(34)] = 1200,
  [SMALL_STATE(35)] = 1240,
  [SMALL_STATE(36)] = 1280,
  [SMALL_STATE(37)] = 1320,
  [SMALL_STATE(38)] = 1360,
  [SMALL_STATE(39)] = 1400,
  [SMALL_STATE(40)] = 1440,
  [SMALL_STATE(41)] = 1480,
  [SMALL_STATE(42)] = 1520,
  [SMALL_STATE(43)] = 1560,
  [SMALL_STATE(44)] = 1600,
  [SMALL_STATE(45)] = 1611,
  [SMALL_STATE(46)] = 1622,
  [SMALL_STATE(47)] = 1633,
  [SMALL_STATE(48)] = 1644,
  [SMALL_STATE(49)] = 1655,
  [SMALL_STATE(50)] = 1666,
  [SMALL_STATE(51)] = 1676,
  [SMALL_STATE(52)] = 1684,
  [SMALL_STATE(53)] = 1694,
  [SMALL_STATE(54)] = 1704,
  [SMALL_STATE(55)] = 1711,
  [SMALL_STATE(56)] = 1718,
  [SMALL_STATE(57)] = 1725,
  [SMALL_STATE(58)] = 1732,
  [SMALL_STATE(59)] = 1739,
  [SMALL_STATE(60)] = 1746,
  [SMALL_STATE(61)] = 1751,
  [SMALL_STATE(62)] = 1758,
  [SMALL_STATE(63)] = 1765,
  [SMALL_STATE(64)] = 1772,
  [SMALL_STATE(65)] = 1779,
  [SMALL_STATE(66)] = 1786,
  [SMALL_STATE(67)] = 1793,
  [SMALL_STATE(68)] = 1798,
  [SMALL_STATE(69)] = 1805,
  [SMALL_STATE(70)] = 1812,
  [SMALL_STATE(71)] = 1819,
  [SMALL_STATE(72)] = 1826,
  [SMALL_STATE(73)] = 1833,
  [SMALL_STATE(74)] = 1840,
  [SMALL_STATE(75)] = 1847,
  [SMALL_STATE(76)] = 1854,
  [SMALL_STATE(77)] = 1861,
  [SMALL_STATE(78)] = 1868,
  [SMALL_STATE(79)] = 1875,
  [SMALL_STATE(80)] = 1882,
  [SMALL_STATE(81)] = 1889,
  [SMALL_STATE(82)] = 1896,
  [SMALL_STATE(83)] = 1903,
  [SMALL_STATE(84)] = 1908,
  [SMALL_STATE(85)] = 1912,
  [SMALL_STATE(86)] = 1916,
  [SMALL_STATE(87)] = 1920,
  [SMALL_STATE(88)] = 1924,
  [SMALL_STATE(89)] = 1928,
  [SMALL_STATE(90)] = 1932,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(58),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(89),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(89),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(65),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(54),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(56),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(69),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(71),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(77),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(79),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(82),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(81),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(80),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(78),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(76),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(75),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(74),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(55),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(72),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(70),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(73),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(68),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(66),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(64),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(63),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(62),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(61),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformmultipart, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformmultipart, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformurlencoded, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformurlencoded, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphqlvars, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphqlvars, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphql, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphql, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodysparql, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodysparql, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyxml, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyxml, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authdigest, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authdigest, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodytext, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodytext, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptres, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptres, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptreq, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptreq, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsres, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsres, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsreq, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsreq, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyforms, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyforms, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsandassert, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsandassert, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_secret, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_secret, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyjson, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyjson, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authawsv4, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authawsv4, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbasic, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbasic, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbearer, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbearer, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(88),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2), SHIFT_REPEAT(85),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(51),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary_pair, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_pair, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1),
  [369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
