#include <stdio.h>

int add(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int a, b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int result = add(a, b);

    printf("The sum of %d and %d is %d\n", a, b, result);

    return 0;
}

