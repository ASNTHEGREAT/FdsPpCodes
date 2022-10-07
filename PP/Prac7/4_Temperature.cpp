//Demonstrate the usage of scope resolution operator in c++ by creating a class 
//which will compute the temperature conversion class from Fahrenheit to Celsius and vice versa.
#include <iostream>
using namespace std;

class Temperature
{
    public:
        float CtF(float a);
        float FtC(float b);
};
float Temperature::CtF(float a){
    return ((9 / 5) * a) + 32;
}
float Temperature::FtC(float b){
    return 5 * (b - 32) / 9;
}

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
        float c;
        Temperature t;
        cout<<"Enter temperature in celcius: ";
        cin>>c;
        cout<<c<<" in Farenheit is : "<<t.CtF(c)<<endl;
        break;
    case 2:
        float f;
        Temperature T;
        cout<<"Enter temperature in Farenheit: ";
        cin>>f;
        cout<<f<<" in Celcius is : "<<T.FtC(f)<<endl;
        break;
    default:
        cout<<"Please enter either F or C";
        break;
    }
    return 0;
}