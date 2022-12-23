#include <stdio.h>
#include <conio.h>
void main()
{
char names[5][10];
int i;
//clrscr();
printf("\nEnter name of 5 persons:");
for(i=0;i<5;i++)
    scanf("%s", names[i]);

printf("\nThe names are:");
for(i=0;i<5;i++)
	printf("\n%s", names[i]);
getch();
}
