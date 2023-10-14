#include <stdio.h>

int main()
{
    int celcius;
    float fahrenheit;
    printf("enter a Celcius temperature: ");
    scanf("%d", &celcius);
    fahrenheit= (celcius * 9/5) + 32;
    printf("The Fahrenheit temperature is : (%d * 9/5) + 32 = %.3f", celcius, fahrenheit);
    getch();
}
