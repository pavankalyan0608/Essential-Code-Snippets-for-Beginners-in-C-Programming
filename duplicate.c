//Remove duplicate Elements from a given array
#include<stdio.h>

int main()
{
    int a[20], b[20], i, j, k = 0, n, count = 0;
    scanf_s("%d", &n);
    for (i = 0;i < n;i++)
        scanf_s("%d", &a[i]);
    for (i = 0;i < n;i++)
    {

        for (j = 0;j < i;j++)
        {
            if (a[i] == b[j])

            {
                break;
            }

        }

        if (j == i)
        {
            b[k] = a[i];
            k++;
            count++;


        }
    }



    for (i = 0;i < count;i++)

        printf("%d\n", b[i]);





    return 0;
}