//https://codeup.kr/problem.php?id=1096

#include <stdio.h>

int main(void)
{
    int nCount{};
    int nX{};
    int nY{};
    int nPosition[20][20]{};

    scanf("%d",&nCount);
    for (int i = 0; i < nCount; i++)
    {
        scanf("%d %d", &nX, &nY);
        nPosition[nX-1][nY-1] = 1;
    }
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19; j++)
        {
            printf("%d ", nPosition[i][j]);
        }
        printf("\n");
    }
}