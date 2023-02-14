#include <iostream>
using namespace std;

class Number 
{
   private :
    int x;
   
   public:
   Number()
   {
    x = 0;
   };
   Number(int n)
   {
    x = n;
   }
   Number operator -()
    {
        Number temp;
        temp.x = -x;
        return temp;
    }
   void show_data()
   {
      cout<< "\n x = "<< x;
   }
};
main()
{
    Number N1(-15),N2;
    N2 = -N1;
    N2.show_data();
}