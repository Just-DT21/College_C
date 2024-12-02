#include <stdio.h>
int main() {
    int arr[] = {4, 7, 1, 9, -3, 2}, n = 6, temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}