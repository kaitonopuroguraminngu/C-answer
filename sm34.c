#include <stdio.h>
unsigned long long factorial(int n);

int main() {
    int no;
    unsigned long long kai;
    printf("正の整数を入力してください: ");
    scanf("%d", &no);

    if (no < 0) {
        printf("負の数の階乗は定義されていません。\n");
    } else {
        kai = factorial(no);
        printf("%d の階乗は %llu です。\n", no, kai);
    }

    return 0;
}

unsigned long long factorial(int n) {
    unsigned long long kai = 1;
    for (int i = 1; i <= n; i++) {
        kai *= i;
    }
    return kai;
}
