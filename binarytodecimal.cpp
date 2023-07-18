// converting decimal to binary   
// eg : convert 10 into binary 
#include <iostream>
#include <math.h>
using namespace std;

int main(){
int n;
cout<<"Enter your Choice :";
cin >> n;

int bit;
int ans = 0;
int i = 0;
while (n!= 0)
{
   bit  = n & 1;
   ans = (bit * pow(10 , i)) + ans;

   n = n >> 1;
   i++;
}
cout<< "Answer of the decimal " << ans;

}