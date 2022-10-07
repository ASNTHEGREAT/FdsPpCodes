#include<iostream>
using namespace std;

float CtF(float a);
float FtC(float b);


int main()
{
    char T;
    cout<<"To convert Fahrenheit to Celsius press C \nand to convert Celsius to Fahrenheit press F: ";
    cin>>T;
    int t;
    if (T=='C' || T=='c')
    {
        t = 1;
    }
    else if (T=='F' || T=='f')
    {
        t=2;
    }
    else
    {
        t=-1;
    }
    switch (t)
    {
    case 1:
        float C;
        cout<<"Enter temperature in celcius: ";
        cin>>C;
        cout<<C<<" in Farenheit is : "<<CtF(C);
        break;
    case 2:
        float F;
        cout<<"Enter temperature in Farenheit: ";
        cin>>F;
        cout<<F<<" in Celcius is : "<<FtC(F);
        break;
    default:
        cout<<"Please enter either F or C";
        break;
    }
    return 0;
}

float CtF(float a)
{
    return ((9/5)*a)+32;
}
float FtC(float b)
{
    return 5 * (b - 32) / 9;
}