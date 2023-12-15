#include <stdio.h>
int main()
{
    int x, y, z;
   // Input three integers //
    printf("Enter three integers: ");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    // Sort the integers
    int temp;
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z) {
        temp = x;
        x = z;
        z = temp;
    }
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }

    // Output the sorted integers //
    printf("Sorted integers: %d %d %d\n", x, y, z);

    getch();
}
