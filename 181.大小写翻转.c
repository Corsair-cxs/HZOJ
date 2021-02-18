/*************************************************************************
	> File Name: 181.大小写翻转.c
	> Author: ChenXiansen 
	> Mail: 1494089474@qq.com 
	> Created Time: Mon 26 Oct 2020 09:45:20 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    char ch, gch;
    char *b = &ch;

    while (scanf("%c", &ch) != EOF) {
        if ('z' - ch >= 0 && ch - 'a' >= 0) {
            gch = ch - 'a' + 'A';
            printf("%c", gch);
        } else if ('Z' - ch >= 0 && ch - 'A' >= 0) {
            gch = ch - 'A' + 'a';
            printf("%c", gch);
        }
        printf(" %d\n", ch);
    }

    return 0;
}
