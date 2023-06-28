#include <stdio.h>

int _abs(int num) {
    if (num < 0) {
        return -num;
    } else {
      return num;
    }
}

int main() {
    int nur = -4;
    int absValue = _abs(nur);
    printf("The absolute value of %d is %d\n", nur, absValue);
    return 0;
}

