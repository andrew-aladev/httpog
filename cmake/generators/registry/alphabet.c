// HTTP old generation (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

#include "alphabet.h"

#include <stdlib.h>

#include "print.h"

#define ALPHABET_MAX_LENGTH UINT8_MAX + 1

void print_alphabet(const xmlNodeSetPtr nodes)
{
  size_t nodes_length = nodes->nodeNr;

  for (size_t index = 0; index < nodes_length; index++) {
    if (index == 0) {
      PRINT(CONSTANT_PREFIX);
    }
    else {
      PRINT(CONSTANT_TERMINATOR);
      PRINT(CONSTANT_PREFIX);
    }

    const xmlNodePtr node = nodes->nodeTab[index];
    const char*      text = (const char*)xmlNodeGetContent(node);

    printf(CONSTANT_TEMPLATE, text);
  }
}
