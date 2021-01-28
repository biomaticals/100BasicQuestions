//https://codeup.kr/problem.php?id=1076

#include <stdio.h>

int main(void)
{
    char cData{};
    char cIndex='a';
    scanf("%c", &cData);
    do
    {   
        printf("%c ", cIndex);
        cIndex++;
        
    }while (cIndex <= cData);
    return 0;
}