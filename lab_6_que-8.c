#include <stdio.h>
#include <math.h>
int main() {
    int n;
    double x, sum = 0, term;
    scanf("%lf %d", &x, &n);
    for (int i = 0; i < n; i++) {
        term = pow(x, 2 * i + 1) / tgamma(2 * i + 2);
        sum += (i % 2 == 0 ? term : -term);
    }
    printf("sin(%lf) = %lf", x, sum);
    return 0;
}
