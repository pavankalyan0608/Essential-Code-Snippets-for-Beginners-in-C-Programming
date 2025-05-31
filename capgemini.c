//Pattern
////Input:5
////output:-
////1
////26
////378
////491011
//512131415




#include<stdio.h>

int main()
{
    int i, j, n, k;
    scanf_s("%d", &n);
    k = n + 1;
    for (i = 1;i <= n;i++)
    {
        for (j = 1;j <= i;j++)
        {
            if (j == 1)
            {
                printf("%d", i);
            }
            else
            {
                printf("%d", k);
                k++;
            }
        }

        printf("\n");
    }


    return 0;
}