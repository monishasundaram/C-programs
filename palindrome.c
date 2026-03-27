//Check the given number is palindrome or not
#include <stdio.h>

int main() {
    int num, temp, reverse = 0, digit;
    scanf("%d", &num);
    temp = num;
    if (num < 0) {
        printf("Not a Palindrome\n");
        return 0;
    }
    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    //check whether the reversed number is equal to input number
    if (temp == reverse)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}
