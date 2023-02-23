#include <iostream>
 
using namespace std;
void Test(){
     
    static int x = 8;
     x = ++x;
     
    int y = 9;
    y = ++y;
    cout<<"x = "<<x<<"n";
    cout<<"y = "<<y<<"n";
}
int main()
{  
    Test();
    Test();
         
    return 0;
}