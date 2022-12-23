#include<stdio.h>
void main()
{

        int a[3][5]={-6,8,5,-1,4,12,6,7,2,-5,-7,8,4,7,6},i,j,t[5][3];
        //printf("The transpose of the matrix is \n");

        for (i=0;i<3;i++)
        {
            for (j=0;j<5;j++)
            {
                //t[i][j]=a[j][i];
                t[i][j]=a[j][i];
            }
        }
        printf("The transpose of the matrix is \n");

        for (i=0;i<5;i++)
        {
            for (j=0;j<3;j++)
            {
                //t[i][j]=a[j][i];
                printf("%d\t",t[i][j]);
            }
            printf("\n");
        }


}
