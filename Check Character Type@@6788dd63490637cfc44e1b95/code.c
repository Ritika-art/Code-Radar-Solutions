#include <stdio.h>
int main(){
    char a;//we can use char when we have digits,alphabets both.
    scanf("%c",a);
    if(isalpha(a)){
        if(a=="a,e,i,o,u,A,E,I,O,U"){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
    }
}