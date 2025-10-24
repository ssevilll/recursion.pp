#include <stdio.h>

int cycle_length(unsigned int n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        length++;
    }
    return length;
}

int main() {
    unsigned int i, j;
    while (scanf("%u %u", &i, &j) == 2) {
        unsigned int a = i, b = j;
        if (a > b) {
            unsigned int temp = a;
            a = b;
            b = temp;
        }

        int max_cycle = 0;
        for (unsigned int n = a; n <= b; n++) {
            int length = cycle_length(n);
            if (length > max_cycle)
                max_cycle = length;
        }

        printf("%u %u %d\n", i, j, max_cycle);
    }
    return 0;
}
