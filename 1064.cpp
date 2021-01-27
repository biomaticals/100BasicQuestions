//https://codeup.kr/problem.php?id=1064

#include<stdio.h>

int main(void)
{
    int a{};
    int b{};
    int c{};
    scanf("%d %d %d",&a,&b,&c);
    int min=a;
    if(b<min)
    {
        min = b;
    }
    if(c<min)
    {
        min = c;
    }
    printf("%d",min);
}