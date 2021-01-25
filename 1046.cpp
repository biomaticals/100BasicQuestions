//https://codeup.kr/problem.php?id=1046

#include <stdio.h>

int main(void)
{
    int a{};
    int b{};
    int c{};

    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n%.1f",a+b+c,(float)(a+b+c)/(float)3);
}