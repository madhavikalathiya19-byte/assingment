// Search for an element in an array
#include<stdio.h>
int main()
{
   int a[1000],n,i,s,f=0;
    printf("\n Enter array size :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
      printf("\n Enter value of a[%d] : ",i);
      scanf("%d",&a[i]);
    }
  printf("Enter Element  number:-");
  scanf("%d",&s);
  
  for(i=0;i<n;i++)
  {
     if(s==a[i])
     {
        printf("Element %d found at index %d \n",s,i);
        f=1;
        break;
     }
   }
      if(!f)
      {
        printf("Element %d not found \n",s);
      }
 return 0;
}
