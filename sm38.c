#include <stdio.h>

// うるう年判定関数
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1; // うるう年
    } else {
        return 0; // 平年
    }
}

// 月の日数を返す関数
int getDaysInMonth(int year, int month) {
    int days[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return days[month - 1];
}

// 曜日を求める関数 (Zellerの公式)
int dayOfWeek(int year, int month, int day) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int h = (day + (13 * (month + 1)) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    return h; // 0:土曜日, 1:日曜日, ..., 6:金曜日
}

// カレンダーを表示する関数
void displayCalendar(int year, int month) {
    // 曜日のヘッダー
    printf(" S  M  T  W  T  F  S\n");

    // 月の初日の曜日を求める
    int startDay = dayOfWeek(year, month, 1);

    // 月の日数を取得
    int daysInMonth = getDaysInMonth(year, month);

    // カレンダーを表示
    int day = 1;
    for (int i = 0; i < 6; i++) { // 最大6週間分
        for (int j = 0; j < 7; j++) {
            if (i == 0 && j < startDay) {
                printf(" - "); // 1日より前の空白
            } else if (day <= daysInMonth) {
                printf("%2d ", day);
                day++;
            } else {
                printf("   "); // 月の末尾の空白
            }
        }
        printf("\n");
        if (day > daysInMonth) break; // 月の日数を超えたら終了
    }
}

// メイン関数
int main() {
    int year, month;

    // 西暦と月の入力を受け取る
    printf("西暦を入力してください：");
    scanf("%d", &year);
    printf("月を入力してください：");
    scanf("%d", &month);

    // カレンダーを表示
    displayCalendar(year, month);

    return 0;
}
