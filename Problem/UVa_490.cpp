#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

char s[105][105];
int main() {
    int col = 0;
    int row = 0;//最大行長度

    while (fgets(s[col], sizeof(s[col]), stdin)) {
        int len = strlen(s[col]);//strlen是用來計算字串長度的函式
        if (len > 0 && s[col][len - 1] == '\n') {
            s[col][len - 1] = '\0';//去掉換行符號
            len--;
        }

        if (len > row) row = len;
        col++;

        if (col >= 105) break;
    }

    // 旋轉並輸出
    for (int i = 0; i < row; i++) {
        for (int j = col - 1; j >= 0; j--) {
            int len = strlen(s[j]);//每行的長度可能不同，所以要重新計算每行的長度
            if (i >= len)
                putchar(' ');
            else
                putchar(s[j][i]);
        }
        putchar('\n');
        
    }
    return 0;
}
