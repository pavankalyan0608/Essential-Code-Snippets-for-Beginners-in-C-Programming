
// Question:-  C Program to find the difference between  the second max digit and second min digit in a given number
 //Condition:- Could not use any other variable to store the given Number.
//Example:-
//input:1234
//output:3-2=1
#include<stdio.h>

int main()
{
    int n;
     printf("Enter a number : ");
    scanf_s("%d", &n);
    int max, min, max2, min2, temp, rem;
    max = n % 10;
    min = n % 10;
    n = n / 10;
    max2 = n % 10;
    min2 = n % 10;
    while (n)
    {
        if (max2 > max)
        {
            temp = max;
            max = max2;
            max2 = temp;
        }
        rem = n % 10;
        if (rem > max)
        {
            max2 = max;
            max = rem;
        }
        else if (rem > max2 && rem < max)
        {
            max2 = rem;
        }
        if (min2 < min)
        {
            temp = min;
            min = min2;
            min2 = temp;
        }
        rem = n % 10;
        if (rem < min)
        {
            min2 = min;
            min = rem;
        }
        else if (rem<min2 && rem>min)
        {
            min2 = rem;
        }
        n = n / 10;
    }
    printf("%d\n", max2);
    printf("%d\n", min2);
    printf("%d", (max2 - min2));




    return 0;
}
