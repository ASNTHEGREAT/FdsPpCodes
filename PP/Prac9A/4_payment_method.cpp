#include<iostream>
using namespace std;

class Discount
{
    public:
    int purchase(int amt, int items)
    {
        return (amt-(10*amt/100));
    }
    int purchase(int amt)
    {
        return (amt-(20*amt/100));
    }
};

int main()
{
    Discount X;
    int item, tot;
    cout<<"Enter number of items and total amount";
    cin>>item>>tot;
    if (tot>=25000 && item>=3)
    {
        cout<<"The new amount is: "<<X.purchase(tot, item)<<endl;
    }
    else if(tot>=50000)
    {
        cout<<"The new amount is: "<<X.purchase(tot)<<endl;
    }
    else
    {
        cout<<"The new amount is: "<<tot<<endl;
    }
    
    
    return 0;
}