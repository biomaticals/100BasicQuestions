//https://codeup.kr/problem.php?id=1097

#include <stdio.h>

int main(void)
{
    int nCount{};
    int nData[20][20]{};
    int nX{};
    int nY{};
    for (int i = 1; i <= 19; i++)
        for (int j = 1; j <= 19; j++)
            scanf("%d", &nData[i][j]);

    scanf("%d", &nCount);
    for (int i = 1; i <= nCount; i++)
    {
        scanf("%d %d", &nX, &nY);
        for (int j = 1; j <= 19; j++)
        {
            if (nData[nX][j] == 0)
                nData[nX][j] = 1;
            else
                nData[nX][j] = 0;
        }
        for (int k = 1; k <= 19; k++)
        {
            if (nData[k][nY] == 0)
                nData[k][nY] = 1;
            else
                nData[k][nY] = 0;
        }
    }
    for (int i = 1; i <= 19; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            printf("%d ", nData[i][j]);
        }
        printf("\n");
    }
    return 0;
}
