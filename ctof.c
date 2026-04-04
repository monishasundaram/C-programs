// Celsius to Fahrenheit
#include <stdio.h>

int main() {
    float c, f;
    scanf("%f", &c);
// formula
    f = (c * 9/5) + 32;
    printf("Fahrenheit = %.2f", f);

    return 0;
}
