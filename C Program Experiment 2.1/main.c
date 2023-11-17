#include <stdio.h>
#include <stdlib.h>

int main()
{

      // Input values //
    float a, b, c;
    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    // Calculating roots using given  formula //
    float discriminant = sqrt(b*b - 4*a*c);
    float x1 = (-b + discriminant) / (2*a);
    float x2 = (-b - discriminant) / (2*a);

    // Output roots in the specified format//
    printf("%.2f %.2f\n", fmax(x1, x2), fmin(x1, x2));
    printf(" ");
    getch();
}
