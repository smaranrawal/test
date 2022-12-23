#include<stdio.h>
void main()
{
    int m,n;
    int a[10][10],i,j,sum=0;

    printf("Enter the matrix of order less than 10*10 ");
    scanf("%d%d",&m,&n);

    if (m>10||n>10)
    {
        printf("the prder is out of range\n");
       // exit();
    }

    if (m!=n)
    {
        printf("it is not a aquare matrix\n");
       // exit();
    }

    printf("\nEnter the elements of matrix:\t");
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("\nThe matrix is:\n");
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("%d\t",a[i][j]);
		}
	printf("\n");
	}

   // printf("the sum of square of diagonal is \n");

    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==j)
        {
            sum+=a[i][j]*a[i][j];
        }
        }
    }
    printf("the sum of square of diagonal is %d",sum);
}
