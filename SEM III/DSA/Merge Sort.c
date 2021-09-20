#include<stdio.h>
#include<stdlib.h>

void Sort(int[], int, int);
void Merge(int[], int, int, int);
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

    Sort(arr, 0, n-1);

    printf("\n\nSorted Array:\n");
    PrintArray(arr, n);

    return 0;
}

void Sort(int arr[], int lowLim, int highLim)
{
    if(lowLim < highLim)
    {
        int mid = lowLim+(highLim-lowLim)/2;
        Sort(arr, lowLim, mid);
        Sort(arr, mid+1, highLim);
        Merge(arr, lowLim, mid, highLim);
    }
}

void Merge(int arr[], int lowLim, int mid, int highLim)
{
    int i=lowLim, j= mid+1, k=0, *tempArr = malloc(sizeof *tempArr * (highLim - lowLim + 1));   //Using dynamic allocation since C needs constant values

    while(i<=mid && j<=highLim)
    {
        if(arr[i] < arr[j])
        {
            tempArr[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            tempArr[k] = arr[j];
            k++;
            j++;
        }
    }

    while(i<=mid)
    {
        tempArr[k] = arr[i];
        k++;
        i++;
    }

    while(j<=highLim)
    {
        tempArr[k] = arr[j];
        k++;
        j++;
    }

    for(i=lowLim; i<=highLim; i++)
    {
        arr[i] = tempArr[i-lowLim];
    }

    free(tempArr);
}

void PrintArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d | ", arr[i]);
    }
}
