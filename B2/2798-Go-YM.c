#include <stdio.h>

int main(void)
{
    int num,sum;
    scanf("%d%d",&num,&sum);

    int max=0;

    int arr[100] = {0,};

    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int temp = 0;

    for(int i=0;i<num-2;i++)
    {
        for(int j=i+1;j<num-1;j++)
        {
            for(int k=j+1;k<num;k++)
            {
                temp = arr[i]+arr[j]+arr[k];

                if((temp>max)&&(temp<=sum))
                {
                    max = temp;
                    break;
                }
            }
        }
    }

    printf("%d",max);

    return 0;
}