#include <stdio.h>
int main() {
    int arr[] = {4, 7, 1, 9, -3, 2}, n = 6, rev[6];
    for (int i = 0; i < n; i++) rev[i] = arr[n - i - 1];
    for (int i = 0; i < n; i++) printf("%d ", rev[i]);
    return 0;
}