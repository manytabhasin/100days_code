//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, numDigits = 0, tempNum, swappedNum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    tempNum = num;
    lastDigit = tempNum % 10;

    while (tempNum >= 10) {
        tempNum /= 10;
        numDigits++;
    }
    firstDigit = tempNum;

    if (numDigits == 0) {
        swappedNum = num; // Single digit number
    } else {
        swappedNum = lastDigit;
        swappedNum *= pow(10, numDigits);
        swappedNum += (num % (int)pow(10, numDigits)) - lastDigit;
        swappedNum += firstDigit;
    }

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}