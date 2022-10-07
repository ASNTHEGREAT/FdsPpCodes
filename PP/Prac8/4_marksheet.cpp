#include <iostream>
#include <iomanip>

using namespace std;


class marksheet
{
    int roll,t,p;
    int m1,m2,m3,m4,m5;
    char name[30],inst[30];

    public:
    void get_details(void)
    {
    cout<< "Enter your Name:"<<endl;
    cin>>name;
    cout<< "Enter your Roll Number:"<<endl;
    cin>>roll;
    cout<< "Enter your Institute:"<<endl;
    cin>>inst;
    }
    void display_details(void);
    marksheet(int m1,int m2,int m3,int m4,int m5){
        t=m1+m2+m3+m4+m5;
        p=t/5;
    }
    void display_totPer(void);
    void space(void);
    void display_marksheet(int m1,int m2,int m3,int m4, int m5, int tot);
};
void marksheet::display_details(void)
{
    cout<< "NAME:"<<name<<endl; 
    cout<< "Roll No.:"<<roll<<endl;
    cout<< "INSTITUTE:"<<inst<<endl;
}
void marksheet::display_totPer(void)
{
    cout<<"total marks: "<<t<<endl;
    cout<< "Percentage: "<<p<<endl;
}
void marksheet::space(void)
{
    cout<<"|------------------------------- <Marksheet> -------------------------------|\n";
}
void marksheet::display_marksheet(int m1,int m2,int m3,int m4, int m5, int tot)
{
    
    cout<<"English"<<setw(20)<<"Hindi"<<setw(20)<<"Maths"<<setw(20)<<"Science"<<setw(20)<<"History"<<setw(20)<<"Total"<<endl;
    cout<<m1<<setw(20)<<m2<<setw(20)<<m3<<setw(20)<<m4<<setw(20)<<m5<<setw(20)<<tot<<endl;
}
int main()
{
    int e, h, m, s, hi,t;
    cout<<"Enter marks in English: ";
    cin>>e;
    cout<<"Enter marks in Hindi: ";       //Hindi
    cin>>h;
    cout<<"Enter marks in Maths: ";       //Maths
    cin>>m;
    cout<<"Enter marks in Science: ";       //Science
    cin>>s;
    cout<<"Enter marks in History: ";       //History
    cin>>hi;
    t = e + h + m + s + hi;
    marksheet marks(e,h,m,s,hi);
    marks.get_details();
    marks.display_details();
    marks.space();
    marks.display_marksheet(e,h,m,s,hi,t);
    marks.display_totPer();
    
    return 0;
}