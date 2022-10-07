#include<iostream>
using namespace std;
class Car{
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z){
        brand =x;
        model=y;
        year=z;
    }
};
int main(){
    Car obj1("BMW","X5", 1999);
    cout<<obj1.brand<<" "<<obj1.model<<" "<<obj1.year<<endl;
    return 0;
}