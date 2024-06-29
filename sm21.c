#include<stdio.h>

int main (void){
    int n1,n2,n3,max;
    printf("値1を入力してください:");
    scanf("%d",&n1);
    printf("値2を入力してください:");
    scanf("%d",&n2);
    printf("値3を入力してください:");
    scanf("%d",&n3);

    max = n1;
    if(max>n2){
        max=n2;
    }
    if(max>n3){
        max=n3;
    }
    printf("最小値は%dです。",max);
    return 0;
}