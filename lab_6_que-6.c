#include <stdio.h>
int main() {
    int n, sum = 0, temp, digit;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    printf(sum == n ? "Armstrong" : "Not Armstrong");
    return 0;
}
