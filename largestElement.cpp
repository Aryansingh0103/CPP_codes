//find largest element in an array 
//like arr{2,3,4,6,0,1} and we have to find smallest element 
// output = 6 from above 

#include<iostream>
using namespace std;

int LargestElement(int arr[], int n){
    int max = arr[0];
    for(int i =0; i<n; i++){
        if(arr[i]>max){     
            max = arr[i]; // update kr diye yaha pe 
        }
    }
    return max;
}
int main (){
 int arr1[] ={2,4,15,1,6,7,0};
   int n = 7;
  int max = LargestElement(arr1, n);
   cout<<"largest element in array is : " << max << endl;

    int arr2[] =  {8,10,5,7,19};
     n = 5;
     max = LargestElement(arr2, n);
      cout << "The smallest element in the array is: " << max;
     return 0;

   }