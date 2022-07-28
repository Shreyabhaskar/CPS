//Write a program in C to read 10 numbers from keyboard and find their sum and average using while loop.
#include<stdio.h>
void main()
{
    int i,sum=0,n=10,nu=1;
    while(n>0)
    {
        printf("Enter the element %d: ",nu);
        scanf("%d",&i);
        sum=sum+i;
        n--;
        nu++;
    }
    printf("Sum of the elements: %d\n",sum);
    printf("Average of the elements: %f\n",(float)sum/10);
}