#include<stdio.h>

int main (void){
    int no;
    printf("値を入力してください:");
    scanf("%d",&no);
    printf("%d+10=%d\n",no,no+10);
    printf("%d-10=%d\n",no,no-10);
    printf("%d*10=%d\n",no,no*10);
    printf("%d/10=%d\n",no,no/10);
    printf("%d%%10=%d\n",no,no%10);
    return 0;
}