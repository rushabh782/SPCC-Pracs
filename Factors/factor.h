#ifndef FACTOR_H
#define FACTOR_H

// Include necessary headers
#include <stdio.h>

// Declare the macro to print factors of a number
#define PRINT_FACTORS(num) \
    do { \
        printf("Factors of %d are:", num);  \
        int i; \
        for(i = 1; i <= num; ++i) { \
            if(num % i == 0) {  \
                printf(" %d", i); \
            } \
        }  \
        printf("\n");  \
    } while(0)

#endif  // FACTOR_H

