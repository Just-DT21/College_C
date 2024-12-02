#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n], rev[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) rev[i] = arr[n - i - 1];
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) printf("%d ", rev[i]);
    return 0;
}