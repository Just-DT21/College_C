#include <stdio.h>
int main() {
    int N, a = 0, b = 1, c;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
