#include<stdio.h>

int main (void){

    int i,no;
    printf("値を入力してください:");
    scanf("%d",&no);

    i=1;
    while(i<=no){
        printf("%d ",i);
        i +=2;
    }

    return 0;
}