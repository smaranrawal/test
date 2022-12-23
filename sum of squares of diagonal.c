#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum;
    printf("Enter the element\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
   for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
                if(i==j)
                {
                    sum=sum+a[i][j]*a[i][j];
                }
            }
        }

        printf("the sum is %d \n",sum);


        }




