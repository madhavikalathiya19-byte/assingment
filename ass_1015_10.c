//Compute the GCD of two numbers
#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("Enter a number:-");
   scanf("%d",&a);
   printf("Enter a number:-");
   scanf("%d",&b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("The GCD is %d\n", a);

  return 0;
}
