// Q27: Print the sum of the first n odd numbers
#include <stdio.h>

int main() {
    int n, i, sum = 0, count = 0, num = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    while (count < n) {
        sum += num;
        num += 2;
        count++;
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
