//https://codeup.kr/problem.php?id=1093

#include <stdio.h>

int main(void)
{
    int nCount{};
    int nStudent[24]{};
    int nTemp{};
    scanf("%d", &nCount);
    for (int i = 0; i < nCount; i++)
    {
        scanf("%d", &nTemp);
        nStudent[nTemp - 1]++;
    }
    for (int i = 0; i < 23; i++)
        printf("%d ", nStudent[i]);

    return 0;
}