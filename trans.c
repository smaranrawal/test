#include<stdio.h>
#define m 3
#define n 3
void main()
{
    int a[m][n],trans[n][m];
    int i, j;
    printf("Enter the element to be transposed\n");

    for(i=0;i<m;i++)
    {

    for (j=0;j<n;j++)
    {
    scanf("%d",&a[i][j]);
    }
    }
    printf("the entered matrix is \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the transpose of matrix is \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            printf("%d\t",trans[i][j]);

        }
        printf("\n");
    }

}
