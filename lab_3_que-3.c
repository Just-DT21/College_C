#include <stdio.h>
int main() {
    int n, sum;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    sum = n / 1000 + (n / 100) % 10 + (n / 10) % 10 + n % 10;
    printf("Sum of digits: %d\n", sum);
    return 0;
}
