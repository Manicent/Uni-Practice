#include<iostream>
#include<math.h>
using namespace std;
float RoundToDigit(float n, int c) { return round(n*pow(10, c))/pow(10, c);}
main()
{
    char n[30];
    int r;
    float a, w, v, c;
    cin>>n>>r>>a>>w;
    v = sqrt(2*a*r), c = v*v/9.805;
    if(c < w - 5.0)
        cout<<n<<" will reach a speed of "<<RoundToDigit(v, 2)<<" m/s on a "<<r<<" ramp crossing "<<RoundToDigit(c, 1)<<" of "<<RoundToDigit(w, 1)<<" meters, SPLASH!";
    else if(c > w)
        cout<<n<<" will reach a speed of "<<RoundToDigit(v, 2)<<" m/s on a "<<r<<" ramp crossing "<<RoundToDigit(c, 1)<<" of "<<RoundToDigit(w, 1)<<" meters, LIKE A LEGEND!";
    else
        cout<<n<<" will reach a speed of "<<RoundToDigit(v, 2)<<" m/s on a "<<r<<" ramp crossing "<<RoundToDigit(c, 1)<<" of "<<RoundToDigit(w, 1)<<" meters, JOVA MADE IT!";
}