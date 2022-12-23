
#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Éntter the array element\n");
    for (i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=0;i<5;i++)
    {
        printf("array element is %d\n",a[i]);
    }
    for (i=4;i>=0;i--)
    {
        printf("the element in reverse order is %d\n",a[i]);
    }
}
