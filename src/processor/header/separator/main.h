// HTTP old generation (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

// This file was generated, do not edit manually.

// It may not be possible to run generator while cross compiling.
// So generated file should be distributed with its template.

#if !defined(HOG_PROCESSOR_HEADER_SEPARATOR_H)
#define HOG_PROCESSOR_HEADER_SEPARATOR_H

#include <stdbool.h>

#include "../../../common.h"
#include "../../../log.h"

extern const hog_processor_state_fast_t HOG_PROCESSOR_HEADER_SEPARATOR_INITIAL_STATE;

extern const hog_processor_state_fast_t HOG_PROCESSOR_HEADER_SEPARATOR_MIN_LENGTH;
extern const hog_processor_state_fast_t HOG_PROCESSOR_HEADER_SEPARATOR_MAX_LENGTH;

extern const bool HOG_PROCESSOR_HEADER_SEPARATOR_ALLOWED_BYTES[];

inline hog_processor_state_fast_t hog_processor_header_separator_get_next_state(
  hog_processor_state_fast_t state, hog_symbol_fast_t byte)
{
  if (state == HOG_PROCESSOR_HEADER_SEPARATOR_MAX_LENGTH) {
    HOG_LOG_ERROR("header_separator processor exceeded max length");
    return HOG_PROCESSOR_HEADER_SEPARATOR_INITIAL_STATE;
  }

  if (!HOG_PROCESSOR_HEADER_SEPARATOR_ALLOWED_BYTES[byte]) {
    HOG_LOG_ERROR("header_separator processor received invalid byte: %u", byte);
    return HOG_PROCESSOR_HEADER_SEPARATOR_INITIAL_STATE;
  }

  return state + 1;
}

inline bool hog_processor_header_separator_is_valid(hog_processor_state_fast_t state)
{
  return state >= HOG_PROCESSOR_HEADER_SEPARATOR_MIN_LENGTH;
}

#endif // HOG_PROCESSOR_HEADER_SEPARATOR_H