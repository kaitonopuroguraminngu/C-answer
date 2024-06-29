#include <stdio.h>

int main() {
    int count = 0;

    for (int i = 1; i <= 50; i++) {
        printf("%3d ", i); 

        count++;
        if (count % 5 == 0) {
            printf("\n");
        }
    }
    if (count % 5 != 0) {
        printf("\n");
    }

    return 0;
}