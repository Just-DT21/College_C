#include <stdio.h>
int main() {
    int n, l, r;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter start and end indices: ");
    scanf("%d %d", &l, &r);

    printf("Subarray: ");
    for (int i = l; i <= r; i++) printf("%d ", arr[i]);
    return 0;
}