#include<stdio.h>

void Swap(int*, int*);
int Sort(int[], int);
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

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int Sort(int arr[], int size)
{
    int i, j;

    for(i=0; i<size-1; i++)
    for(j=0; j<size-i-1; j++)
        if(arr[j] > arr[j+1])
            Swap(&arr[j], &arr[j+1]);
}

void PrintArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d | ", arr[i]);
    }
}
