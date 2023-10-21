#include <stdio.h>
int main()
{
	int rows;
    printf("Enter the No of rows: \n");
    scanf("%d",&rows);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows - i; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
