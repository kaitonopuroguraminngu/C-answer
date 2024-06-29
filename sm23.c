#include<stdio.h>

int main (void){
    int no;
    printf("点数を入力してください:");
    scanf("%d",&no);
    if(no<=100 && no>=80){
        printf("優");
    }
    else if(no<80 && no>=70){
        printf("良");
    }
    else if(no<70 && no>=60){
        printf("可");
    }
    else if(no<60){
        printf("不可");
    }
    return 0;
}