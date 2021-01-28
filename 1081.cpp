//https://codeup.kr/problem.php?id=1081

#include <stdio.h>

int main(void)
{
    int n{};
    int m{};
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i = 1 ; i <= n ; i ++)
    {
        for(int j = 1 ; j <=m ; j++)
        {
            printf("%d %d\n",i,j);
        }
    }
    return 0;
}