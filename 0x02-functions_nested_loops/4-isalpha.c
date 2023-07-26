#include <stdio.h>

int _isalpha(int c){
    char a;
    char b;

    for (a = 'a'; a <= 'z'; a++){
        if (c == a){
            return 1;
        }
}
    for (b = 'A'; b <= 'Z'; b++){
        if (c == b){
            return 1;
        }
    }
}

int main(){

    char a;

    printf("Enter two characters: ");
    scanf("%c", &a);

    int result = _isalpha(a);

    if (result == 1){
        printf("c is both lowercase and uppercase");
    } else
        printf("c is neither uppercace nor lowercase");

}

