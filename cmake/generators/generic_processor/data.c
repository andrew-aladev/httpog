// Old generation HTTP (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

#include "data.h"

#include "options.h"
#include "print.h"

void print_data()
{
  PRINT_LENGTH(OGH_MIN_LENGTH);
  PRINT_GLUE();

  PRINT_LENGTH(OGH_MAX_LENGTH);
  PRINT_GLUE();
}
