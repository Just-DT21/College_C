#include <stdio.h>
int main() {
    int m, days = 0;
    printf("Enter number of months (1-12): ");
    scanf("%d", &m);
    if (m >= 1) days += 31;  // January
    if (m >= 2) days += 28;  // February
    if (m >= 3) days += 31;  // March
    printf("Total days: %d\n", days);
    return 0;
}
