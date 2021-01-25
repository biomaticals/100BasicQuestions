//https://codeup.kr/problem.php?id=1025

#include <stdio.h>

int main(void)
{
    int nA{};
    int nB{};
    int nC{};
    int nD{};
    int nE{};
    scanf("%1d%1d%1d%1d%1d",&nA,&nB,&nC,&nD,&nE);
    printf("[%d]\n",nA*10000);
    printf("[%d]\n",nB*1000);
    printf("[%d]\n",nC*100);
    printf("[%d]\n",nD*10);
    printf("[%d]\n",nE);

    return 0;
}