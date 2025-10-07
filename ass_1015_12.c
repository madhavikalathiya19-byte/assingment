//Concatenate two strings
#include <stdio.h>
#include <string.h>
int main()
{
  char str1[30] = "Hello ";
  char str2[20] = "Mirali!";
  strcat(str1, str2);
  printf("\n Concatenated String: %s\n", str1);
  return 0;
}
