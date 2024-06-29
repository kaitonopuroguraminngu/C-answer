#include<stdio.h>

int main (void){
    int no;
    printf("値を入力してください:");
    scanf("%d",&no);
    printf("符号を反転した数は%dです。",no*(-1));
    return 0;
}