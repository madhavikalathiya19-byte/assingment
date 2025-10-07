//Multiply two matrices
#include<stdio.h>
int main()
{
  int r,c,i,j,a[100][100],b[100][100],sum[100][100];
  printf("Enter number of row:-");
  scanf("%d",&r);
  printf("Enter number of col:-");
  scanf("%d",&c);
  
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
     printf("\n Enter a value of a[%d][%d]:-",i,j);
     scanf("%d",&a[i][j]);
    }
  }
  
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
     printf("\n Enter a value of b[%d][%d]:-",i,j);
     scanf("%d",&b[i][j]);
    }
  }
  
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
   {
    sum[i][j] = a[i][j] * b[i][j];
   }
  }
  
   printf("\n a matrix \n");
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    {
     printf(" %d",a[i][j]);
    }
    printf(" \n");
  }
  
  printf("\n b matrix \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
     printf(" %d",b[i][j]);
    }
    printf(" \n");
  }
  
  printf("\n sum matrix \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
      printf(" %d",sum[i][j]);
    }
    printf(" \n");
  }
  return 0;
}
