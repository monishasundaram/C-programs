// Multiplication table in c
#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
// Upto 10 counts
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
