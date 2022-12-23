#include<stdio.h>
void main()
{
char ch;
//clrscr();
printf("Enter choice:");
scanf("%c",&ch);
if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
{
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	printf("\nIt is vowel");
else
	printf("\nIt is consonant");
}
else
{
if(ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'||ch=='0')
	printf("\nIt is digit");
else
	printf("\n%d",ch);
}
getch();
}
