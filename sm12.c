#include<stdio.h>

int main (void){
    int n1 ,n2,sum;
    printf("値1を入力してください:");
    scanf("%d",&n1);
    printf("値2を入力してください:");
    scanf("%d",&n2);
    sum=n1+n2;
    printf("合計値は%dです\n",sum);
    printf("平均値は%0.2fです。",(double)sum/2);
    return 0;
}