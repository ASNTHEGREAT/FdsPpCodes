#include<iostream>
using namespace std;

class Adder
{
    private:
        int x, y;
        float m,n;
    public:
        int add(int a, float b)
        {
            x = a;
            n = b;
            return x+n;
        }
        float add(float c, int d)
        {
            m = c;
            y = d;
            return m+y;
        }
};

int main()
{
    Adder sum;
    int a, b;
    a = sum.add(10,20.5);
    cout<<"Addition of integers is : "<<a<<endl;
    b = sum.add(5,10.5);
    cout<<"Addition of float is : "<<b<<endl;
    return 0;
}