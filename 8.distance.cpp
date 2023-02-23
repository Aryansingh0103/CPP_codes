// DISTANCE WHICH STORE A DISTANCE IN FEET AND INCHS.
#include <iostream>
using namespace std;
class distance
{
    public:
    int feet;
    int inch;
    void getdata()
    {
        cout<<"enter the distance in feet : ";
        cin>>feet;
        cout<<"enter the distance in inches : ";
        cin>>inch;
    }
    
}c1, c2, c3;
int main ()
{
    c1.getdata();
    cout<<"another distance "<<endl;
    c2.getdata();
    c3.feet=c1.feet+c2.feet;
    c3.inch=c1.inch+c2.inch;
    cout<<"added distance is "<<c3.feet<<" feets "<<c3.inch<<" inches";

}
