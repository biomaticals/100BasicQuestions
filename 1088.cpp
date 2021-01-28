//https://codeup.kr/problem.php?id=1088

#include <stdio.h>

int main(void)
{
    int a{};
    scanf("%d",&a);
    for(int i = 0 ; i <= a ; i ++)
    {
        if(i%3==0)
        continue;
        printf("%d ",i);
    }
}