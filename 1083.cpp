//https://codeup.kr/problem.php?id=1083

#include <stdio.h>

int main(void)
{
    int nData{};
    scanf("%d", &nData);
    for (int i = 1; i <= nData; i++)
    {
        if (i % 3 == 0)
            printf("X ");
        else
            printf("%d ", i);
    }
    return 0;
}