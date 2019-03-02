/* pgm to convert a string to uppercase */

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[100];
	clrscr();
	printf("Enter a string: ");
	gets(str);
	strcpy(str, strupr(str));
	printf("The uppercase string is %s.", str);
	getch();
}