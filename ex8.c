#include <stdio.h>

int main() {

    int primo;

    for (int i = 2; i <= 100; i++) {
        primo = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            printf("%d\n", i);
        }
    }

    return 0;
}
