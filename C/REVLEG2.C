/* pgm to reverse a string without builtin function and pointers */

#include<stdio.h>
#include<conio.h>

void main()
{
	char str[100], reversed[100]; int i = 0, j = 0, len = 0;
	clrscr();
	printf("<< STRING REVERSER >> \n");
	printf("\nEnter a string: ");
	gets(str);
	// count the length of input string
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	clrscr();
	printf("\nThe length of entered string is %d. \n", len);
	i = 0;
	// reverse the string
	for (j = len - 1; j >= 0; j--)
	{
		reversed[i] = str[j];
		i++;
	}
	// append null character
	reversed[len] = '\0';
	printf("The reversed string is %s", reversed);
	getch();
}