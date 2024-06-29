#include<stdio.h>

int main (void){
    int dol;
    double wa;
    printf("金額を入力してください:");
    scanf("%d",&dol);

    if(dol<=299) wa=1;
    else if(dol>299 && dol<=1000) wa=0.95; 
    else if(dol>1000 && dol<=3000) wa=0.85; 
    else if(dol>=3001) {wa=0.70;}  
    printf("割引後の金額は%0.0fです",dol*wa);  
    return 0;
}