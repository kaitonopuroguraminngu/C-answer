#include<stdio.h>

int main (void){
    int no;
    printf("値を入力してください:");
    scanf("%d",&no);
    if(no==0){
        printf("0を入力しましたね");
    }
    else{
        printf("0以外の数を入力しましたね");
    }
    return 0;
}