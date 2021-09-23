#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void Swap(int&, int&);
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

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Sort(int arr[], int size)
{
    for(int i=0; i<size-1; i++)
    for(int j=0; j<size-i-1; j++)
    if(arr[j] > arr[j+1])
        Swap(arr[j], arr[j+1]);
}

void PrintArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" | ";
    }
}
