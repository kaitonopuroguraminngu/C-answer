#include<stdio.h>

int main (void){
    int n1,n2;
    printf("値1を入力してください:");
    scanf("%d",&n1);
    printf("値2を入力してください:");
    scanf("%d",&n2);
    printf("%dは%dの%7.2f%%です。",n1,n2,(double)n1*100/n2);
    return 0;
}