#include <tree_sitter/parser.h>

enum TokenType {
	RAW_TEXT,
};

void *tree_sitter_bruno_external_scanner_create() { return NULL; }
void tree_sitter_bruno_external_scanner_destroy(void *p) {}
void tree_sitter_bruno_external_scanner_reset(void *p) {}
unsigned tree_sitter_bruno_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_bruno_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

bool tree_sitter_bruno_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
	if(valid_symbols[RAW_TEXT]) {
		lexer->result_symbol = RAW_TEXT;
		for (bool has_content = false;; has_content = true) {
			lexer->mark_end(lexer);

			switch(lexer->lookahead) {
				case '\n':
					advance(lexer);
					if(lexer->lookahead == '}') return has_content;
					break;
				case '\0':
					return false;
				default:
					advance(lexer);
			}
		}
	}
}
