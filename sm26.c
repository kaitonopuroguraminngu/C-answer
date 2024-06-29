#include<stdio.h>

int main (void){
     
     int mon;
     printf("月を入力してください:");
     scanf("%d",&mon);

    switch (mon)
    {
    case 3:
    case 4:
    case 5:printf("春です"); break;
    case 6:
    case 7:
    case 8:printf("夏です"); break;
    case 9:
    case 10:
    case 11:printf("秋です"); break;
    case 12:
    case 1:
    case 2:printf("冬です"); break;
    default:printf("%d月はありませんよ!",mon); break;
    }
    return 0;
}