#include<stdio.h>

int main (void){
    int no;
    printf("値を入力してください:");
    scanf("%d",&no);
    printf("下から2桁目は%dです。",(no/10)%10);
    return 0;
}