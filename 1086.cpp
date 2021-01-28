//https://codeup.kr/problem.php?id=1086

#include <stdio.h>

int main(void)
{
    double w,h,b{};
    scanf("%lf %lf %lf",&w,&h,&b);
    printf("%.2lf MB\n",w*h*b/1024/1024/8);
    return 0;
}