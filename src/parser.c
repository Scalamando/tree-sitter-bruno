#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 93
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
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
  anon_sym_auth_COLONoauth2 = 17,
  anon_sym_body = 18,
  anon_sym_body_COLONjson = 19,
  anon_sym_body_COLONtext = 20,
  anon_sym_body_COLONxml = 21,
  anon_sym_body_COLONsparql = 22,
  anon_sym_body_COLONgraphql = 23,
  anon_sym_body_COLONgraphql_COLONvars = 24,
  anon_sym_body_COLONform_DASHurlencoded = 25,
  anon_sym_body_COLONmultipart_DASHform = 26,
  anon_sym_vars = 27,
  anon_sym_vars_COLONsecret = 28,
  anon_sym_vars_COLONpre_DASHrequest = 29,
  anon_sym_vars_COLONpost_DASHresponse = 30,
  anon_sym_assert = 31,
  anon_sym_script_COLONpre_DASHrequest = 32,
  anon_sym_script_COLONpost_DASHresponse = 33,
  anon_sym_tests = 34,
  anon_sym_docs = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_LBRACK = 38,
  anon_sym_COMMA = 39,
  anon_sym_RBRACK = 40,
  sym_array_value = 41,
  anon_sym_COLON = 42,
  sym_assert_key = 43,
  sym_key = 44,
  sym_value = 45,
  sym_rawtext = 46,
  sym_source_file = 47,
  sym_meta = 48,
  sym_http = 49,
  sym_http_verb = 50,
  sym_query = 51,
  sym_headers = 52,
  sym_auths = 53,
  sym_authawsv4 = 54,
  sym_authbasic = 55,
  sym_authbearer = 56,
  sym_authdigest = 57,
  sym_authoauth2 = 58,
  sym_bodies = 59,
  sym_bodyforms = 60,
  sym_body = 61,
  sym_bodyjson = 62,
  sym_bodytext = 63,
  sym_bodyxml = 64,
  sym_bodysparql = 65,
  sym_bodygraphql = 66,
  sym_bodygraphqlvars = 67,
  sym_bodyformurlencoded = 68,
  sym_bodyformmultipart = 69,
  sym_varsandassert = 70,
  sym_vars = 71,
  sym_vars_secret = 72,
  sym_varsreq = 73,
  sym_varsres = 74,
  sym_assert = 75,
  sym_script = 76,
  sym_scriptreq = 77,
  sym_scriptres = 78,
  sym_tests = 79,
  sym_docs = 80,
  sym_textblock = 81,
  sym_array = 82,
  sym_dictionary = 83,
  sym_dictionary_pair = 84,
  sym_assert_dictionary = 85,
  sym_assert_dictionary_pair = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_array_repeat1 = 88,
  aux_sym_dictionary_repeat1 = 89,
  aux_sym_assert_dictionary_repeat1 = 90,
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
  [anon_sym_auth_COLONoauth2] = "keyword",
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
  [sym_authoauth2] = "authoauth2",
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
  [anon_sym_auth_COLONoauth2] = anon_sym_meta,
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
  [sym_authoauth2] = sym_authoauth2,
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
  [anon_sym_auth_COLONoauth2] = {
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
  [sym_authoauth2] = {
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

enum ts_field_identifiers {
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
  [91] = 91,
  [92] = 92,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(195);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == ':') ADVANCE(239);
      if (lookahead == '[') ADVANCE(235);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == 'a') ADVANCE(139);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(48);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'q') ADVANCE(184);
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '}') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(242);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') SKIP(2)
      if (lookahead == '}') ADVANCE(234);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(241);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == ',') ADVANCE(236);
      if (lookahead == ']') ADVANCE(237);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(238);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') SKIP(4)
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0) ADVANCE(244);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(185);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(131);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(132);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(138);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(212);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(115);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(220);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(127);
      if (lookahead == 'j') ADVANCE(157);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'x') ADVANCE(88);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(201);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(216);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(217);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(218);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(6);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(105);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 116:
      if (lookahead == 'q') ADVANCE(81);
      END_STATE();
    case 117:
      if (lookahead == 'q') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == 'q') ADVANCE(187);
      END_STATE();
    case 119:
      if (lookahead == 'q') ADVANCE(188);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(230);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(207);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 174:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 176:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 179:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 182:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 183:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 184:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 185:
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 186:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 187:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 188:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 189:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 190:
      if (lookahead == 'v') ADVANCE(27);
      END_STATE();
    case 191:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 192:
      if (lookahead == 'x') ADVANCE(168);
      END_STATE();
    case 193:
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 194:
      if (lookahead == 'y') ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_get);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_post);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_put);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_delete);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_patch);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_head);
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_connect);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_headers);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_auth_COLONawsv4);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_auth_COLONbasic);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_auth_COLONbearer);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_auth_COLONdigest);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_auth_COLONoauth2);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_body);
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_body_COLONjson);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_body_COLONtext);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_body_COLONxml);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_body_COLONsparql);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql);
      if (lookahead == ':') ADVANCE(190);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_body_COLONgraphql_COLONvars);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_body_COLONform_DASHurlencoded);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_body_COLONmultipart_DASHform);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_vars);
      if (lookahead == ':') ADVANCE(107);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_vars_COLONsecret);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_vars_COLONpre_DASHrequest);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_vars_COLONpost_DASHresponse);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_script_COLONpre_DASHrequest);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_script_COLONpost_DASHresponse);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_tests);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_docs);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(242);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_array_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead == '}') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != ':') ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_assert_key);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_value);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(244);
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
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
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
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
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
    [anon_sym_auth_COLONoauth2] = ACTIONS(1),
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
    [sym_source_file] = STATE(89),
    [sym_meta] = STATE(30),
    [sym_http] = STATE(30),
    [sym_http_verb] = STATE(61),
    [sym_query] = STATE(30),
    [sym_headers] = STATE(30),
    [sym_auths] = STATE(30),
    [sym_authawsv4] = STATE(32),
    [sym_authbasic] = STATE(32),
    [sym_authbearer] = STATE(32),
    [sym_authdigest] = STATE(32),
    [sym_authoauth2] = STATE(32),
    [sym_bodies] = STATE(30),
    [sym_bodyforms] = STATE(19),
    [sym_body] = STATE(19),
    [sym_bodyjson] = STATE(19),
    [sym_bodytext] = STATE(19),
    [sym_bodyxml] = STATE(19),
    [sym_bodysparql] = STATE(19),
    [sym_bodygraphql] = STATE(19),
    [sym_bodygraphqlvars] = STATE(19),
    [sym_bodyformurlencoded] = STATE(34),
    [sym_bodyformmultipart] = STATE(34),
    [sym_varsandassert] = STATE(30),
    [sym_vars] = STATE(35),
    [sym_vars_secret] = STATE(35),
    [sym_varsreq] = STATE(35),
    [sym_varsres] = STATE(35),
    [sym_assert] = STATE(35),
    [sym_script] = STATE(30),
    [sym_scriptreq] = STATE(36),
    [sym_scriptres] = STATE(36),
    [sym_tests] = STATE(30),
    [sym_docs] = STATE(30),
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
    [anon_sym_auth_COLONoauth2] = ACTIONS(23),
    [anon_sym_body] = ACTIONS(25),
    [anon_sym_body_COLONjson] = ACTIONS(27),
    [anon_sym_body_COLONtext] = ACTIONS(29),
    [anon_sym_body_COLONxml] = ACTIONS(31),
    [anon_sym_body_COLONsparql] = ACTIONS(33),
    [anon_sym_body_COLONgraphql] = ACTIONS(35),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(37),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(39),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(41),
    [anon_sym_vars] = ACTIONS(43),
    [anon_sym_vars_COLONsecret] = ACTIONS(45),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(47),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(49),
    [anon_sym_assert] = ACTIONS(51),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(53),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(55),
    [anon_sym_tests] = ACTIONS(57),
    [anon_sym_docs] = ACTIONS(59),
  },
  [2] = {
    [sym_meta] = STATE(30),
    [sym_http] = STATE(30),
    [sym_http_verb] = STATE(61),
    [sym_query] = STATE(30),
    [sym_headers] = STATE(30),
    [sym_auths] = STATE(30),
    [sym_authawsv4] = STATE(32),
    [sym_authbasic] = STATE(32),
    [sym_authbearer] = STATE(32),
    [sym_authdigest] = STATE(32),
    [sym_authoauth2] = STATE(32),
    [sym_bodies] = STATE(30),
    [sym_bodyforms] = STATE(19),
    [sym_body] = STATE(19),
    [sym_bodyjson] = STATE(19),
    [sym_bodytext] = STATE(19),
    [sym_bodyxml] = STATE(19),
    [sym_bodysparql] = STATE(19),
    [sym_bodygraphql] = STATE(19),
    [sym_bodygraphqlvars] = STATE(19),
    [sym_bodyformurlencoded] = STATE(34),
    [sym_bodyformmultipart] = STATE(34),
    [sym_varsandassert] = STATE(30),
    [sym_vars] = STATE(35),
    [sym_vars_secret] = STATE(35),
    [sym_varsreq] = STATE(35),
    [sym_varsres] = STATE(35),
    [sym_assert] = STATE(35),
    [sym_script] = STATE(30),
    [sym_scriptreq] = STATE(36),
    [sym_scriptres] = STATE(36),
    [sym_tests] = STATE(30),
    [sym_docs] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(61),
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
    [anon_sym_auth_COLONoauth2] = ACTIONS(23),
    [anon_sym_body] = ACTIONS(25),
    [anon_sym_body_COLONjson] = ACTIONS(27),
    [anon_sym_body_COLONtext] = ACTIONS(29),
    [anon_sym_body_COLONxml] = ACTIONS(31),
    [anon_sym_body_COLONsparql] = ACTIONS(33),
    [anon_sym_body_COLONgraphql] = ACTIONS(35),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(37),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(39),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(41),
    [anon_sym_vars] = ACTIONS(43),
    [anon_sym_vars_COLONsecret] = ACTIONS(45),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(47),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(49),
    [anon_sym_assert] = ACTIONS(51),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(53),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(55),
    [anon_sym_tests] = ACTIONS(57),
    [anon_sym_docs] = ACTIONS(59),
  },
  [3] = {
    [sym_meta] = STATE(30),
    [sym_http] = STATE(30),
    [sym_http_verb] = STATE(61),
    [sym_query] = STATE(30),
    [sym_headers] = STATE(30),
    [sym_auths] = STATE(30),
    [sym_authawsv4] = STATE(32),
    [sym_authbasic] = STATE(32),
    [sym_authbearer] = STATE(32),
    [sym_authdigest] = STATE(32),
    [sym_authoauth2] = STATE(32),
    [sym_bodies] = STATE(30),
    [sym_bodyforms] = STATE(19),
    [sym_body] = STATE(19),
    [sym_bodyjson] = STATE(19),
    [sym_bodytext] = STATE(19),
    [sym_bodyxml] = STATE(19),
    [sym_bodysparql] = STATE(19),
    [sym_bodygraphql] = STATE(19),
    [sym_bodygraphqlvars] = STATE(19),
    [sym_bodyformurlencoded] = STATE(34),
    [sym_bodyformmultipart] = STATE(34),
    [sym_varsandassert] = STATE(30),
    [sym_vars] = STATE(35),
    [sym_vars_secret] = STATE(35),
    [sym_varsreq] = STATE(35),
    [sym_varsres] = STATE(35),
    [sym_assert] = STATE(35),
    [sym_script] = STATE(30),
    [sym_scriptreq] = STATE(36),
    [sym_scriptres] = STATE(36),
    [sym_tests] = STATE(30),
    [sym_docs] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_meta] = ACTIONS(65),
    [anon_sym_get] = ACTIONS(68),
    [anon_sym_post] = ACTIONS(68),
    [anon_sym_put] = ACTIONS(68),
    [anon_sym_delete] = ACTIONS(68),
    [anon_sym_patch] = ACTIONS(68),
    [anon_sym_options] = ACTIONS(68),
    [anon_sym_head] = ACTIONS(71),
    [anon_sym_connect] = ACTIONS(68),
    [anon_sym_trace] = ACTIONS(68),
    [anon_sym_query] = ACTIONS(74),
    [anon_sym_headers] = ACTIONS(77),
    [anon_sym_auth_COLONawsv4] = ACTIONS(80),
    [anon_sym_auth_COLONbasic] = ACTIONS(83),
    [anon_sym_auth_COLONbearer] = ACTIONS(86),
    [anon_sym_auth_COLONdigest] = ACTIONS(89),
    [anon_sym_auth_COLONoauth2] = ACTIONS(92),
    [anon_sym_body] = ACTIONS(95),
    [anon_sym_body_COLONjson] = ACTIONS(98),
    [anon_sym_body_COLONtext] = ACTIONS(101),
    [anon_sym_body_COLONxml] = ACTIONS(104),
    [anon_sym_body_COLONsparql] = ACTIONS(107),
    [anon_sym_body_COLONgraphql] = ACTIONS(110),
    [anon_sym_body_COLONgraphql_COLONvars] = ACTIONS(113),
    [anon_sym_body_COLONform_DASHurlencoded] = ACTIONS(116),
    [anon_sym_body_COLONmultipart_DASHform] = ACTIONS(119),
    [anon_sym_vars] = ACTIONS(122),
    [anon_sym_vars_COLONsecret] = ACTIONS(125),
    [anon_sym_vars_COLONpre_DASHrequest] = ACTIONS(128),
    [anon_sym_vars_COLONpost_DASHresponse] = ACTIONS(131),
    [anon_sym_assert] = ACTIONS(134),
    [anon_sym_script_COLONpre_DASHrequest] = ACTIONS(137),
    [anon_sym_script_COLONpost_DASHresponse] = ACTIONS(140),
    [anon_sym_tests] = ACTIONS(143),
    [anon_sym_docs] = ACTIONS(146),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(151), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(149), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [41] = 2,
    ACTIONS(155), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(153), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [82] = 2,
    ACTIONS(159), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(157), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [123] = 2,
    ACTIONS(163), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(161), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [164] = 2,
    ACTIONS(167), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(165), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [205] = 2,
    ACTIONS(171), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(169), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [246] = 2,
    ACTIONS(175), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(173), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [287] = 2,
    ACTIONS(179), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(177), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [328] = 2,
    ACTIONS(183), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(181), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [369] = 2,
    ACTIONS(187), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(185), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [410] = 2,
    ACTIONS(191), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(189), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [451] = 2,
    ACTIONS(195), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(193), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [492] = 2,
    ACTIONS(199), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(197), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [533] = 2,
    ACTIONS(203), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(201), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [574] = 2,
    ACTIONS(207), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(205), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [615] = 2,
    ACTIONS(211), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(209), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [656] = 2,
    ACTIONS(215), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(213), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [697] = 2,
    ACTIONS(219), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(217), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [738] = 2,
    ACTIONS(223), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(221), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [779] = 2,
    ACTIONS(227), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(225), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [820] = 2,
    ACTIONS(231), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(229), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [861] = 2,
    ACTIONS(235), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(233), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [902] = 2,
    ACTIONS(239), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(237), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [943] = 2,
    ACTIONS(243), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(241), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [984] = 2,
    ACTIONS(247), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(245), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1025] = 2,
    ACTIONS(251), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(249), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1066] = 2,
    ACTIONS(255), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(253), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1107] = 2,
    ACTIONS(259), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(257), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1148] = 2,
    ACTIONS(263), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(261), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1189] = 2,
    ACTIONS(267), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(265), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1230] = 2,
    ACTIONS(271), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(269), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1271] = 2,
    ACTIONS(275), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(273), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1312] = 2,
    ACTIONS(279), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(277), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1353] = 2,
    ACTIONS(283), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(281), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1394] = 2,
    ACTIONS(287), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(285), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1435] = 2,
    ACTIONS(291), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(289), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1476] = 2,
    ACTIONS(295), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(293), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1517] = 2,
    ACTIONS(299), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(297), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1558] = 2,
    ACTIONS(303), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(301), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1599] = 2,
    ACTIONS(307), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(305), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1640] = 2,
    ACTIONS(311), 4,
      anon_sym_head,
      anon_sym_body,
      anon_sym_body_COLONgraphql,
      anon_sym_vars,
    ACTIONS(309), 32,
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
      anon_sym_auth_COLONoauth2,
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
  [1681] = 3,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      sym_key,
    STATE(47), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1692] = 3,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    ACTIONS(319), 1,
      sym_assert_key,
    STATE(48), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1703] = 3,
    ACTIONS(315), 1,
      sym_key,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1714] = 3,
    ACTIONS(319), 1,
      sym_assert_key,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(50), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1725] = 3,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      sym_key,
    STATE(49), 2,
      sym_dictionary_pair,
      aux_sym_dictionary_repeat1,
  [1736] = 3,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 1,
      sym_assert_key,
    STATE(50), 2,
      sym_assert_dictionary_pair,
      aux_sym_assert_dictionary_repeat1,
  [1747] = 3,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    ACTIONS(337), 1,
      sym_array_value,
    STATE(53), 1,
      aux_sym_array_repeat1,
  [1757] = 2,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    ACTIONS(341), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [1765] = 3,
    ACTIONS(337), 1,
      sym_array_value,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_array_repeat1,
  [1775] = 3,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    ACTIONS(347), 1,
      sym_array_value,
    STATE(54), 1,
      aux_sym_array_repeat1,
  [1785] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_textblock,
  [1792] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_dictionary,
  [1799] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_dictionary,
  [1806] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_dictionary,
  [1813] = 2,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 1,
      sym_rawtext,
  [1820] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_dictionary,
  [1827] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(4), 1,
      sym_dictionary,
  [1834] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_textblock,
  [1841] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_textblock,
  [1848] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_textblock,
  [1855] = 2,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_assert_dictionary,
  [1862] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_dictionary,
  [1869] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_dictionary,
  [1876] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_dictionary,
  [1883] = 1,
    ACTIONS(360), 2,
      anon_sym_RBRACE,
      sym_assert_key,
  [1888] = 2,
    ACTIONS(362), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_array,
  [1895] = 1,
    ACTIONS(364), 2,
      anon_sym_RBRACE,
      sym_key,
  [1900] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_dictionary,
  [1907] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_dictionary,
  [1914] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_dictionary,
  [1921] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_dictionary,
  [1928] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_textblock,
  [1935] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_textblock,
  [1942] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_textblock,
  [1949] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_dictionary,
  [1956] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_textblock,
  [1963] = 2,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_dictionary,
  [1970] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_textblock,
  [1977] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_textblock,
  [1984] = 2,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_textblock,
  [1991] = 1,
    ACTIONS(345), 2,
      anon_sym_RBRACK,
      sym_array_value,
  [1996] = 1,
    ACTIONS(366), 1,
      sym_value,
  [2000] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [2004] = 1,
    ACTIONS(370), 1,
      sym_value,
  [2008] = 1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
  [2012] = 1,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
  [2016] = 1,
    ACTIONS(376), 1,
      anon_sym_COLON,
  [2020] = 1,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 41,
  [SMALL_STATE(6)] = 82,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 287,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 410,
  [SMALL_STATE(15)] = 451,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 533,
  [SMALL_STATE(18)] = 574,
  [SMALL_STATE(19)] = 615,
  [SMALL_STATE(20)] = 656,
  [SMALL_STATE(21)] = 697,
  [SMALL_STATE(22)] = 738,
  [SMALL_STATE(23)] = 779,
  [SMALL_STATE(24)] = 820,
  [SMALL_STATE(25)] = 861,
  [SMALL_STATE(26)] = 902,
  [SMALL_STATE(27)] = 943,
  [SMALL_STATE(28)] = 984,
  [SMALL_STATE(29)] = 1025,
  [SMALL_STATE(30)] = 1066,
  [SMALL_STATE(31)] = 1107,
  [SMALL_STATE(32)] = 1148,
  [SMALL_STATE(33)] = 1189,
  [SMALL_STATE(34)] = 1230,
  [SMALL_STATE(35)] = 1271,
  [SMALL_STATE(36)] = 1312,
  [SMALL_STATE(37)] = 1353,
  [SMALL_STATE(38)] = 1394,
  [SMALL_STATE(39)] = 1435,
  [SMALL_STATE(40)] = 1476,
  [SMALL_STATE(41)] = 1517,
  [SMALL_STATE(42)] = 1558,
  [SMALL_STATE(43)] = 1599,
  [SMALL_STATE(44)] = 1640,
  [SMALL_STATE(45)] = 1681,
  [SMALL_STATE(46)] = 1692,
  [SMALL_STATE(47)] = 1703,
  [SMALL_STATE(48)] = 1714,
  [SMALL_STATE(49)] = 1725,
  [SMALL_STATE(50)] = 1736,
  [SMALL_STATE(51)] = 1747,
  [SMALL_STATE(52)] = 1757,
  [SMALL_STATE(53)] = 1765,
  [SMALL_STATE(54)] = 1775,
  [SMALL_STATE(55)] = 1785,
  [SMALL_STATE(56)] = 1792,
  [SMALL_STATE(57)] = 1799,
  [SMALL_STATE(58)] = 1806,
  [SMALL_STATE(59)] = 1813,
  [SMALL_STATE(60)] = 1820,
  [SMALL_STATE(61)] = 1827,
  [SMALL_STATE(62)] = 1834,
  [SMALL_STATE(63)] = 1841,
  [SMALL_STATE(64)] = 1848,
  [SMALL_STATE(65)] = 1855,
  [SMALL_STATE(66)] = 1862,
  [SMALL_STATE(67)] = 1869,
  [SMALL_STATE(68)] = 1876,
  [SMALL_STATE(69)] = 1883,
  [SMALL_STATE(70)] = 1888,
  [SMALL_STATE(71)] = 1895,
  [SMALL_STATE(72)] = 1900,
  [SMALL_STATE(73)] = 1907,
  [SMALL_STATE(74)] = 1914,
  [SMALL_STATE(75)] = 1921,
  [SMALL_STATE(76)] = 1928,
  [SMALL_STATE(77)] = 1935,
  [SMALL_STATE(78)] = 1942,
  [SMALL_STATE(79)] = 1949,
  [SMALL_STATE(80)] = 1956,
  [SMALL_STATE(81)] = 1963,
  [SMALL_STATE(82)] = 1970,
  [SMALL_STATE(83)] = 1977,
  [SMALL_STATE(84)] = 1984,
  [SMALL_STATE(85)] = 1991,
  [SMALL_STATE(86)] = 1996,
  [SMALL_STATE(87)] = 2000,
  [SMALL_STATE(88)] = 2004,
  [SMALL_STATE(89)] = 2008,
  [SMALL_STATE(90)] = 2012,
  [SMALL_STATE(91)] = 2016,
  [SMALL_STATE(92)] = 2020,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(60),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(92),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(92),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(68),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(57),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(58),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(73),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(74),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(79),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(81),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(84),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(83),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(82),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(80),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(78),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(77),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(76),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(75),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(56),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(72),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(70),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(67),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(66),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(65),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(64),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(63),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(55),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 3), SHIFT_REPEAT(62),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_http, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodytext, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodytext, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformmultipart, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformmultipart, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyformurlencoded, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyformurlencoded, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphqlvars, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphqlvars, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodygraphql, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodygraphql, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_dictionary, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodysparql, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodysparql, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyxml, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyxml, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_textblock, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_textblock, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodies, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodies, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docs, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docs, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tests, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tests, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptres, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptres, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptreq, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptreq, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authoauth2, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authoauth2, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsres, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsres, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsreq, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsreq, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_auths, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_auths, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyjson, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyjson, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bodyforms, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bodyforms, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varsandassert, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varsandassert, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vars_secret, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vars_secret, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authdigest, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authdigest, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headers, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headers, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authawsv4, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authawsv4, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbasic, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbasic, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_authbearer, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_authbearer, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_dictionary_repeat1, 2), SHIFT_REPEAT(91),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assert_dictionary_repeat1, 2), SHIFT_REPEAT(87),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(52),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_dictionary_pair, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [364] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary_pair, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [372] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_verb, 1),
};

enum ts_external_scanner_symbol_identifiers {
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

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bruno_external_scanner_create(void);
void tree_sitter_bruno_external_scanner_destroy(void *);
bool tree_sitter_bruno_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bruno_external_scanner_serialize(void *, char *);
void tree_sitter_bruno_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TS_PUBLIC
#undef TS_PUBLIC
#endif

#ifdef _WIN32
#define TS_PUBLIC
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bruno() {
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
