#include <iostream>
using namespace std;
class shape
{
public:
    virtual void area() = 0; // pure virtual function
};
class circle : public shape
{
    float r; 
public:
    void area()
    {
        cout << "\nEnter radius : ";
        cin >> r;
        cout << "\nArea of circle : " << (3.14 * r * r);
    }
};
class square : public shape
{
    int side;

public:
    void area()
    {
        cout << "\nEnter side : ";
        cin >> side;
        cout << "\nArea of square : " << side * side;
    }
};
class triangle : public shape
{
    int h, b;
    float a;
public:
    void area()
    {
        cout << "\nEnter base : ";
        cin >> b;
        cout << "\nEnter height : ";
        cin >> h;
        a = 0.5 * b * h;
        cout << "\nArea of triangle : " << a;
    }
};
int main()
{
    circle c; // object created
    c.area();
    square s; // object created
    s.area();
    triangle t; // object created
    t.area();

     return(0);
}