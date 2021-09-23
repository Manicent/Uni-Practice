#include<stdio.h>

void Sort(int[], int);
void PrintArray(int[], int);

int main()
{
    int arr[30], n, i;

    printf("Enter the number of elements (max. 30):\t");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n\nUnsorted Array:\n");
    PrintArray(arr, n);

    Sort(arr, n);

    printf("\n\nSorted Array:\n");
    PrintArray(arr, n);

    return 0;
}

void Sort(int arr[], int size)
{
    for(int i=0, j, n; i<size; i++)
    {
        n = arr[i], j = i-1;

        while(j>=0 && arr[j] > n)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = n;
    }
}

void PrintArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d | ", arr[i]);
    }
}
