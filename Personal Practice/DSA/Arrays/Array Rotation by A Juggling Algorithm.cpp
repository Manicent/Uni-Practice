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
    int n,d;
    cout<<"Enter the size of array and rotation count:\t";
    cin>>n>>d;
    vector<int> arr;
    //Custom Input
    //arr.resize(n);
    for(int i=0; i<n; i++)
        //cin>>arr[i];
        arr.push_back(i+1);     //Comment out if using custom input version
    rotate(arr, d);
    cout<<endl;
    for(auto i=arr.begin(); i!=arr.end(); i++)
        cout<<*i<<" | ";
    return 0;
}