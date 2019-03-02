/* pgm to solve a given quadratic equation */

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	double a, b, c, d, x1, x2, real, imaginary;
	clrscr();
	printf("Enter the required co-efficients: \n\na: ");
	scanf("%lf", &a);
	printf("b: ");
	scanf("%lf", &b);
	printf("c: ");
	scanf("%lf", &c);

	d = (b * b) - (4 * a * c);

	if (d == 0)
	{
		printf("\nThere are real and equal roots.");
		x1 = b / (2 * a);
		x2 = x1;
		printf("\n\nx1: %lf", x1);
		printf("\nx2: %lf", x2);
	}
	else if (d > 0)
	{
		printf("\nThere are real roots.");
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("\n\nx1: %lf", x1);
		printf("\nx2: %lf", x2);
	}
	else
	{
		printf("\nThere are imaginary roots.");
		real = (-b) / (2 * a);
		imaginary = sqrt(-d) / (2 * a);
		printf("\n\nx1 = %lf + %lfi \nx2 = %lf - %lfi", real, imaginary, real, imaginary);
	}
	getch();
}