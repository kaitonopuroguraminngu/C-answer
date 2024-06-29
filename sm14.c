#include<stdio.h>

int main (void){
    double no;
    printf("長さ[cm]を入力してください:");
    scanf("%lf",&no);
    printf("%fcmは%0.2fインチです",no,no/2.54);
    return 0;
}