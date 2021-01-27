//https://codeup.kr/problem.php?id=1063

#include <stdio.h>

int main(void)
{
    int a{};
    int b{};
    scanf("%d %d",&a,&b);
    int max=a;
    if(b>a)
    {
        max=b;
    }
    
    printf("%d",max);
}