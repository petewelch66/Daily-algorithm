#include <stdio.h>

int main() {
    char c;
    int w = 0, l = 0;

    // -------- 11分制 --------
    while ((c = getchar()) != 'E') {
        if (c == 'W') w++;
        if (c == 'L') l++;

        if ((w >= 11 || l >= 11) && (w - l >= 2 || l - w >= 2)) {
            printf("%d:%d\n", w, l);
            w = l = 0;
        }
    }
    printf("%d:%d\n", w, l);
    printf("\n");

    // 让输入回到开头，重新读一遍
    fseek(stdin, 0, SEEK_SET);
    w = l = 0;

    // -------- 21分制 --------
    while ((c = getchar()) != 'E') {
        if (c == 'W') w++;
        if (c == 'L') l++;

        if ((w >= 21 || l >= 21) && (w - l >= 2 || l - w >= 2)) {
            printf("%d:%d\n", w, l);
            w = l = 0;
        }
    }
    printf("%d:%d\n", w, l);

    return 0;
}
