// Old generation HTTP (v0.9, v1.0, v1.1) C library.
// Copyright (c) 2019 AUTHORS, MIT License.

// This file was generated, do not edit manually.

// It may not be possible to run generator while cross compiling.
// So generated file should be distributed with its template.

#include "main.h"

const ogh_processor_state_fast_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_CONSTANTS_LENGTH = 15;

const ogh_processor_state_fast_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_INITIAL_STATE = OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_CONSTANTS_LENGTH;

const uint_fast16_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_ALPHABET_LENGTH     = 39;
const uint_fast16_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_ALPHABET_MAX_LENGTH = OGH_MAX_SYMBOL + 1;

const ogh_symbol_fast_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_UNDEFINED_SYMBOL = OGH_MAX_SYMBOL;

#define SYMBOL_BY_BYTES_LENGTH OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_ALPHABET_MAX_LENGTH

// clang-format off

const ogh_symbol_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_SYMBOL_BY_BYTES[SYMBOL_BY_BYTES_LENGTH] = {
  [0 ... SYMBOL_BY_BYTES_LENGTH - 1] = OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_UNDEFINED_SYMBOL,
  [79] = 0,
  [75] = 1,
  [67] = 2,
  [114] = 3,
  [101] = 4,
  [97] = 5,
  [116] = 6,
  [100] = 7,
  [65] = 8,
  [99] = 9,
  [112] = 10,
  [78] = 11,
  [111] = 12,
  [32] = 13,
  [110] = 14,
  [77] = 15,
  [117] = 16,
  [108] = 17,
  [105] = 18,
  [104] = 19,
  [115] = 20,
  [118] = 21,
  [80] = 22,
  [109] = 23,
  [121] = 24,
  [84] = 25,
  [102] = 26,
  [66] = 27,
  [82] = 28,
  [113] = 29,
  [85] = 30,
  [122] = 31,
  [70] = 32,
  [98] = 33,
  [73] = 34,
  [83] = 35,
  [69] = 36,
  [71] = 37,
  [119] = 38};

// clang-format on

#define NEXT_STATE_BY_LAST_SYMBOLS_LENGTH (175 + 1) * OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_ALPHABET_LENGTH

// clang-format off

const ogh_processor_status_description_1_0_state_t OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_NEXT_STATE_BY_LAST_SYMBOLS[NEXT_STATE_BY_LAST_SYMBOLS_LENGTH] = {
  [0 ... NEXT_STATE_BY_LAST_SYMBOLS_LENGTH - 1] = OGH_PROCESSOR_STATUS_DESCRIPTION_1_0_INITIAL_STATE,
  [585] = 16,
  [587] = 17,
  [596] = 31,
  [600] = 40,
  [612] = 89,
  [615] = 99,
  [617] = 110,
  [619] = 122,
  [620] = 158,
  [625] = 0,
  [666] = 18,
  [706] = 19,
  [746] = 20,
  [786] = 21,
  [823] = 22,
  [865] = 23,
  [905] = 24,
  [945] = 25,
  [984] = 26,
  [1018] = 27,
  [1063] = 28,
  [1098] = 29,
  [1135] = 30,
  [1177] = 1,
  [1221] = 32,
  [1254] = 80,
  [1261] = 33,
  [1289] = 34,
  [1338] = 35,
  [1379] = 36,
  [1410] = 37,
  [1447] = 38,
  [1496] = 39,
  [1527] = 2,
  [1572] = 55,
  [1576] = 41,
  [1616] = 42,
  [1644] = 43,
  [1695] = 44,
  [1726] = 45,
  [1772] = 46,
  [1798] = 47,
  [1846] = 48,
  [1874] = 49,
  [1930] = 50,
  [1962] = 51,
  [2007] = 52,
  [2037] = 53,
  [2071] = 54,
  [2126] = 3,
  [2166] = 56,
  [2188] = 57,
  [2230] = 58,
  [2275] = 59,
  [2323] = 60,
  [2326] = 70,
  [2344] = 61,
  [2382] = 62,
  [2441] = 63,
  [2462] = 64,
  [2510] = 65,
  [2539] = 66,
  [2588] = 67,
  [2619] = 68,
  [2669] = 69,
  [2715] = 4,
  [2734] = 71,
  [2792] = 72,
  [2818] = 73,
  [2859] = 74,
  [2889] = 75,
  [2930] = 76,
  [2967] = 77,
  [3021] = 78,
  [3059] = 79,
  [3105] = 5,
  [3133] = 81,
  [3174] = 82,
  [3191] = 118,
  [3193] = 142,
  [3210] = 83,
  [3244] = 84,
  [3294] = 85,
  [3341] = 86,
  [3372] = 87,
  [3397] = 88,
  [3439] = 6,
  [3476] = 90,
  [3517] = 91,
  [3562] = 92,
  [3616] = 93,
  [3625] = 152,
  [3631] = 94,
  [3695] = 95,
  [3721] = 96,
  [3748] = 97,
  [3803] = 98,
  [3828] = 7,
  [3875] = 100,
  [3905] = 101,
  [3955] = 102,
  [3984] = 103,
  [4036] = 104,
  [4068] = 105,
  [4098] = 106,
  [4152] = 107,
  [4204] = 108,
  [4216] = 109,
  [4258] = 8,
  [4302] = 111,
  [4332] = 112,
  [4401] = 113,
  [4425] = 114,
  [4453] = 115,
  [4492] = 116,
  [4528] = 117,
  [4577] = 9,
  [4614] = 119,
  [4657] = 120,
  [4694] = 121,
  [4726] = 10,
  [4772] = 123,
  [4803] = 124,
  [4840] = 125,
  [4878] = 126,
  [4928] = 127,
  [4958] = 128,
  [5009] = 129,
  [5044] = 130,
  [5105] = 131,
  [5113] = 132,
  [5151] = 133,
  [5208] = 134,
  [5230] = 135,
  [5268] = 136,
  [5317] = 137,
  [5379] = 138,
  [5385] = 139,
  [5424] = 140,
  [5472] = 141,
  [5502] = 11,
  [5561] = 143,
  [5587] = 144,
  [5633] = 145,
  [5659] = 146,
  [5717] = 147,
  [5737] = 148,
  [5786] = 149,
  [5817] = 150,
  [5854] = 151,
  [5896] = 12,
  [5933] = 153,
  [5973] = 154,
  [6010] = 155,
  [6083] = 156,
  [6089] = 157,
  [6147] = 13,
  [6166] = 159,
  [6204] = 160,
  [6261] = 161,
  [6297] = 162,
  [6327] = 163,
  [6361] = 164,
  [6409] = 165,
  [6465] = 166,
  [6488] = 167,
  [6518] = 168,
  [6573] = 169,
  [6596] = 170,
  [6648] = 171,
  [6686] = 172,
  [6713] = 173,
  [6780] = 174,
  [6803] = 175,
  [6829] = 14};

// clang-format on

extern inline ogh_processor_state_fast_t ogh_processor_status_description_1_0_get_next_state(
  ogh_processor_state_fast_t state, ogh_symbol_fast_t byte);

extern inline bool ogh_processor_status_description_1_0_is_valid(ogh_processor_state_fast_t state);
