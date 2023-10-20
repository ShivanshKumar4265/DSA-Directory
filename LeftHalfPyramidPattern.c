#include <stdio.h>
int main() {
    int rows;
    printf("Enter the No of rows: \n");
    scanf("%d",&rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 2 * (rows - i); j >= 0; j--) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}