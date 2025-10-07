//Check whether a number is Armstrong
#include<stdio.h>
int main()
{
  int n,a,num,arm=0;
  printf("Enter a value of N :- ");
  scanf("%d", &n);
  a=n;
  for(;n != 0; n=n/10)
 {
  num = n%10;
  arm = (num*num*num)+arm;
 }
 if( arm == a)
 {
   printf(" %d is Armstrong number ",arm);
 }
 else
 {
   printf(" %d is not Armstrong number ",arm);
 }
 return 0;
}
