#include <stdio.h>

int devint(int n)
{
    if(n==3)
    {
        return 4;
    }

    else if(n==2)
    {
        return 2;
    }

    else if(n==1)
    {
        return 1;
    }

    return devint(n-1)+devint(n-2)+devint(n-3);
}

int main(void)
{
    int caseNum;
    scanf("%d",&caseNum);

    int num;

    for(int i=0;i<caseNum;i++)
    {
        scanf("%d",&num);
        printf("%d\n",devint(num));
    }

    return 0;
}