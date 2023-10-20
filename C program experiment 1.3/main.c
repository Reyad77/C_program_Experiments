#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    printf("enter a Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    celcius = 5 * (fahrenheit-32)/9;
    printf("The celsius temperature is :  5* (%f - 32) / 9 = %.3f ", fahrenheit, celcius);
    getch();
}
