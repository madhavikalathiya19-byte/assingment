//Count consonants in a string
#include<stdio.h>
int main()
{   
  char str[50];
  int i,c=0;
  printf("\n Enter str :");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i] =='b'||str[i] =='c' ||str[i] =='d' ||str[i] =='f' ||str[i] =='g'||str[i] =='h'||str[i] =='j' ||str[i] =='k' ||str[i] =='l' ||str[i] =='m'||str[i] =='n'||str[i] =='p' ||str[i] =='q' ||str[i] =='r' ||str[i] =='s'||str[i] =='t'||str[i] =='v' ||str[i] =='w' ||str[i] =='x' ||str[i] =='y' || str[i] =='z')
    {
      c++;
    }
  }
  printf("\n C = %d",c);  
   return 0;
}
