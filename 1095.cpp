//https://codeup.kr/problem.php?id=1095

#include <stdio.h>

int main(void)
{
    int nCount{};
    int nStudent[10000]{};
    scanf("%d",&nCount);
    for (int i = 0; i < nCount; i++)
    {
        scanf("%d ", &nStudent[i]);
    }
    int nMin = nStudent[0];
    for (int i = 0; i < nCount; i++)
    {
        if (nMin > nStudent[i])
            nMin = nStudent[i];
    }
    printf("%d", nMin);
    return 0;
}
