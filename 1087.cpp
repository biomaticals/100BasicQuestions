//https://codeup.kr/problem.php?id=1087

#include <stdio.h>

int main(void)
{
    int nData{};
    scanf("%d", &nData);
    int nSum;
    {
        for (int i = 0; nSum < nData; i++)
        {
            nSum += i;
        }
        printf("%d", nSum);
    }
}