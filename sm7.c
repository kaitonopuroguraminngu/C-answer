#include<stdio.h>

int main (void){
    int n;
    printf("値を入力してください:");
    scanf("%d",&n);
    printf("%d角形の内角の和は%d度です。",n,(n-2)*180);
    return 0;
}