#include <stdio.h>

int _islower(int c){

    char a;

    for (a = 'a'; a <= 'z'; a++){
        if (a == 'c'){
            return 1;
        }
}
}

int main(){
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);
    int result = _islower(a);

    if (result == 1){
        printf("c is a lowercase letter");
    }
    else
        printf("c is not a lowercase letter");
}
