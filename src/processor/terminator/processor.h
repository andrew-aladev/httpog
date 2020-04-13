// HTTP old generation (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

// This file was generated, do not edit manually.

// It may not be possible to run generator while cross compiling.
// So generated file should be shipped with its template.

#if !defined(HOG_PROCESSOR_TERMINATOR_H)
#define HOG_PROCESSOR_TERMINATOR_H

#include <stdbool.h>
#include <stdlib.h>

#include "../../common.h"
#include "../../log.h"

typedef uint8_t hog_processor_terminator_state_t;

extern const hog_processor_state_fast_t HOG_PROCESSOR_TERMINATOR_INITIAL_STATE;

extern const char*  HOG_PROCESSOR_TERMINATOR_CONSTANTS[];
extern const size_t HOG_PROCESSOR_TERMINATOR_CONSTANTS_LENGTH;
extern const size_t HOG_PROCESSOR_TERMINATOR_ALPHABET_LENGTH;
extern const size_t HOG_PROCESSOR_TERMINATOR_ALPHABET_MAX_LENGTH;

extern const hog_symbol_fast_t HOG_PROCESSOR_TERMINATOR_UNDEFINED_SYMBOL;
extern const hog_symbol_t      HOG_PROCESSOR_TERMINATOR_SYMBOL_BY_BYTES[];

extern const hog_processor_terminator_state_t HOG_PROCESSOR_TERMINATOR_NEXT_STATE_BY_LAST_SYMBOLS[];

inline hog_processor_state_fast_t hog_processor_terminator_get_next_state(
  hog_processor_state_fast_t state, hog_symbol_fast_t byte)
{
  hog_symbol_fast_t symbol = HOG_PROCESSOR_TERMINATOR_SYMBOL_BY_BYTES[byte];
  if (HOG_PROCESSOR_TERMINATOR_ALPHABET_LENGTH != HOG_PROCESSOR_TERMINATOR_ALPHABET_MAX_LENGTH && symbol == HOG_PROCESSOR_TERMINATOR_UNDEFINED_SYMBOL) {
    HOG_LOG_ERROR("terminator processor received invalid byte: %u", byte);
    return HOG_PROCESSOR_TERMINATOR_INITIAL_STATE;
  }

  return HOG_PROCESSOR_TERMINATOR_NEXT_STATE_BY_LAST_SYMBOLS[state * HOG_PROCESSOR_TERMINATOR_ALPHABET_LENGTH + symbol];
}

inline bool hog_processor_terminator_is_finished(hog_processor_state_fast_t state)
{
  return state < HOG_PROCESSOR_TERMINATOR_CONSTANTS_LENGTH;
}

inline const char* hog_processor_terminator_get_data(hog_processor_state_fast_t state)
{
  if (!hog_processor_terminator_is_finished(state)) {
    return NULL;
  }

  return HOG_PROCESSOR_TERMINATOR_CONSTANTS[state];
}

#endif // HOG_PROCESSOR_TERMINATOR_H
