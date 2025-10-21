#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n == 1) {
        printf("2\n");
        return 0;
    }

    long long fib[40]; // enough for n <= 30
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n+1; ++i) fib[i] = fib[i-1] + fib[i-2];

    long long ans = fib[n-1] + fib[n+1];
    printf("%lld\n", ans);
    return 0;
}
