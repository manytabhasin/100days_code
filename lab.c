//to check a perfect number 
rxample: 28 = 1 + 2 + 4 + 7 + 14 //
#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i <= num / 2; 