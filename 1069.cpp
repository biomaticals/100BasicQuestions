//https://codeup.kr/problem.php?id=1069

#include <stdio.h>

int main(void)
{
    char cScore{};
    scanf("%c",&cScore);
    
switch(cScore)
{
    case 'A' : printf("best!!!\n");break;
    case 'B' : printf("good!!\n");break;
    case 'C' : printf("run!\n" );break;
    case 'D' : printf("slowly~\n");break;
    default : printf("what?\n");break;
}

}