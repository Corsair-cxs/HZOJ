/*************************************************************************
	> File Name: 124.招聘.c
	> Author: ChenXiansen
	> Mail: 1494089474@qq.com
	> Created Time: Sun 13 Sep 2020 11:01:26 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int degree, ranking, age, work_year;
    scanf("%d%d%d%d", &degree, &ranking, &age, &work_year);
    printf("%s", (((degree > 1) || (ranking <= 50)) && \
                  ((age <= 25) || (work_year >= 5))) ?  \
                  "ok" : "pass");
    return 0;
}
