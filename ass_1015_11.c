// Count vowels in a string
#include<stdio.h>
int main()
{   
  char str[50];
  int i,v=0;
  printf("\n Enter str :");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i] =='a'||str[i] =='e' ||str[i] =='i' ||str[i] =='o' ||str[i] =='u')
    {
      v++;
    }
  }
  printf("\n Vowels = %d",v);  
   return 0;
}
