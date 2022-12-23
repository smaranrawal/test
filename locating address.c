#include<stdio.h>
void main()
{
    int a[4][3],i,j;
    printf(" Enter the aray element\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the elements are\n");
    for (i=0;i<4;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    if(&a[0][0]==80){

    printf("%d",&a[3][2]);
}
}
