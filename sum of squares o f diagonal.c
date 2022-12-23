#include <stdio.h>
#include <conio.h>
void main()
{
int matrix[10][10],i,j,sum=0,M,N;
//clrscr();
printf("\nEnter order of square matrix (less than 10*10):\t");
scanf("%d %d",&M,&N);
	if(M>10 || N>10)
	{
	printf("\nThe order is out of range.\n");
	//getch();
	//exit();
	}
		if(M!=N)
		{
		printf("Not square matrix.\n");
		//getch();
		//exit();
		}

printf("\nEnter the elements of matrix:\t");
for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		scanf("%d",&matrix[i][j]);
		}
	}
printf("\nThe matrix is:\n");
for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		printf("%d\t",matrix[i][j]);
		}
	printf("\n");
	}


for(i=0;i<M;i++)
	{
	for(j=0;j<N;j++)
		{
		if(i==j)
		sum = sum + matrix[i][j]*matrix[i][j];
		}
	}
printf("\nThe sum of squares of elements on a diagonal is:%d", sum);
//getch();
}
