//https://codeup.kr/problem.php?id=1045

#include <stdio.h>

int main(void)
{
    int a{};
    int b{};
    scanf("%d %d",&a,&b);
    printf("%d\n%d\n%d\n%d\n%d\n%.2f\n",a+b,a-b,a*b,(int)(a/b),a%b,(float)a/(float)b);
}