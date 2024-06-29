#include <stdio.h>

int main() {
    int width, height;

    printf("横幅: ");
    scanf("%d", &width);
    printf("高さ: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
