#include<stdio.h>
void main()
{





int a[2][2],b[2][2],c[2][2],i,j,k,sum;



 printf("Enter the element of first matrix\n");

    for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter the element of second matrix\n");

     for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    printf("Elementof first matrix\n");
     for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Element of second matrix\n");
     for(i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
for (i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
        c[i][j]=0;
        for(k=0;k<2;k++)
        {
            c[i][j]+=a[i][j]*b[i][j];
        }

    }
}
printf("multiplication of matrix \n");
for (i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
        printf("%d\t",c[i][j]);
    }
    printf("\n");
}
}
