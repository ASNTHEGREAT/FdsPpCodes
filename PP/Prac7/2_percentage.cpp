//Create a class for printing the mark sheet of a student. 

//Take the input as marks in 5 subjects of a student, print total and percentage of that student.

#include<iostream>
using namespace std;

class marksheet
{
public:
    float marks1;
    float marks2;
    float marks3;
    float marks4;
    float marks5;

    float Total()
    {
        return marks1+marks2+marks3+marks4+marks5;
    }
    float Percentage()
    {
        return Total()/5;
    }
};

int main()
{
    marksheet student1;

    student1.marks1=69;
    student1.marks2=6.9;
    student1.marks3=42;
    student1.marks4=89;
    student1.marks5=77;

    cout<<"Total marks obtained : "<<student1.Total()<<endl;
    cout<<"Percentage obtained : "<<student1.Percentage()<<endl;
    return 0;
}