/* pgm to add two matrices */

#include<stdio.h>
#include<conio.h>

void main()
{
	int matrixA[3][3], matrixB[3][3], matrixC[3][3];
	int i, j, k;
	clrscr();

	printf("Enter values for Matrix A:\n");
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter value for A%d%d: ", i + 1, j + 1);
			scanf("%d", &matrixA[i][j]);
		}
	}

	printf("\nEnter values for Matrix B:\n");
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter value for B%d%d: ", i + 1, j + 1);
			scanf("%d", &matrixB[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			matrixC[i][j] = 0;
			for (k = 0; k < 3; k++)
			{
				matrixC[i][j] = matrixA[i][k] + matrixB[k][j];
			}
		}
	}

	printf("\nResultant Matrix:\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", matrixC[i][j]);
		}
		printf("\n");
	}
	getch();
}