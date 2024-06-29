#include<stdio.h>

int main (void){
    int n1,n2,n3,n4,max;
    printf("値1を入力してください:");
    scanf("%d",&n1);
    printf("値2を入力してください:");
    scanf("%d",&n2);
    printf("値3を入力してください:");
    scanf("%d",&n3);
    printf("値4を入力してください:");
    scanf("%d",&n4);

    max = n1;
    max = max<n2 ? n2 : max ;
    max = max<n3 ? n3 : max ;
    printf("最大値は%dです",max);
    return 0;
}