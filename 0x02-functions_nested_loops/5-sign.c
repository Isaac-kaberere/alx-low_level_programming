#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n == 0) {
        printf("0");
        return 0;
    } else {
        printf("-");
        return -1;
    }
}

int main(void) {
    int number = 1;
    int result = print_sign(number);

    if (result == 1) {
        printf("The sign is +\n");
    } else if (result == 0) {
        printf("The sign is 0\n");
    } else {
        printf("The sign is -\n");
    }

    return 0;
}
