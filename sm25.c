#include<stdio.h>

int main (void){
    int no ,za;
    printf("値段を入浴してください:");
    scanf("%d",&no);
    printf("在庫数を入力してください:");
    scanf("%d",&za);
    if ((no>=1000 && no<5000)|| za>=20){
        printf("セール対象です");
    }
    else{
        printf("セール対象ではありません");
    }
    return 0;
}