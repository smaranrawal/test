#include<stdio.h>
void main()
{
    int a[7];
    int even=0,odd=0,i;
    printf("enter the element\n");
    for (i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<7;i++)
    {
        if(a[i]%2==0)
        {
            even++;

        }
        else
        {
            odd++;
        }
    }
    printf("the total no of even is %d",even);
    printf("The total no of odd is %d",odd);
}
