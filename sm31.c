#include<stdio.h>

int main (void){
    int no ,i,sum;
    printf("正の整数を入力してください:");
    scanf("%d",&no);
    i=1;
    sum =0;
    while(i<=no){
        sum=sum+i;
        i++;
    }
    printf("1から%dまでを足した値は%dです",no,sum);
    return 0;
}