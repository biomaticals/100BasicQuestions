//https://codeup.kr/problem.php?id=1078

#include <stdio.h>

int main(void)
{
    int nData{};
    int nSum{};
    scanf("%d", &nData);
    for (int i = 0; i <= nData; i += 2)
    {
        nSum += i;
    }
    printf("%d\n", nSum);
    return 0;
}