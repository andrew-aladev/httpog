// Old generation HTTP (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

#if !defined(OGHTTP_PARSER_CONSTANTS_H)
#define OGHTTP_PARSER_CONSTANTS_H

#define OGHTTP_PARSER_GENERATE_CONSTANTS(PREFIX, CONSTANTS) \
  const char* OGHTTP_##PREFIX##_PARSER_CONSTANTS[] = {CONSTANTS};

#endif // OGHTTP_PARSER_CONSTANTS_H
