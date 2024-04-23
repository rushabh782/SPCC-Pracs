#include <stdio.h>

int main() {
    // Given 3AC statements
    int a = 5, b = 3, c = 2;
    int t, u, v, d;

    // Assembly code for "t = a - b"
    t = a - b;

    // Assembly code for "u = a - c"
    u = a - c;

    // Assembly code for "v = t + u"
    v = t + u;

    // Assembly code for "d = v + u"
    d = v + u;

    // Print the assembly code
    printf("Assembly Code:\n");
    printf("MOV t, %d\n", t);
    printf("MOV u, %d\n", u);
    printf("MOV v, %d\n", v);
    printf("MOV d, %d\n", d);

    return 0;
}

