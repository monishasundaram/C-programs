//Even or Odd program
#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    //Even
    if(num % 2 == 0)
        printf("Even");
    //Odd
    else
        printf("Odd");

    return 0;
}
