#include <stdio.h>
#include <conio.h>
void main()
{
float a[4]={20,0,5.6,98.5};
int i;
//clrscr();
printf("The contiguous memory locations are:\t");
for(i=0;i<4;i++)
{
printf("\na[%d]=%f is located at\t%u.", i, a[i], &a[i]);    			//address of array elements
}
//getch();
}

