//https://codeup.kr/problem.php?id=1091

#include <stdio.h>

int main(void)
{
    long long int a, m, d, n;
    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    for (int i = 0; i < n-1; i++)
    {
        a = a * m + d;
    }
    printf("%lld\n",a);
    return 0;
}