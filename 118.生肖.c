/*************************************************************************
	> File Name: 118.生肖.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 03:57:42 PM CST
 ************************************************************************/

#include<stdio.h>

void print_sign(int year);

int main()
{
    int year;
    scanf("%d", &year);
    year = (year + 8) % 12;
    year++;
    print_sign(year);
    return 0;
}
void print_sign(int year)
{
    switch(year) {
        case 1 :
            printf("%s", "rat");
            break;
        case 2 :
            printf("%s", "ox");
            break;
        case 3 :
            printf("%s", "tiger");
            break;
        case 4 :
            printf("%s", "rabbit");
            break;
        case 5 :
            printf("%s", "dragon");
            break;
        case 6 :
            printf("%s", "snake");
            break;
        case 7 :
            printf("%s", "horse");
            break;
        case 8 :
            printf("%s", "sheep");
            break;
        case 9 :
            printf("%s", "monkey");
            break;
        case 10 :
            printf("%s", "rooster");
            break;
        case 11 :
            printf("%s", "dog");
            break;
        case 12 :
            printf("%s", "pig");
            break;
    }
}
