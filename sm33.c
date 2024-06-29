#include<stdio.h>

int main (void){
    int no ,i;
    printf("整数を入力してください:");
    scanf("%d",&no);
    if(no>0){
        i=no;
        while(i!=-1){
            printf("%d ",i);
            i--;
        }
    }
    else{
        printf("");
    }
    return 0;
}