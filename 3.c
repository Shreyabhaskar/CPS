//Develop a program to implement Pascal’s Tringle
#include<stdio.h>
void main()
{
  int i,j,n=4;
  for(i=1;i<=n;i++)
  {
    printf("\n");
    for(j=1;j<=(n-i);j++)
    {
        printf("  ");
    }
    for(j=1;j<=i;j++)
    {
        printf(" %d",j);
    }
    for(j=1;j<i;j++)
    {
        printf(" %d",(i-j));
    }
  }
}