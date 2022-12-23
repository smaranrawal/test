#include<stdio.h>
void main()
{
    int a[2][3],i,j,sum=0;
    printf("Enter the element\n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the matrix elmemnt is \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of matrix is \n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
}
