#include<stdio.h>
void main()

{
    int a[2][3],b[2][3],c[2][3],i,j;
    printf ("Enter the element of first matrix\n ");
    for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("Enter the element of second matrix\n");

     for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);

        }
    }
    printf("Elementof first matrix\n");
     for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Element of second matrix\n");
     for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
    printf("the sum is \n");
     for(i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf(" %d\t",c[i][j]);

        }
        printf("\n");
    }

}
