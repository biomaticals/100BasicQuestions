//https://codeup.kr/problem.php?id=1039

#include <stdio.h>

int main(void)
{
    long long int nData1{};
    long long int nData2{};
    scanf("%lld %lld",&nData1,&nData2);
    long long int nResult {};
    nResult=nData1+nData2;
    printf("%lld",nResult);
}