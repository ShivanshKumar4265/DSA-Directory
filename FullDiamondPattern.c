#include <stdio.h>
void printDiamond(int n)
{
	int space = n - 1;
	for (int i = 0; i < n; i++)
	{
        for (int j = 0; j < space; j++)
			printf(" ");

		for (int j = 0; j <= i; j++)
			printf("* ");

		printf("\n");
		space--;
	}
	// Bottom Half Of Diamond
	space = 0;
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < space; j++)
			printf(" ");

		for (int j = 0; j < i; j++)
			printf("* ");

		printf("\n");
		space++;
	}
}

int main()
{   int rows;
    printf("enter the number of rows:\n");
    scanf("%d",&rows);
	printDiamond(rows);
	return 0;
}
