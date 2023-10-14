#include <stdio.h>
int main()
{
  char upper;
  printf("Please enter any uppercase letter :  ");
  scanf("%c", &upper);
  printf("The corresponding lowercase letter is : %c", upper+32);
  getch();
}
