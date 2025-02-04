#include <stdio.h>
int main() {
    float a,b,result;
    char c;
    scanf("%f%f%c",&a,&b,&c);
    if(c=='+'){
        result=a+b;
        printf("%f",result);
    }
    else if(c=='-'){
        result=a-b;
        printf("%f",result);
    }
    else if(c=='*'){
        result=a*b;
        printf("%f",result);
    }
    else if(c=='/'){
        result=a/b;
        printf("%f",result);
    }
    else{
        printf("error");
    }
    return 0;
}