#include<stdio.h>

int main (void){
    int no,ze;
    printf("値を入力してください:");
    scanf("%d",&no);
    ze = no<=0 ? no*-1 : no;
    printf("%dの絶対値は%dです",no,ze);
    return 0;
}