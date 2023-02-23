#include<iostream>

using namespace std;
class student
{
public:
int roll, marks;
void getdata()
{
    cout<<"Enter your roll no.:"<<endl;
    cin>>roll;
    cout<<"Enter your marks: "<<endl;
    cin>>marks;
}
};
int main ()
{
    student s[10];
    int i;
    for(i=0;i<10;i++)
    {
        s[i].getdata();
    }
     cout<<"Displaying ROLL and MARKS :"<<endl;
    for(i=0;i<4;i++)
    {
       
        cout<<""<<s[i].roll<<":---"<<s[i].marks<<endl;
    }
    return 0;
}