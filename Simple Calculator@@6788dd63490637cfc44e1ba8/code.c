#include <stdio.h>
int main() {
    float a,b,result;
    char c;
    scanf("%f%f%ch",&a,&b,&c);
    if(ch=='+'){
        result=a+b;
        printf("%f",result);
    }
    else if(ch=='-'){
        result=a-b;
        printf("%f",result);
    }
    else if(ch=='*'){
        result=a*b;
        printf("%f",result);
    }
    else if(ch=='/'){
        result=a/b;
        printf("%f",result);
    }
    else{
        printf("error");
    }
    return 0;
}