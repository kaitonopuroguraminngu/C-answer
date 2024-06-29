#include<stdio.h>

int main (void){
    int no,i;
    printf("値を入力してください:");
    scanf("%d",&no);

    i=0;

    while(1<=no){
        no=no/10;
        i++;
    }
    printf("%d桁です。",i);
    return 0;
}