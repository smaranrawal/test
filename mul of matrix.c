#include<stdio.h>
void main()
{

 int a[3][3],b[3][2],c[3][2],i,j,k,sum;
printf("Enter the element of first matrix\n");

    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter the element of second matrix\n");

     for(i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    printf("Elementof first matrix\n");
     for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Element of second matrix\n");
     for(i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }

    //printf("the multiplicatiom of matrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
            {
                c[i][j]=0;
                for (k=0;k<3;k++)
                {
                    c[i][j]+=a[i][k]* b [k][j];
                }
                   // c[i][j]=sum;

            }
    }
            printf("mltipication of matrix is\n");
            for(i=0;i<3;i++)
            {
                for (j=0;i<2;j++)
                {
                    printf("%d\t",c[i][j]);
                }

            printf("\n");
            }

}

