#include <iostream>
using namespace std;
class car{
        public:   
        
        string brand;   
        string model;   
        int year;       
        car(string , string , int );
        void mycar (string x, string y, int z){
            brand=x;
            model=y;
            year=z;
        }
};
car :: car(string x , string y, int z){
            brand=x;
            model=y;
            year=z;
        }
int main(){
    car carObj1("BMW","X5",1999);
    cout<< " "<<carObj1.brand<<" is car's brand \n";
    cout<<" "<< carObj1.model<<" is car's model \n";
    cout<<" "<< carObj1.year<<" is car's year ";
    return 0;
}