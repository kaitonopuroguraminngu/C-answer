#include<stdio.h>

int main (void){
    double no;
    printf("値を入力してください:");
    scanf("%lf",&no);
    printf("%f+0.1=%0.4f\n",no,no+0.1);
    printf("%f-0.1=%0.4f\n",no,no-0.1);
    printf("%f*0.1=%0.4f\n",no,no*0.1);
    printf("%f/0.1=%0.4f\n",no,no/0.1);
    return 0;
}