//Write a program that accepts a number from 1 to 10. Print whether the number is even or odd using switch case construct.
#include <stdio.h>

void main()
{
    int num;

    printf("Enter any number to check even or odd: ");
    scanf("%d", &num);

    switch(num % 2)
    {
        case 0: 
            printf("Number is Even");
            break;

                case 1: 
            printf("Number is Odd");
            break;
    }

}