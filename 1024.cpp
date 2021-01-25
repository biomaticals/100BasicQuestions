//https://codeup.kr/problem.php?id=1024

#include <stdio.h>

int main(void)
{
    char ar_cData[30]{};
    scanf("%s",ar_cData);
    for(int i = 0; ar_cData[i]!=0;i++)
    {
        printf("'%c'\n",ar_cData[i]);
    }
    return 0;
}