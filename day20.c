// Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int num, product = 1, remainder, hasOdd = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) {
            product *= remainder;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (!hasOdd) {
        product = 1; // No odd digits found
    }

    printf("Product of odd digits is %d\n", product);

    return 0;
}