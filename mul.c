#include<stdio.h>
#define m 2
#define n 2
void main()
{
    int a[m][n],b[m][n],i,j,k,mul[i][j];

    printf("Enter the element\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
        for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    printf("Enter the second element element\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
        for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            mul[i][j]=0;
            for (k=0;k<m;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("the multiplication is \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
}
