//https://codeup.kr/problem.php?id=1079

#include <stdio.h>

int main(void)
{
    char cData{};
    do 
    {
         scanf("%c", &cData);
         printf("%c", cData);       
    } while (cData != 'q');
    return 0;
}