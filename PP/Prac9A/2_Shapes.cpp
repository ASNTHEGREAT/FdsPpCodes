#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

class Area
{
    public:
        // double r,l,b,ba,h;
        //Circle
        float circle(float r)
        {
            //cout << "Area of circle is : " << (M_PI * r * r) << endl; 
            return(M_PI*r*r);
        }
        void circle(int r, float pi)
        {
            cout << "Area of circle is : " << (pi* r * r) << endl; 
        }
        //Square
        float square(float l, float k)
        {
            return (l * l);
        }
        void square(int l)
        {
            cout << "Area of square is : " << (l * l) << endl; 
        }
        //Rectangle
        float rectangle(float le, int b)
        {
            return (le * b);
        }
        void rectangle(int le, float b)
        {
            cout << "Area of rectangle is : " << (le * b) << endl; 
        }
        //Triangle
        float triangle(float ba, int h)
        {
            return (0.5 * ba * h);
        }
        void triangle(int ba, float h)
        {
            cout << "Area of triangle is : " << (0.5 * ba * h) << endl; 
        }
};

int main()
{
    int n;
        cout << "Choose for the index of the following: ";
        cout << "1: Circle\n"
             << "2: Square\n"
             << "3: Rectangle\n"
             << "4: Triangle\n";
        cout << "Enter : ";
        cin >> n;
        switch (n)
        {
        case 1:
            double r;
            Area c;
            cout << "Area of circle is : " << c.circle(13.5) << endl; 
            c.circle(5,3.14);
            break;
        case 2:
            double l;
            Area s;
            cout << "Area of square is : " << s.square(13.5, 14) << endl; 
            s.square(15);
            break;
        case 3:
            double le, b;
            Area rec;
            cout << "Area of rectangle is : " << rec.rectangle(13.5, 14) << endl; 
            rec.rectangle(15, 14.5);
            break;
        case 4:
            double ba, h;
            Area t;
            cout << "Area of triangle is : " << t.triangle(13.5, 14) << endl;
            t.triangle(15, 14.5);
            break;

        default:
            char x;
            cout << "Please enter a valid value, would you like to try again? y/Y or n/N :";
            cin >> x;
            if (x != 'y' || x != 'Y')
            {
                break;
            }
            break;
        }

    return 0;
}