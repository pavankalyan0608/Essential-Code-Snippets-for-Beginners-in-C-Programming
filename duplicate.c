//Remove duplicate Elements from a given array
Input:-
Enter number of elements: 8
Enter the elements:2 3 2 5 3 4 5 6

output:-2
3
5
4
6


#include <stdio.h>

int main() {
    int a[20], b[20];
    int i, j, k = 0, n;
    
    // Read the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Remove duplicates
    for (i = 0; i < n; i++) {
        int isDuplicate = 0;

        // Check if a[i] is already in b[]
        for (j = 0; j < k; j++) {
            if (a[i] == b[j]) {
                isDuplicate = 1;
                break;
            }
        }

        // If not duplicate, add to b[]
        if (!isDuplicate) {
            b[k++] = a[i];
        }
    }

    // Print unique elements
    printf("Unique elements:\n");
    for (i = 0; i < k; i++) {
        printf("%d\n", b[i]);
    }

    return 0;
}
