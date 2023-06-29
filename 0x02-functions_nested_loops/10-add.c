#include <stdio.h>

int add(int, int);

int main(){
    int a,b;
    int result;

    printf("Enter a number: ");
    scanf("%d%d", &a, &b);

    result = add(a, b);
    printf("THe sum of %d and %d is: %d\n", a, b, result);

    return 0;



}
int add(int a, int b){
    int sum;

    sum = a+b;

    return sum;

}
