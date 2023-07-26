#include <stdio.h>
#include <stdlib.h>


    void print_alphabet(void){

        char a;

        for(a = 'a'; a <= 'z'; a++){
            putchar(a);
        }
        putchar('\n');
    }
int main(){

    print_alphabet();
    return 0;


}
