//https://codeup.kr/problem.php?id=1094

#include <stdio.h>

int main(void)
{
    int nCount{};
    int nStudent[10000]{};
    scanf("%d", &nCount);
    for (int i = 0; i < nCount ; i++)
    {
        scanf("%d", &nStudent[i]);
    }
    for (int j = nCount-1; j >= 0; j--)
    {
        printf("%d ", nStudent[j]);
    }
    return 0;
}