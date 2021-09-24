/*
Q:  C++ program to make a Calculator using Class
*/

#include<iostream>
#include<stdlib.h>
#define INITIAL_NUM_1 24
#define INITIAL_NUM_2 56

using std::cout;
using std::cin;
using std::endl;

class CalcData
{
    private:
    int a, b, result;

    public:
    CalcData() {};
    CalcData(int n1, int n2) : a(n1), b(n2) {};
    void Input();
    static int ShowMenu();
    void Calculate(int);
    void Display();
};

int main()
{
    //Using Constructor
    cout<<"Using Constructor"<<endl;
    CalcData obj = CalcData(INITIAL_NUM_1, INITIAL_NUM_2);

    obj.Calculate(CalcData::ShowMenu());
    obj.Display();

    //Using Input Function
    cout<<endl<<"Using Input Function"<<endl;
    obj.Input();
    obj.Calculate(CalcData::ShowMenu());
    obj.Display();

    return 0;
}

void CalcData::Input()
{
    cout<<"Enter the two integers:\t";
    cin>>a>>b;
}

int CalcData::ShowMenu()
{
    cout<<"Enter the corresponding number to perform that operation!"<<endl;
    cout<<"1\t|\tAdd"<<endl;
    cout<<"2\t|\tSubtract"<<endl;
    cout<<"3\t|\tMultiply"<<endl;
    cout<<"4\t|\tDivide"<<endl;
    cout<<"5\t|\tRemainder"<<endl;

    int ch;
    cin>>ch;

    if(ch>=1 && ch<=5)
        return ch;
    else
    {
        cout<<"Invalid option chosen. Exiting...";
        exit(0);
    }
}

void CalcData::Calculate(int op)
{
    switch(op)
    {
        case 1:
            result = a+b;
            break;
        case 2:
            result = a-b;
            break;
        case 3:
            result = a*b;
            break;
        case 4:
            result = a/b;
            break;
        case 5:
            result = a%b;
            break;
    }
}

void CalcData::Display()
{
    cout<<"The result of the operation was "<<result<<"."<<endl;
}