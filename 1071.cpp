//https://codeup.kr/problem.php?id=1071

#include <stdio.h>

int main(void)
{
    int nData{};
reload:
    scanf("%d", &nData);
    if (nData != 0)
    {
        printf("%d\n", nData);
        goto reload;
    }
    return 0;
}