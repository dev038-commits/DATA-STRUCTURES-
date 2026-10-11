#include <stdio.h>

int main()
{
    int a[5];
    int i, j, temp;
     for(i = 0; i < 5; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    // Bubble Sort
    for(i = 0; i < 5 - 1; i++)
    {
        for(j = 0; j < 5 - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                // Swap
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    printf("Sorted array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
