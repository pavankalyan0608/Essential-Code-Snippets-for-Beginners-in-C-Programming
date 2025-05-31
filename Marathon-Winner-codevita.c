/////https://theinquisitive.in/questions/Codevita-Previous-Questions/Marathon-Winner

//https://theinquisitive.in/questions/Codevita-Previous-Questions/Marathon-Winner
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i, j, n, k, max = 0, winner = 0, win = 0;
    int a[10][15];
    int count[10];int b[10];
    scanf_s("%d\n%d", &n, &k);
    printf("enter elements");
    for (i = 0;i < n;i++)
    {
        for (j = 0;j <= k;j++)
        {
            scanf_s("%d", &a[i][j]);
        }
        printf("\n");
        b[i] = 0;
        count[i] = 0;
    }
    for (j = 0;j < k;)
    {
        if ((j + 1) < k)
        {
            for (i = 0;i < n;i++)
            {
                b[i] = ((a[i][j] * a[i][k]) + (a[i][j + 1] * a[i][k]));
                printf("%d\t", b[i]);
            }
            printf("\n");
        }
        max = b[0];
        for (i = 0;i < n;i++)
        {
            if (b[i] > max)
            {
                max = b[i];
            }

        }
        printf("%d\n", max);
        for (i = 0;i < n;i++)
        {
            if (max == b[i])
            {
                count[i]++;


            }
            printf("%d\t%d", i, count[i]);
            printf("\n");
        }
        j = j + 2;
    }
    win = count[0];
    for (i = 0;i < n;i++)
    {
        if (count[i] > win)
        {
            win = count[i];
        }
    }
    for (i = 0;i < n;i++)
    {
        if (count[i] == win)
        {
            winner = i;
            printf("%d", winner);
            printf("\n");

        }
    }



    return 0;
}