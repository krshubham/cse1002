#include <stdio.h>

int main(int argc, char const *argv[])
{
	int rows1,cols1,i,j,rows2,cols2;
	int mat1[10][10];
	int mat2[10][10];
	int mat3[10][10];
	printf("Enter the number of rows of mat1: ");
	scanf("%d",&rows1);
	printf("Enter the number of rows of mat1: ");
	scanf("%d",&cols1);
	for (i = 0; i < rows1; ++i)
	{
		for ( j = 0; j < cols1; ++j)
		{
			printf("Enter the element [%d][%d]: ",i+1,j+1);
			scanf("%d",&mat1[i][j]);
		}
	}


	for (i = 0; i < rows1; ++i)
	{
		for ( j = 0; j < cols1 ; ++j)
		{
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}


	printf("Enter the number of rows of mat2: ");
	scanf("%d",&rows2);
	printf("Enter the number of rows of mat2: ");
	scanf("%d",&cols2);
	for (i = 0; i < rows2; ++i)
	{
		for ( j = 0; j < cols2; ++j)
		{
			printf("Enter the element [%d][%d]: ",i+1,j+1);
			scanf("%d",&mat2[i][j]);
		}
	}


	for (i = 0; i < rows2; ++i)
	{
		for ( j = 0; j < cols2 ; ++j)
		{
			printf("%d\t",mat2[i][j]);
		}
		printf("\n");
	}



	for (i = 0; i < rows1; ++i)
	{
		for ( j = 0; j < cols1; ++j)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}

	printf("\n");
	printf("\n");


	for (i = 0; i < 3; ++i)
	{
		for ( j = 0; j < 3 ; ++j)
		{
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}

	return 0;
}