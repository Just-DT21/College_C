#include <stdio.h>
int main() {
    int n, bin = 0, place = 1;
    scanf("%d", &n);
    while (n > 0) {
        bin += (n % 2) * place;
        n /= 2;
        place *= 10;
    }
    printf("%d", bin);
    return 0;
}
