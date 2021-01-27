//https://codeup.kr/problem.php?id=1065

#include <stdio.h>

int main(void)
{
    int a{};
    int b{};
    int c{};
    scanf("%d %d %d", &a, &b, &c);
    if (a % 2 == 0)
        printf("%d\n", a);
    if (b % 2 == 0)
        printf("%d\n", b);
    if (c % 2 == 0)
        printf("%d\n", c);
}