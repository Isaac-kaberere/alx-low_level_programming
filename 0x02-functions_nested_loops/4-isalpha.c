#include <stdio.h>

int _isalpha(int c){
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){

    return 1;
  }  else {
    return 0;
  }

}
int main(){
    char a;
    int result;

    printf("Enter a character: ");
    scanf("%c", &a);
    result = _isalpha(a);

    if (result == 1){
        printf("%c is an alphabetic character", a);
    } else {
        printf("%c is not an alphabetic character", a);
    }
}

