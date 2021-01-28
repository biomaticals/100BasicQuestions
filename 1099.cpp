//https://codeup.kr/problem.php?id=1099

#include <stdio.h>

int main(void)
{
    int nData[10][10]{};
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            scanf("%d", &nData[i][j]);
        }
    }

    i = 1;
    j = 1;
right:
    while (nData[i][j] == 0)
    {
        nData[i][j] = 9;
        j++;
        if (nData[i][j] == 2 || i >= 9)
            break;
        else if (nData[i][j] == 1)
        {
            j--;
            i++;
            while (nData[i][j] == 0)
            {
                nData[i][j] = 9;
                i++;
                if (nData[i][j] == 2 || j >= 9)
                    break;
                else if (nData[i][j + 1] == 0 || nData[i][j] == 1)
                    goto right;
            }
        }
    }
    if (nData[i][j] == 2)
        nData[i][j] = 9;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", nData[i][j]);
        }
        printf("\n");
    }
}