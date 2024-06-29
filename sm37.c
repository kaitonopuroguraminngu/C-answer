#include <stdio.h>

// 長方形を描画する関数
void drawRectangle(int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("*");
        }
        printf(" "); // 長方形の間のスペースを表示
    }
}

// メイン関数
int main() {
    int width, height, count;

    // 横幅、高さ、個数の入力を受け取る
    printf("横幅: ");
    scanf("%d", &width);
    printf("高さ: ");
    scanf("%d", &count);
    printf("個数: ");
    scanf("%d", &height);

    // 長方形を横に並べて表示
    for (int i = 0; i < count; i++) {
        drawRectangle(width, height);
        if (i < count - 1) {
            printf(" \n"); // 長方形間のスペースを表示
        }
    }
    printf("\n"); // 改行

    return 0;
}
