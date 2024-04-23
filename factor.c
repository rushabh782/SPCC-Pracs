#include <stdio.h>
#include "factor.h"

int main() {
    int num;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Print factors of the input number
    PRINT_FACTORS(num);
    
    return 0;
}

