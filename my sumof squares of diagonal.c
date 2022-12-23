#include<stdio.h>
void main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter the element\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("the element of the matrix is\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    //printf("the squares of the diagonal are\n");
    for (i=0;i<3;i++)
    {

        for (j=0;j<3;j++)
        {

            if(i==j)
            {


            sum=sum+a[i][j]*a[i][j];
        }
        }
    }


            printf(" the sum of squares of diagonal is %d",sum);

    }


