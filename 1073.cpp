//https://codeup.kr/problem.php?id=1073

#include <stdio.h>

int main(void)
{
    int a{};
    scanf("%d", &a);
    while (a != 0)
    {
        printf("%d\n", a);
        scanf("%d", &a);
    }
    return 0;
}