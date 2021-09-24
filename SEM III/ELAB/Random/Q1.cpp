/*
Q:  Simple Class Addition (Add Two Integers) Example Program in C++
*/

#include<iostream>
#include<math.h>
#define INITIAL_NUM_1 24
#define INITIAL_NUM_2 56

using std::cout;
using std::cin;
using std::endl;

float RoundToDigit(float, int);

class JumpData
{
    private:
    char carName[30];
    int rampLength;
    float carAcc, rWidth, finalV, distCovered;

    public:
    void Input();
    void Calculate();
    void Output();
};

int main()
{
    JumpData car;

    car.Input();
    car.Calculate();
    car.Output();

    return 0;
}

void JumpData::Input()
{
    cout<<"Enter car's name:\t";
    cin>>carName;
    cout<<"Enter ramp's length (as an integer):\t";
    cin>>rampLength;
    cout<<"Enter car's acceleration:\t";
    cin>>carAcc;
    cout<<"Enter river's width:\t";
    cin>>rWidth;
}

void JumpData::Calculate()
{
    finalV = sqrt(2*carAcc*rampLength);

    distCovered = finalV*finalV/9.805;
}

void JumpData::Output()
{
    if(distCovered < rWidth - 5.0)
        cout<<carName<<" will reach a speed of "<<RoundToDigit(finalV, 2)<<" m/s on a "<<rampLength<<" ramp crossing "<<RoundToDigit(distCovered, 1)<<" of "<<RoundToDigit(rWidth, 1)<<" meters, SPLASH!";
    else if(distCovered > rWidth)
        cout<<carName<<" will reach a speed of "<<RoundToDigit(finalV, 2)<<" m/s on a "<<rampLength<<" ramp crossing "<<RoundToDigit(distCovered, 1)<<" of "<<RoundToDigit(rWidth, 1)<<" meters, LIKE A LEGEND!";
    else
        cout<<carName<<" will reach a speed of "<<RoundToDigit(finalV, 2)<<" m/s on a "<<rampLength<<" ramp crossing "<<RoundToDigit(distCovered, 1)<<" of "<<RoundToDigit(rWidth, 1)<<" meters, JOVA MADE IT!";
}

float RoundToDigit(float num, int dCount)
{
    num*=pow(10, dCount);

    num = std::round(num);

    return (num/=pow(10, dCount));
}

