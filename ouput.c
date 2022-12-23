#include <stdio.h>
#include <conio.h>
void main()
{
char name[30];
//clrscr();
printf("\nEnter your full name:");
scanf("%[^\n]", name);
printf("\nYour name is %s", name);
getch();
}

