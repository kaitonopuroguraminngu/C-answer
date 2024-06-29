#include<stdio.h>

int main (void){
    int no;
    printf("値を入力してください:");
    scanf("%d",&no);
    if(no%2){
        printf("その数は奇数です");
    }
    else{
        printf("その数は偶数です。");
    }
    return 0;
}