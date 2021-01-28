//https://codeup.kr/problem.php?id=1075

#include <stdio.h>

int main(void)
{
    int a{};
    scanf("%d",&a);
    while(a!=0)
    {
        printf("%d\n",--a);
    }
    return 0;
}