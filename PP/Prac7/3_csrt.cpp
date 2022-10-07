//Create a class for the calculation of area of circle, square, rectangle and triangle.
#include <iostream>
#include <cmath>

using namespace std;

class Area
{
public:
    // double r,l,b,ba,h;
    float circle(double r)
    {
        return M_PI * r * r;
    }
    float square(double l)
    {
        return l * l;
    }
    float rectangle(double le, double b)
    {
        return le * b;
    }
    float triangle(double ba, double h)
    {
        return 0.5 * ba * h;
    }
};

int main()
{
    while (true)
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
            cout << "Enter radius of the circle: ";
            cin >> r;
            cout << "Area of circle is : " << c.circle(r) << endl;
            break;
        case 2:
            double l;
            Area s;
            cout << "Enter side of square: ";
            cin >> l;
            cout << "Area of square is : " << s.square(l) << endl;
            break;
        case 3:
            double le, b;
            Area rec;
            cout << "Enter length and breadth of rectangle: ";
            cin >> le >> b;
            cout << "Area of rectangle is : " << rec.rectangle(le, b) << endl;
            break;
        case 4:
            double ba, h;
            Area t;
            cout << "Enter base and height of rectangle: ";
            cin >> ba >> h;
            cout << "Area of triangle is : " << t.triangle(ba, h) << endl;
            break;
            break;
        case 5:

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
        continue;
    }
    return 0;
}