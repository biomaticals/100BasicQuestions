//https://codeup.kr/problem.php?id=1070

#include <stdio.h>

int main(void)
{
    int nMonth{};
    scanf("%d", &nMonth);
    switch (nMonth)
    {
    case 3:
    case 4:
    case 5:
        printf("spring\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("summer\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("fall\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("winter\n");
        break;
    }
}