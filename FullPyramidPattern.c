#include <stdio.h>
int main() {
    int rows, space, star;
    printf("Enter the No of rows: \n");
    scanf("%d",&rows);
    for (int i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for (star = 1; star <= 2 * i - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}