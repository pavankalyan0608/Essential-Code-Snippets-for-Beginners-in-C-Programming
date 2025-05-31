// find the interview question to find minmum gifts  https://www.codingninjas.com/studio/library/minimum-gifts
#include<stdio.h>

int main()
{
    int i, T, N, Gift;
    int a[100000];
    int b[100000];
    scanf_s("%d", &T);
    scanf_s("%d", &N);
    printf("%d\n%d", T, N);
    for (i = 0;i < N;i++)
    {
        scanf_s("%d", &a[i]);
        b[i] = 1;
    }
    for (i = 0;i < N;i++)
    {
        printf("%d ", b[i]);

    }
    printf("\n");
    for (i = 0;i < N;i++)
    {
        if (a[i] > a[i + 1] && (i + 1) < N)
        {
            b[i]++;
        }
    }
    for (i = 0;i < N;i++)
    {
        printf("%d ", b[i]);

    }

    Gift = 0;
    for (i = 0;i < N;i++)
    {
        Gift = Gift + b[i];
    }
    printf("%d\n", Gift);

    return 0;
}
