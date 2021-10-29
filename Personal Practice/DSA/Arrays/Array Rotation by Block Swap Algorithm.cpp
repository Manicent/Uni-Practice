#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//Tried to implement the algorithm by myself
void rotate(vector<int> &arr, int d, int end, int start=0)
{
    if(start+d==end-d)
    {
        swap_ranges(arr.begin()+start, arr.begin()+start+d, arr.begin()+end-d);
        return;
    }
    if(start+d<end-d)
    {
        swap_ranges(arr.begin()+start, arr.begin()+start+d, arr.begin()+end-d);
        rotate(arr, d, end-d, start);
    }
    else
    {
        swap_ranges(arr.begin()+start+d, arr.begin()+end, arr.begin()+start);
        rotate(arr, 2*d-(end-start), end, end-d);
    }
}
int main()
{
    int n,d,temp;
    cout<<"Enter the size of array and rotation count:\t";
    cin>>n>>d;
    vector<int> arr;
    //Custom Input
    //arr.resize(n);
    for(int i=0; i<n; i++)
        //cin>>arr[i];
        arr.push_back(i+1);     //Comment out if using custom input version
    rotate(arr, d, n);
    cout<<endl;
    for(auto i=arr.begin(); i!=arr.end(); i++)
        cout<<*i<<" | ";
    return 0;
}