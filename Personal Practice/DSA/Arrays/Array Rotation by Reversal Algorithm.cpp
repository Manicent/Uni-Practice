#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void rotate(vector<int> &arr, int d)
{
    //Note to self - Second argument of reverse() in excluded
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(), arr.end());
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