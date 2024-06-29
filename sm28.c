#include<stdio.h>

int main (void){
    int no,i;
    printf("値を入力してください:");
    scanf("%d",&no);
    i=1;
    while (i<=no)
    {
        printf("*");
        i++;
    }
    
    return 0;
}