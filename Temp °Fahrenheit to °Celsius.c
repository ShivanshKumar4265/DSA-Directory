#include <stdio.h>
int main()
{
    float fahrenheit;
    double celsius;

    printf("Enter The Temp in °F :");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("The Temp In Celsius Is: %0.2f°C\n", celsius);
    return 0;
}