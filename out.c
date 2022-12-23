#include <stdio.h>
#include <conio.h>
void main()
{
char name[19]="Lok Prakash Pandey";
//clrscr();
printf("%19s\n", name);
printf("%10s\n", name);
printf("%19.11s\n", name);
printf("%19.0s\n", name);
printf("%-19.11s\n", name);
printf("%.3s\n", name);
printf("%s\n", name);
getch();
}

