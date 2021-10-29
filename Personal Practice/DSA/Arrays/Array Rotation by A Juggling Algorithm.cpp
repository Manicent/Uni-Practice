#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b % a, a);
}
void rotate(vector<int> &arr, int d)
{
    int n=arr.size();
    d%=n;
    int g = gcd(n, d);
    for(int i=0; i<g; i++)
    {
        int temp=arr[i], j, k;
        for(j=i, k=(j+d)%n; k!=i; j=k, k=(j+d)%n)
            arr[j]=arr[k];
        arr[j]=temp;
    }
}
int main()
{
    int n,d,temp;
    cout<<"Enter the size of array and rotation count:\t";
    cin>>n>>d;
    vector<int> array;
    //Custom Input
    //array.resize(n);
    for(int i=0; i<n; i++)
        //cin>>array[i];
        array.push_back(i+1);     //Comment out if using custom input version
    rotate(array, d);
    cout<<endl;
    for(auto i=array.begin(); i!=array.end(); i++)
        cout<<*i<<" | ";
    return 0;
}