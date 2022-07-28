//Write a program in C to display the cube of the number up to given an integer using do...while loop.
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%d\n",i*i*i);
        i++;
    }while(i<=n);
}