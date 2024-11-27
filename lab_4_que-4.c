#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a % b == 0 || b % a == 0)
        printf("One is a multiple of the other\n");
    else
        printf("Not multiples\n");
    return 0;
}
