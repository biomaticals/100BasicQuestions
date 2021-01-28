//https://codeup.kr/problem.php?id=1084

#include <stdio.h>

int main(void)
{
    int r{};
    int g{};
    int b{};
    scanf("%d %d %d", &r, &g, &b);
    int sum{};
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < g; j++)
        {
            for (int k = 0; k < b; k++)
            {
                printf("%d %d %d\n", i, j, k);
                sum++;
            }
        }
    }
    printf("%d", sum);
}