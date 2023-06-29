#include <stdio.h>

void times_table(void) {
    int c;

    for (c = 0; c <= 9; c++) {
        printf("9 x %d = %d\n", c, 9 * c);
    }
}

int main(void) {
    times_table();
    return 0;
}
