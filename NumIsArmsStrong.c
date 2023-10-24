#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }
    if (temp == sum)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);

    return 0;
}