// Convert Fahrenheit to Celsius
#include<stdio.h>
int main()
{
  float fahrenheit,celsius;
  printf("Fahrenheit:-");
  scanf("%f",&fahrenheit);
  celsius = (fahrenheit - 32 ) * 5.0 / 9.0;
  printf("Celsius = %.2f \n",celsius);
  printf("\n *Fahrenheit to Celsius* \n");
  printf("%f Fahrenheit = %f Celsius ", fahrenheit, celsius);
  return 0;
}
