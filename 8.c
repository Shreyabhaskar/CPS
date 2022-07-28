//Write a program in C to find whether the given number is an Armstrong number or not.
#include<stdio.h>
void main()
{
    int n,temp,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        sum=sum+(n%10)*(n%10*n%10);
        n=n/10;
    }
    if(temp==sum)
    {
        printf("%d is an Armstrong number",temp);
    }
    else
    {
        printf("%d is not an Armstrong number",temp);
    }
}