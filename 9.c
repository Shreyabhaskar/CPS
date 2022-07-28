//Write a C program to convert from decimal number to binary using while loop.
#include<stdio.h>
void main()
{
    int n,i=1,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%2;
        printf("%d",rem);
        n=n/2;
    }
}