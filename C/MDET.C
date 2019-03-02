/* pgm to find the determinant of two matrices */

#include<stdio.h>
#include<conio.h>

void main()
{
	int matrixA[3][3], det = 0, det1 = 0;
	int i, j;
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

	// calculate the determinant
	det = matrixA[0][0] * (matrixA[1][1] * matrixA[2][2] - matrixA[2][1] * matrixA[1][2]) - matrixA[0][1] * (matrixA[1][0] * matrixA[2][2] - matrixA[2][0] * matrixA[1][2]) + matrixA[0][2] * (matrixA[1][0] * matrixA[2][1] - matrixA[2][0] * matrixA[1][1]);
	printf("The determinant value is %d.", det);
	getch();
}