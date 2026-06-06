#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

char s[10000];
int cnt = 0;

int main() {

    /* 逐行讀取直到 EOF */
    while (fgets(s, sizeof(s), stdin)) {

        for (int i = 0; i < strlen(s); i++) {

            if (s[i] == '\"') {
                if (cnt % 2 == 0)
                    printf("``");
                else
                    printf("''");
                cnt++;
            } else {
                putchar(s[i]);
            }
        }
    }

    return 0;
}
