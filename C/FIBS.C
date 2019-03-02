/* pgm to print fibonacci sequence */

#include<stdio.h>
#include<conio.h>

void main()
{
	int a= 0, b = 1, c = 0, n = 0, i = 0;
	clrscr();
	printf("Enter no. of terms: ");
	scanf("%ld", &n);

	printf("%ld\n", a);
	printf("%ld\n", b);
	if (n > 1)
	{
		for (i = 0; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
			printf("%ld\n", c);
		}
	} else {
		printf("Can't generate fibs!");
	}
	getch();
}