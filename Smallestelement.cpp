//find smallest element in an array 
//like arr{2,3,4,6,0,1} and we have to find smallest element 
// output = 0 from above 

#include<iostream>
using namespace std;

int SmallestElement(int arr[], int n){
    int min = arr[0];
    for(int i =0; i<n; i++){
        if(arr[i]<min){     
            min = arr[i]; // update kr diye yaha pe 
        }
    }
    return min;
}
int main (){
 int arr1[] ={2,4,5,1,6,7,0};
   int n = 7;
  int min = SmallestElement(arr1, n);
   cout<<"Smallest element in array is : " << min << endl;

    int arr2[] =  {8,10,5,7,9};
     n = 5;
     min = SmallestElement(arr2, n);
      cout << "The smallest element in the array is: " << min;
     return 0;

   }