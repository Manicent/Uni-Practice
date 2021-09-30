#include<stdio.h>

void Swap(int*, int*);
void Sort(int[], int); //Bubble Sort
void PrintArray(int[], int);
int Search(int[], int, int, int);

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

    //Sorting to proceed with Binary Search
    Sort(arr, n);

    //Printing to provide a reference for Binary Search result
    printf("\nAfter after sorting:\n");
    PrintArray(arr, n);

    printf("\nEnter the number to search for:\t");
    scanf("%d", &e);

    int index = Search(arr, 0, n-1, e);

    (index == -1)   ?   printf("\n\nElement not found.")
                    :   printf("\n\nARR[%d] = %d", index, e);

    return 0;
}

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Sort(int arr[], int size)
{
    int i, j;

    for(i=0; i<size; i++)
    for(j=0; j<j-i-1; j++)
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

int Search(int arr[], int lowLim, int highLim, int element)
{
    int mid = lowLim + (highLim - lowLim) / 2;
    
    if(arr[mid] == element)
        return mid;

    if(arr[mid] > element)
        return Search(arr, lowLim, mid, element);

    if(arr[mid] < element)
        return Search(arr, mid+1, highLim, element);

    return -1;
}