#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func(char s[], int count) {
    int total = 0;

    // 計算所有位數的和
    for (int i = 0; i < strlen(s); i++) {
        total += s[i] - '0';
    }

    count++;

    if (total == 9) {
        return count;
    } else if (total < 9) {
        return 0;
    } else {
        // total >= 10，再次轉成字串後遞迴
        char newStr[20];
        sprintf(newStr, "%d", total);
        return func(newStr, count);
    }
}

int main() {
    char s[1000];

    while (scanf("%s", s) == 1) {
        if (strcmp(s, "0") == 0) break;

        int ans = func(s, 0);

        if (ans == 0) {
            printf("%s is not a multiple of 9.\n", s);
        } else {
            printf("%s is a multiple of 9 and has 9-degree %d.\n", s, ans);
        }
    }

    return 0;
}
