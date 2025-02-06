#include <stdio.h>
int main() {
    int a,b;
    char ch;
    scanf("%f%f%c",&a,&b,&ch);
    if(ch=='+'){
        printf("%f\n",a+b);
    }
    else if(ch=='-'){
        printf("%f\n",a-b);
    }
    else if(ch=='*'){
        printf("%f\n",a*b);
    }
    else if(ch=='/'){
        if(b!=0){
        printf("%f\n",a/b);}
        else{
            printf("error");
        }
    }
    else{
        printf("error");
    }
    return 0;
}