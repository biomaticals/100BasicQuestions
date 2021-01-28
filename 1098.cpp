//https://codeup.kr/problem.php?id=1098

#include <stdio.h>

int main(void)
{
    int h, w, n, l, d, x, y;
    int data[100][100]{};
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    int j;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if (d == 0)
        {
            for (j = y; j < y+l ; j++)
            {
                data[x][j] = 1;
            }
        }
        else if (d == 1)
        {
            for (j = x; j < x+l ; j++)
            {
                data[j][y] = 1;
            }
        }
    }

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
}