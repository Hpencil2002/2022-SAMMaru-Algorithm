#include <stdio.h>
#define size 1000000

int checkNum(int num)
{
    int check= 0;

    while(num)
    {
        if(num%10==6)
        {
            int temp1 = num;
            temp1 /= 10;
            if(temp1%10==6)
            {
                int temp2 = temp1;
                temp2 /= 10;
                if(temp2%10==6)
                {
                    check = 1;
                }
            }
        }
        num /= 10;
    }

    if(check!=1)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

int main(void)
{
    int num;
    scanf("%d",&num);

    int check = 0;
    int i = 666;    
    while(1)
    {
        if(checkNum(i)==1)
        {
            check++;
            if(check == num)
            {
                printf("%d",i);
                break;
            }
        }

        i++;
    }

    return 0;
}