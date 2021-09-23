#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void Sort(int[], int);
void PrintArray(int[], int);

int main()
{
    int arr[30], n, i;

    cout<<"Enter the number of elements (max. 30):\t";
    cin>>n;

    cout<<"\nEnter "<<n<<" elements:"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\n\nUnsorted Array:"<<endl;
    PrintArray(arr, n);

    Sort(arr, n);

    cout<<"\n\nSorted Array:"<<endl;
    PrintArray(arr, n);

    return 0;
}

void Sort(int arr[], int size)
{
    for(int i=0, j, n; i<size; i++)
    {
        j = i-1, n = arr[i];

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
        cout<<arr[i]<<" | ";
    }
}
