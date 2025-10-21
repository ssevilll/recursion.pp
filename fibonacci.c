#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int f0 = 1, f1 = 1, f2;

    if (n == 0 || n == 1) {
        printf("1\n");
        return 0;
    }

    for (int i = 2; i <= n; i++) {
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
    }

    printf("%d\n", f1);
    return 0;
}
