#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main() {
   int arr1[5]={2,3,4,6,8};
   int arr2[6]={4,5,6,3,2,7};
   int arr3[7]={9,7,3,5,4,6,1};
   
  printArray(arr1,5);
  printArray(arr2,6);
  printArray(arr3,7);
   
    return 0;
}
