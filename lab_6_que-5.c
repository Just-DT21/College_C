#include <stdio.h>
int main() {
    int n, isPrime = 1;
    scanf("%d", &n);
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) { isPrime = 0; break; }
    printf(isPrime && n > 1 ? "Prime" : "Not Prime");
    return 0;
}

