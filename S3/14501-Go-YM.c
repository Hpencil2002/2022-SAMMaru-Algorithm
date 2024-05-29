#include <stdio.h>

int day;
int time[16];
int price[16];
int max=0;

void findmax(int x,int money)
{
    if(x>day)
    {
        return;
    }

    if(money>max)
    {
        max = money;
    }

    if(x==day)
    {
        return;
    }

    findmax(x+time[x],money+price[x]);

    findmax(x+1,money);

    //max를 전역변수로 해놓았기 때문에 더 큰값이 max가 됨
}

int main(void)
{
    scanf("%d",&day);

    for(int i=0;i<day;i++)
    {
        scanf("%d%d",&time[i],&price[i]);
    }

    findmax(0,0);

    printf("%d\n",max);

    return 0;
}