//https://codeup.kr/problem.php?id=1020

#include <stdio.h>

int main(void)
{
    int nYear{};
    int nMonth{};
    int nDay{};
    int nGender{};
    int nRegion{};
    int nErrorCord{};
    scanf("%2d%2d%2d-%1d%3d%3d",&nYear,&nMonth,&nDay,&nGender,&nRegion,&nErrorCord);
    printf("%02d%02d%02d%01d%03d%03d\n",nYear,nMonth,nDay,nGender,nRegion,nErrorCord);
}