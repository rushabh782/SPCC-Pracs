#ifndef CONVERSION_H
#define CONVERSION_H

#include <stdio.h>
#include <stdlib.h>

// Macro to convert binary to decimal
#define BINARY_TO_DECIMAL(binary) strtol(binary, NULL, 2)

// Macro to convert decimal to binary
#define DECIMAL_TO_BINARY(decimal, binary_str, size) \
    snprintf(binary_str, size, "%ld", decimal);

// Macro to convert binary to hexadecimal
#define BINARY_TO_HEX(binary, hex_str, size) \
    snprintf(hex_str, size, "%lX", BINARY_TO_DECIMAL(binary));

// Macro to convert hexadecimal to binary
#define HEX_TO_BINARY(hex, binary_str, size) \
    snprintf(binary_str, size, "%ld", strtol(hex, NULL, 16));

#endif  // CONVERSION_H

