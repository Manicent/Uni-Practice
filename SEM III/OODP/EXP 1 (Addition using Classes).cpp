/*
Q:  Simple Class Addition (Add Two Integers) Example Program in C++
*/

#include<iostream>
#define INITIAL_NUM_1 24
#define INITIAL_NUM_2 56

using std::cout;
using std::cin;
using std::endl;

class AddData
{
    private:
    int a, b, result;

    public:
    AddData() {};
    AddData(int n1, int n2) : a(n1), b(n2) {};
    void Input();
    void Add();
    void Display();
};

int main()
{
    //Using Constructor
    cout<<"Using Constructor"<<endl;
    AddData obj = AddData(INITIAL_NUM_1, INITIAL_NUM_2);

    obj.Add();
    obj.Display();

    //Using Input Function
    cout<<std::endl<<"Using Input Function"<<endl;
    obj.Input();
    obj.Add();
    obj.Display();

    return 0;
}

void AddData::Input()
{
    cout<<"Enter the two integers:\t";
    cin>>a>>b;
}

void AddData::Add()
{
    result = a+b;
}

void AddData::Display()
{
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<result<<"."<<endl;
}
