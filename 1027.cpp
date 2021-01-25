//https://codeup.kr/problem.php?id=1027

#include <stdio.h>

int main(void)
{
    int nYear{};
    int nMonth{};
    int nDay{};
    scanf("%04d.%02d.%02d",&nYear,&nMonth,&nDay);
    printf("%02d-%02d-%04d",nDay,nMonth,nYear);
    return 0;
}