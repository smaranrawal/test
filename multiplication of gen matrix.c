#include<stdio.h>
void main()
{
    int a[3][3]={3,5,7,2,-3,4,4,5,2},b[3][2]={7,6,6,-5,4,3},i,j,k,mul[3][2];


    for (i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            mul[i][j]=0;
            for (k=0;k<3;k++)
        {
//mul[i][j]=0;
            mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("multiplication of matirix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<2;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

}
