#include<stdio.h>
void main()
{
    int marks[5],i;
    float avg,sum=0;
    printf("Enter the element\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for (i=0;i<5;i++)
    {
        sum =sum+marks[i];
    }
    avg=sum/5;
    printf("the average is %f\n",avg);
    printf("the sum is %f\n",sum);
}
