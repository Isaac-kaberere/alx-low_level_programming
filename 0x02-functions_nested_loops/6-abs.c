#include <stdio.h>

int _abs(int num) {
    if (num < 0) {
        return -num;
    } else {
      return num;
    }
}

int main() {
    int a;

    printf("Enter a number : ");
    scanf("%d", &a);

    int result = _abs(a);

    printf("The absolute value of %d is %d\n", a, result);
    return 0;
}

