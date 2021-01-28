//https://codeup.kr/problem.php?id=1080

#include <stdio.h>

int main(void)
{
    int nData{};
    int nSum{};
    int nIndex{};
    scanf("%d", &nData);
    for (int i = 0; nSum < nData; i++)
    {
        nSum += i;
        nIndex = i;
    }
    printf("%d\n", nIndex);
    return 0;
}