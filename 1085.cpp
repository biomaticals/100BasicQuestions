//https://codeup.kr/problem.php?id=1085

#include <stdio.h>

int main(void)
{
    double h, b, c, s;
    scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
    printf("%.1lf MB",h*b*c*s/1024/1024/8);
}