#include <stdio.h>

/* In the fuction declarion there are two loops 
    * First loop is used to print a newline 10 times
    * Second loop is used to print all the lower alphabets
    * Putchar function is used to output the alphabets followed by a newline 10 times
    * Inside the main function we call the function
*/

void print_alphabet_x10(void){
    char a;
    int b;

    for (b = 1; b <= 10; b++){

    for (a = 'a'; a <= 'z'; a++){
        putchar(a);
    }
        putchar('\n');
}

}
int main(){
    print_alphabet_x10();
}
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A
A

