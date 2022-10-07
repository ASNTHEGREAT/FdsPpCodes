#include<iostream>
using namespace std;

class Salary
{
    private:
        float Gross, HRA, DA, b;
    public:
        //float HRA(int bp) { return bp * 0.12; }
        //float DA(int bp) { return bp * 0.31; }
        Salary(int bp)  //Constructor
        {
            b = bp;
            HRA = bp * 0.12;
            DA = bp * 0.31;   
        }
        Salary(const Salary &s1) //Copy Constructor
        {
            HRA = s1.HRA;
            DA = s1.DA;
            Gross = s1.HRA + s1.DA + s1.b;
        }
        float getSalary() { return Gross; }
        float getHRA() { return HRA; }
        float getDA() { return DA; }
        
};


int main()
{
    int eid, bp;
    string name;
    cout<<"Enter Employee ID: ";
    cin>>eid;
    cout<<"Enter Employee name with ID "<<eid<<" : ";
    cin>>name;
    cout<<"Enter basic pay of Employee "<<name<<" with ID "<<eid<<" : ";
    cin>>bp;
    Salary s1(bp);
    Salary s2 = s1;
    cout<<"Salary of "<<name<<" with ID "<<eid<<" is : "<<s2.getSalary()<<endl;
    cout<<"HRA of "<<name<<" with ID "<<eid<<" is : "<<s2.getHRA()<<endl;
    cout<<"DA of "<<name<<" with ID "<<eid<<" is : "<<s2.getDA()<<endl;

}