//https://codeup.kr/problem.php?id=1090

#include <stdio.h>

int main(void)
{
    long long int a, r, n;
    scanf("%lld %lld %lld", &a, &r, &n);
    for (int i = 0; i < n-1; i++)
    {
        a = a * r;
    }
    printf("%lld\n", a);
}
