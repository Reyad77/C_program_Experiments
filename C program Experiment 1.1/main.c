#include <stdio.h>


int main()
{
    int first, second, third, sum, product, average;
    printf("PLease enter three integers : ");
    scanf("%d %d %d", &first, &second, &third);

    sum = first + second + third;                                  //Calculate the sum//
    product = first * second * third;                             //Calculate the product//
    average = (first + second + third) / sum;             //Calculate the average//

    printf("The sum number is : %d + %d + %d = %d \n", first, second, third, sum);
    printf("The product number is : %d * %d * %d = %d \n", first, second, third, product);
    printf("The average number is : (%d + %d + %d) / %d = %d", first, second, third, sum, average);

    getch();
}
