/*************************************************************************
	> File Name: 146.字符串.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 08:40:20 PM CST
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void offset_char(char *s, int n);

int main()
{
    char s[55];
    memset(s, '\0', 55);
    scanf("%s", s);
    int n = strlen(s);
    offset_char(s, n);
    printf("%s", s);
    return 0;
}
void offset_char(char *s, int n) {
    for (int i = 0; i < n; i++) {
        if ((s[i] < 'z' && s[i] >='a') || (s[i] >= 'A' && s[i] < 'Z')) {
            s[i] = s[i] + 1;
        }
        else if (s[i] == 'Z' || s[i] == 'z') {
            s[i] -= 25;
        }
    }
}
