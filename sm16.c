#include<stdio.h>

int main (void){
    int no;
    printf("値を入力してください:");
    scanf("%d",&no);
    if(no%10){
        printf("その数は10の倍数ではありません");
    }
    else{
        printf("その数は10の倍数です");
    }
    return 0;
}