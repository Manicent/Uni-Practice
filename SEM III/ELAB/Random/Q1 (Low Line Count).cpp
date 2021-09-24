#include<iostream>
#include<math.h>
using namespace std;
float RoundToDigit(float num, int dCount) { return std::round(num*pow(10, dCount))/pow(10, dCount);}
main()
{
    char carName[30];
    int rampLength;
    float carAcc, rWidth, finalV, distCovered;
    cin>>carName>>rampLength>>carAcc>>rWidth;
    finalV = sqrt(2*carAcc*rampLength), distCovered = finalV*finalV/9.805;
    if(distCovered < rWidth - 5.0)
        cout<<carName<<" will reach a speed of "<<RoundToDigit(finalV, 2)<<" m/s on a "<<rampLength<<" ramp crossing "<<RoundToDigit(distCovered, 1)<<" of "<<RoundToDigit(rWidth, 1)<<" meters, SPLASH!";
    else if(distCovered > rWidth)
        cout<<carName<<" will reach a speed of "<<RoundToDigit(finalV, 2)<<" m/s on a "<<rampLength<<" ramp crossing "<<RoundToDigit(distCovered, 1)<<" of "<<RoundToDigit(rWidth, 1)<<" meters, LIKE A LEGEND!";
    else
        cout<<carName<<" will reach a speed of "<<RoundToDigit(finalV, 2)<<" m/s on a "<<rampLength<<" ramp crossing "<<RoundToDigit(distCovered, 1)<<" of "<<RoundToDigit(rWidth, 1)<<" meters, JOVA MADE IT!";
}


