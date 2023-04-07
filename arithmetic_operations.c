#include <stdio.h>

void main(){
    int a = 12, b = 6;
    int c, d, e, f, g;
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    g = a % b;
    printf("%d + %d = %d\n", a, b, c);
    printf("%d - %d = %d\n", a, b, d);
    printf("%d * %d = %d\n", a, b, e);
    printf("%d / %d = %d + %d", a, b, f, g);
}