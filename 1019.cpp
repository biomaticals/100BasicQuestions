//https://codeup.kr/problem.php?id=1019

#include <stdio.h>

int main(void)
{
    int nYear{};
    int nMonth{};
    int nDay{};
    scanf("%d.%d.%d",&nYear,&nMonth,&nDay);
    printf("%04d.%02d.%02d",nYear,nMonth,nDay);
    return 0;
}