#include<stdio.h>

int main (void){
    double no;
    printf("身長を入力してください:");
    scanf("%lf",&no);
    printf("標準体重は%0.1fです。",(no-100)*0.9);
    return 0;
}