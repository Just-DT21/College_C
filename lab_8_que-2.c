#include <stdio.h>
int main() {
    int arr[] = {4, 7, 1, 9, -3, 2}, n = 6, sum = 0;
    for (int i = 1; i < n; i += 2) sum += arr[i];
    printf("Sum: %d", sum);
    return 0;
}