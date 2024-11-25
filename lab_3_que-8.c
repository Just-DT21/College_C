#include <stdio.h>

void swap_without_temp(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    swap_without_temp(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}