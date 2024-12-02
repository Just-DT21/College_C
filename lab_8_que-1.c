#include <stdio.h>
int main() {
    int arr[] = {4, 7, 1, 9, -3, 2}, n = 6, max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Max: %d, Min: %d", max, min);
    return 0;
}