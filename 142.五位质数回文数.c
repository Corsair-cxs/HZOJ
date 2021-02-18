/*************************************************************************
	> File Name: 142.五位质数回文数.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Mon 14 Sep 2020 07:18:42 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>

int mark[1000001] = {0};

void make_prime(int n);
bool is_rever_num(int n);

int main()
{
    int a, b;
    int iter = 0x7FFFFFFE;
    scanf("%d%d", &a, &b);
    make_prime(b);
    for (int i = a; i <= b; i++) {
        if (is_rever_num(i)) {
            if (!mark[i]) {
                printf("%d", i);
                iter = i;
                break;
            }
        }
    }
    for (int i = iter + 1; i <= b; i++) {
        if( is_rever_num(i)) {
            if (!mark[i]) {
                printf(" %d", i);
            }
        }
    }
    return 0;
}

bool is_rever_num(int n)
{
    int m = 0, r, num = n;
    while (n) {
        r = n % 10;
        m = m * 10 + r;
        n /= 10;
    }
    if (num == m) return true;
    return false;
}

void make_prime(int n)
{
    for (int i = 2; i < 1000000; i++) {
        if (mark[i] == true) continue;
        if (i >= 1000) continue;
        for (int j = i * 2; j <= 1000000; j += i) {
            mark[j] = true;
        }
    }

}
