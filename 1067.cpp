//https://codeup.kr/problem.php?id=1067

#include <stdio.h>

int main(void)
{
    int a{};
    scanf("%d",&a);
    if (a < 0)
        printf("minus\n");
    else
        printf("plus\n");
    if (a % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
}