#include<stdio.h>
int main()
{
  int i,j,k,m;
  for(i=1;i<=4;i++)
  {
     for(j=0;j<4-i;j++)
     {
       printf(" ");
     }
     for(k=1;k<=i;k++)
     {
       printf("%d",k);
     }
     for(m=i-1;m>=1;m--)
     {
      printf("%d",m);
      }
      printf("\n");
}
}