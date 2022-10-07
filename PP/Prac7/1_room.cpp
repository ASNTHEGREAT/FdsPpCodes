//Create a class with name room and attributes length breadth and height of the room, 
//calculate area and volume of that room for 3 different instances.
#include<iostream>
using namespace std;

class room
{
public:
    double length;
    double breadth;
    double height;
    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return length*breadth*height;
    }
};




int main()
{
    room room1, room2, room3;
    cout<<"Enter value of Length, Breadth and Height of room 1 : ";
    cin>>room1.length>>room1.breadth>>room1.height;     //1
    cout<<"Enter value of Length, Breadth and Height of room 2 : ";
    cin>>room2.length>>room2.breadth>>room2.height;     //2
    cout<<"Enter value of Length, Breadth and Height of room 3 : ";
    cin>>room3.length>>room3.breadth>>room3.height;     //3
    //Printin
    //1
    cout<<"Area of Room 1: "<<room1.calculateArea()<<endl;
    cout<<"Volume of Room 1: "<<room1.calculateVolume()<<endl;
    //2
    cout<<"Area of Room 2: "<<room2.calculateArea()<<endl;
    cout<<"Volume of Room 2: "<<room2.calculateVolume()<<endl;
    //3
    cout<<"Area of Room 3: "<<room3.calculateArea()<<endl;
    cout<<"Volume of Room 3: "<<room3.calculateVolume()<<endl;
    return 0;
}