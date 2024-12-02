#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5}, n = 5, sorted = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) { sorted = 0; break; }
    }
    printf(sorted ? "Sorted" : "Not Sorted");
    return 0;
}