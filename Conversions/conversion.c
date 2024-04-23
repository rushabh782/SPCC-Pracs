#include <stdio.h>
#include "conversion.h"

int main() {
    // Binary to Decimal
    char binary[32];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    long decimal = BINARY_TO_DECIMAL(binary);
    printf("Binary %s is equivalent to Decimal: %ld\n", binary, decimal);
    
    // Decimal to Binary
    long decimal_num;
    printf("Enter a decimal number: ");
    scanf("%ld", &decimal_num);
    char binary_string[32]; // Sufficient size for 64-bit integer
    DECIMAL_TO_BINARY(decimal_num, binary_string, sizeof(binary_string));
    printf("Decimal %ld is equivalent to Binary: %s\n", decimal_num, binary_string);

    // Binary to Hexadecimal
    char binary_num[32];
    printf("Enter a binary number: ");
    scanf("%s", binary_num);
    char hex_string[32]; // Sufficient size for 64-bit integer
    BINARY_TO_HEX(binary_num, hex_string, sizeof(hex_string));
    printf("Binary %s is equivalent to Hexadecimal: %s\n", binary_num, hex_string);

    // Hexadecimal to Binary
    char hex_num[32];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex_num);
    char binary_str[32]; // Sufficient size for 64-bit integer
    HEX_TO_BINARY(hex_num, binary_str, sizeof(binary_str));
    printf("Hexadecimal %s is equivalent to Binary: %s\n", hex_num, binary_str);
    
    return 0;
}

