//https://codeup.kr/problem.php?id=1092

#include <stdio.h>

int main(void)
{
    int a, b, c, day=1;
    scanf("%d %d %d",&a,&b,&c);
    while (day % a != 0 || day % b != 0 || day % c != 0)
    {
        day++;
    }
    printf("%d",day);
}