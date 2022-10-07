#include<iostream>
using namespace std;
int counter = 0;
class MyClass {     //Class name
    public:
        
        MyClass(){      //Access specifier
            cout<<"Hello world"<<endl;    //Constructor
            counter++;
        }
        void display(){
            int n=100;
            cout<<"n = "<<n<<endl;
        }
};

int main()
{
    MyClass m1,m2,m3;  // Create an object of MyClass (this will call the constructor)
    m1.display();
    cout<<counter<<endl;
    return 0;
}