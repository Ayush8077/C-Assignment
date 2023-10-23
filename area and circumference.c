#include<stdio.h>
 int main()
  {
 
   int rad;
   float PI = 3.14, area, circumference;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &rad);
 
   area = PI * rad * rad;
   printf("\nArea of circle : %f ", area);
 
   circumference = 2 * PI * rad;
   printf("\nCircumference : %f ", circumference);
 
  return 0;
}