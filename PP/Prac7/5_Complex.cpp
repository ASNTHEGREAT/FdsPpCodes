//Print the sum difference and product of two complex numbers by creating a class
//called complex with separate functions for each part of the number, 
//whose real and imaginary part are entered by the user.

#include<iostream>
using namespace std;

class complex 
{
    public:
        int addition(int a, int b, int c, int d)
        {
            int real = a+c;
            int imaginary = b+d;
            cout<<real<<" + "<<imaginary<<"i ";
            return 0;
        }
        int subtraction(int a, int b, int c, int d)
        {
            int real = a-c;
            int imaginary = b-d;
            cout<<real<<" + "<<imaginary<<"i ";
            return 0;
        }
        int multiplication(int a, int b, int c, int d)
        {
            int real = ((a*c)-(b*d));
            int imaginary = ((a*d)+(b*c));
            cout<<real<<" + "<<imaginary<<"i ";
            return 0;
        }
};

int main()
{
    int a,b,c,d;
    complex com1, com2;
    //Taking input
    cout<<"Enter the real part and coefficient of complex part of complex number 1: ";
    cin>>a>>b;      //1
    cout<<"Enter the real part and coefficient of complex part of complex number 2: ";
    cin>>c>>d;      //2
    //printing output
    cout<<"addition of ("<<a<<" + "<<b<<"i) and ("<<c<<" + "<<d<<"i) is : "<<com1.addition(a,b,c,d)<<endl;
    cout<<"subtraction of ("<<a<<" + "<<b<<"i) and ("<<c<<" + "<<d<<"i) is : "<<com1.subtraction(a,b,c,d)<<endl;
    cout<<"multiplication of ("<<a<<" + "<<b<<"i) and ("<<c<<" + "<<d<<"i) is : "<<com1.multiplication(a,b,c,d)<<endl;
    return 0;
}