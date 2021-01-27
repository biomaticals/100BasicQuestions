//https://codeup.kr/problem.php?id=1068

#include <stdio.h>

int main(void)
{
    int nScore{};
    scanf("%d", &nScore);
    if (nScore >= 90)
    {
        printf("A\n");
    }
    else if (nScore >= 70)
    {
        printf("B\n");
    }
    else if (nScore >= 40)
    {
        printf("C\n");
    }
    else if (nScore >= 0)
    {
        printf("D\n");
    }
    return 0;
}