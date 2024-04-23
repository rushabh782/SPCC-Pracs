#include<stdio.h>
#include "factorial.h"

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d\n", num, FACTORIAL(num));
    return 0;
}

