#include<stdio.h>

int main (void){
    int n1,n2;
    printf("値1を入力してください:");
    scanf("%d",&n1);
    printf("値2を入力してください:");
    scanf("%d",&n2);
    printf("%d*%d=%4d",n1,n2,n1*n2);
    return 0;
}