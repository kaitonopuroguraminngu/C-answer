#include<stdio.h>

int main (void){
    int no ,i,sum;
    sum=0;
    i=1;
    printf("整数を入力してください\n");
    do{
        printf("No.%d:",i);
        scanf("%d",&no);
        sum = sum+no;
        i++;
    }while(9999!=no);
    sum=sum-9999;
    printf("合計は%dで平均は%0.2fです。",sum,(double)sum/(i-2));
    return 0;
}