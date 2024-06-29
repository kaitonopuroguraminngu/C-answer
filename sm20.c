#include<stdio.h>

int main (void){
    int n1,n2;
    printf("値1を入力してください:");
    scanf("%d",&n1);
    printf("値2を入力してください:");
    scanf("%d",&n2);

    if(n1==n2){
        printf("%dと%dは等しいです",n1,n2);
    }
    else if(n1>n2){
        printf("%dは%dより大きいです",n1,n2);
    }
    else{
        printf("%dは%dより小さいです",n1,n2);
    }
    return 0;
}