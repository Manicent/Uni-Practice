#include<stdio.h>

void Swap(int*, int*);
int Sort(int[], int); //Bubble Sort
void PrintArray(int[], int);
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

    //Sorting to proceed with Binary Search
    Sort(arr, n);

    //Printing to provide a reference for Binary Search result
    printf("\nAfter after sorting:\n");
    PrintArray(arr, n);

    printf("\nEnter the number to search for:\t");
    scanf("%d", &e);

    int index = Search(arr, n, e);

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

int Sort(int arr[], int size)
{
    int i, j;

    for(i=0; i<size-1; i++)
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

int Search(int arr[], int size, int element)
{
    int u = size-1, l = 0, mid;

    while(u >= l)
    {
        mid = l + (u - l) / 2;

        if(arr[mid] == element)
            return mid;
        
        if(arr[mid] > element)
            u = mid-1;
        else
            l = mid+1;
    }

    return -1;
}

//TEST COMMENT