#include <stdio.h>

int main() {
    char expr[1001];  
    scanf("%s", expr);

    int count = 0;

    for (int i = 1; expr[i] != '\0'; i++) {
        if ((expr[i] == '+' || expr[i] == '-' || expr[i] == '*')) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
