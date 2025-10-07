//Convert meters to centimeters
/*
 1 meter = 100 centimeter
*/
#include<stdio.h>
int main()
{
  float meter,centimeter;
  printf(" meter :");
  scanf("%f",&meter);
  centimeter = meter * 100;
  printf("centimeter = %.2f \n",centimeter);
  printf("\n *Meter to Centimeter* \n");
  printf(" %f Meter = %f Centimeter ",meter, centimeter);
  return 0;
}
