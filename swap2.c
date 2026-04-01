// Program to swap 2 numbers 
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    // With third variable
    // int t;
    // t = a;
    // a = b;
    // b = a;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\nb = %d", a, b);
    return 0;
}
