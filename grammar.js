/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bruno",
  extras: _ => [/\s+|(\r?\n)/],
  externals: $ => [$.rawtext],
  rules: {
    source_file: $ =>
      repeat(
        choice(
          field("meta", $.meta),
          field("http", $.http),
          field("query", $.query),
          field("headers", $.headers),
          field("auths", $.auths),
          field("bodies", $.bodies),
          field("varsandassert", $.varsandassert),
          field("script", $.script),
          field("tests", $.tests),
          field("docs", $.docs),
        ),
      ),
    meta: $ =>
      seq(alias("meta", $.keyword), $.dictionary),
    http: $ => seq($.http_verb, $.dictionary),
    http_verb: _ =>
      choice(
        "get",
        "post",
        "put",
        "delete",
        "patch",
        "options",
        "head",
        "connect",
        "trace",
      ),
    query: $ =>
      seq(
        alias("query", $.keyword),
        $.dictionary,
      ),
    headers: $ =>
      seq(
        alias("headers", $.keyword),
        $.dictionary,
      ),
    auths: $ =>
      choice(
        $.authawsv4,
        $.authbasic,
        $.authbearer,
        $.authdigest,
      ),
    authawsv4: $ =>
      seq(
        alias("auth:awsv4", $.keyword),
        $.dictionary,
      ),
    authbasic: $ =>
      seq(
        alias("auth:basic", $.keyword),
        $.dictionary,
      ),
    authbearer: $ =>
      seq(
        alias("auth:bearer", $.keyword),
        $.dictionary,
      ),
    authdigest: $ =>
      seq(
        alias("auth:digest", $.keyword),
        $.dictionary,
      ),
    bodies: $ =>
      choice(
        $.bodyjson,
        $.bodytext,
        $.bodyxml,
        $.bodysparql,
        $.bodygraphql,
        $.bodygraphqlvars,
        $.bodyforms,
        $.body,
      ),
    bodyforms: $ =>
      choice(
        $.bodyformurlencoded,
        $.bodymultipart,
      ),
    body: $ =>
      seq(alias("body", $.keyword), $.textblock),
    bodyjson: $ =>
      seq(
        alias("body:json", $.keyword),
        $.textblock,
      ),
    bodytext: $ =>
      seq(
        alias("body:text", $.keyword),
        $.textblock,
      ),
    bodyxml: $ =>
      seq(
        alias("body:xml", $.keyword),
        $.textblock,
      ),
    bodysparql: $ =>
      seq(
        alias("body:sparql", $.keyword),
        $.textblock,
      ),
    bodygraphql: $ =>
      seq(
        alias("body:graphql", $.keyword),
        $.textblock,
      ),
    bodygraphqlvars: $ =>
      seq(
        alias("body:graphql:vars", $.keyword),
        $.textblock,
      ),
    bodyformurlencoded: $ =>
      seq(
        alias("body:form-urlencoded", $.keyword),
        $.dictionary,
      ),
    bodymultipart: $ =>
      seq(
        alias("body:multipart-form", $.keyword),
        $.dictionary,
      ),
    varsandassert: $ =>
      choice($.varsreq, $.varsres, $.assert),
    varsreq: $ =>
      seq(
        alias("vars:pre-request", $.keyword),
        $.dictionary,
      ),
    varsres: $ =>
      seq(
        alias("vars:post-response", $.keyword),
        $.dictionary,
      ),
    assert: $ =>
      seq(
        alias("assert", $.keyword),
        $.assert_dictionary,
      ),
    script: $ => choice($.scriptreq, $.scriptres),
    scriptreq: $ =>
      seq(
        alias("script:pre-request", $.keyword),
        $.textblock,
      ),
    scriptres: $ =>
      seq(
        alias("script:post-response", $.keyword),
        $.textblock,
      ),
    tests: $ =>
      seq(alias("tests", $.keyword), $.textblock),
    docs: $ =>
      seq(alias("docs", $.keyword), $.textblock),
    textblock: $ => seq("{", optional($.rawtext), "}"),
    rawtext: $ => repeat1($.textline),
    textline: _ => /\r?\n[^}].*/,
    dictionary: $ =>
      seq("{", repeat($.dictionary_pair), "}"),
    dictionary_pair: $ =>
      seq($.key, $.operator, $.value),
    assert_dictionary: $ =>
      seq(
        "{",
        repeat($.assert_dictionary_pair),
        "}",
      ),
    assert_dictionary_pair: $ =>
      seq($.assert_key, $.operator, $.value),
    assert_key: _ => /[^\r\n:]+/,
    key: _ => /[^\s\r\n:]+/,
    operator: _ => ":",
    value: _ => /[^\s]+/,
  },
});
