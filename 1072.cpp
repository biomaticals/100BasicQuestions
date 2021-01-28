//https://codeup.kr/problem.php?id=1072

#include <stdio.h>

int main(void)
{
    long long int n{};
    int m{};
    scanf("%d", &n);
reget:
    scanf("%d", &m);
    if (n != 0)
    {
        printf("%d\n", m);
        n--;
        goto reget;
    }
    return 0;
}