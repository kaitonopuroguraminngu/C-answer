#include<stdio.h>

int main (void){
    int no ,i,sum;
    printf("正の整数を入力してください:");
    scanf("%d",&no);
    sum =0;
    for(i=1;i<=no;++i){ 
        sum=sum+i;
    }
    printf("1から%dまでを足した値は%dです",no,sum);
    return 0;
}