//Write a C program to:

//Accept an array of integers from the user.

//Find the frequency of each unique element.

//Sort and display the elements in descending order of their frequency.

//If two elements have the same frequency, maintain the order based on their original descending sorted order.

//Example:- Input 6
//               2 3 2 5 3 2
  //        output:-2 3 5


#include<stdio.h>
int main()
{
    int a[20], b[10][10], count[10];
    int i, j, n, k, temp, temp1, temp2;
    //Get the array
    scanf_s("%d", &n);
    for (i = 0;i < n;i++)
    {
        scanf_s("%d", &a[i]);
        count[i] = 0;
    }
    //sort the array in descending order
    for (i = 0;i < n;i++)
    {
        for (j = i;j < n;j++)
        {
            if (a[i] < a[j])
            {
                temp2 = a[j];
                a[j] = a[i];
                a[i] = temp2;
            }

        }
        for (k = 0;k < n;k++)
        {
            printf("%d ", a[k]);
        }
        printf("\n");
    }

    //find the frequnecy of elements in array
    //store the frequnecy in the new array
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < n;j++)
        {
            if (a[i] == a[j])
            {
                count[i]++;
            }
        }
    }
    //create a matrix to store frequnecy of element against the element
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < 2;j++)
        {
            if (j == 0)
                b[i][j] = a[i];
            else
                b[i][j] = count[i];
        }
    }

    for (i = 0;i < n;i++)
    {
        for (j = 0;j < 2;j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    // sort the matrix based on  frequnecy of element 
    for (i = 0;i < n;i++)
    {
        for (k = i;k < n;k++)
        {
            if (b[i][1] < b[k][1])
            {
                temp = b[k][1];
                b[k][1] = b[i][1];
                b[i][1] = temp;
                temp1 = b[k][0];
                b[k][0] = b[i][0];
                b[i][0] = temp1;
            }
        }
    }
    //print the array with highest frequnecy in descending order
    for (i = 0;i < n;i++)
    {
        printf("%d\n", b[i][0]);
    }
    return 0;
}
