#include<stdio.h>
void main()
{
    int a[5],b[5],sumab[5],i;
    printf("Enter the first element\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second element\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
        for (int i=0;i<5;i++)
    {
        sumab[i]=a[i]+b[i];

    printf("The sum of index %d is %d",i,sumab[i]);
    }
    }
