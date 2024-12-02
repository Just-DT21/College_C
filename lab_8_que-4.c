#include <stdio.h>
int main() {
    int arr[] = {4, -7, 1, 9, 0, -3}, n = 6, pos = 0, neg = 0, odd = 0, even = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
        if (arr[i] != 0 && arr[i] % 2 == 0) even++;
        else if (arr[i] % 2 != 0) odd++;
    }
    printf("Pos: %d, Neg: %d, Odd: %d, Even: %d, Zero: %d", pos, neg, odd, even, zero);
    return 0;
}