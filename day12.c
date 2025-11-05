// Q23: Calculate library fine based on late days
#include <stdio.h>

int main() {
    int days, fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5 && days > 0) {
        fine = days * 2;
        printf("Library fine: ₹%d\n", fine);
    } else if (days > 5 && days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Library fine: ₹%d\n", fine);
    } else if (days > 10 && days <= 30) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Library fine: ₹%d\n", fine);
    } else if (days > 30) {
        printf("Membership Cancelled.\n");
    } else {
        printf("No fine.\n");
    }
    return 0;
}
