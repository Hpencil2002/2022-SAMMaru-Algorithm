#include <stdio.h>

void change(int num,int t1,int t2,int t3)
{
    if(num==1)
    {
        printf("%d %d\n",t1,t3);
    }

    else
    {
        change(num-1,t1,t3,t2);
        printf("%d %d\n",t1,t3);
        change(num-1,t2,t1,t3);
    }
} 

int main(void)
{
    int num;
    scanf("%d",&num);
    int total = 1;
    for(int i=0;i<num;i++)
    {
        total *= 2;
    }

    total--;
    printf("%d\n",total);

    change(num,1,2,3);

    return 0;
}