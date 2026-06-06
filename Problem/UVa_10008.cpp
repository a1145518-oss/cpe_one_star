#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int count;
    char letter;
} Pair;

/* 比較函式，用於 qsort */
int cmp(const void *a, const void *b) {
    Pair *pa = (Pair *)a;
    Pair *pb = (Pair *)b;

    if (pa->count != pb->count)
        return pb->count - pa->count;  // count 大的在前
    else
        return pa->letter - pb->letter; // letter 小的在前
}

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // 吃掉換行符號

    Pair v[26];
    for (int i = 0; i < 26; i++) {
        v[i].count = 0;
        v[i].letter = 'A' + i;
    }

    char s[1000];
    for (int line = 0; line < n; line++) {
        if (!fgets(s, sizeof(s), stdin)) break;

        int len = strlen(s);
        // 去掉換行符號
        if (len > 0 && s[len - 1] == '\n') s[len - 1] = '\0';

        for (int i = 0; i < strlen(s); i++) {
            if ('A' <= s[i] && s[i] <= 'Z') {
                v[s[i] - 'A'].count++;
            }
            if ('a' <= s[i] && s[i] <= 'z') {
                v[s[i] - 'a'].count++;
            }
        }
    }

    qsort(v, 26, sizeof(Pair), cmp);

    for (int i = 0; i < 26; i++) {
        if (v[i].count > 0)
            printf("%c %d\n", v[i].letter, v[i].count);
    }

    return 0;
}
