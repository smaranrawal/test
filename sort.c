#include<stdio.h>
void main()
{
int nums[100], i, j, n, temp;
//clrscr();
printf("\nHow many numbers you want to sort?:\t");
scanf("%d", &n);
for(i=0;i<n;i++)
	scanf("%d", &nums[i]);

		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(nums[i]>nums[j])
				{
				temp=nums[i];
				nums[i]=nums[j];
				nums[j]=temp;
				}
			}

		}
printf("\nThe numbers in ascending order are:\n");
		for(i=0;i<n;i++)
			printf("\t%d", nums[i]);
getch();
}

