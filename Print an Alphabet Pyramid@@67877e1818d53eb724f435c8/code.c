#include<stdio.h>
int main(){
    int i,j,n;
    char ch='A';
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",ch+j);
        }
        printf("\n");
    }
}