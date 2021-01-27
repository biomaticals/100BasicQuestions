//https://codeup.kr/problem.php?id=1066

#include <stdio.h>

int main(void)
{
    int a{};
    int b{};
    int c{};
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    if (b % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    if (c % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}