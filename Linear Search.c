#include<stdio.h>

int Search(int[], int, int);

int main()
{
    int arr[30], n, i, e;

    printf("Enter the number of elements (max. 30):\t");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the number to search for:\t");
    scanf("%d", &e);

    int index = Search(arr, n, e);

    (index == -1)   ?   printf("\n\nElement not found.")
                    :   printf("\n\nARR[%d] = %d", index, e);

    return 0;
}

int Search(int arr[], int size, int element)
{
    for(int i=0; i<size; i++)
        if(arr[i] == element)
            return i;

    return -1;
}
