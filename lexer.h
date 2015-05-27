#ifndef wren_lexer_h
#define wren_lexer_h

#include <stdio.h>
#include <string.h>

#include "token.h"

Token* tokenize(Buffer* source);

#endif
