#include <iostream>
using namespace std;

int main() {
   int arr[7]={2,3,5,4,2,3,7};
   int num1, num2;
   cin>>num1>>num2;

   for(int i=0;i<7;i++){
       cout<<arr[i]<<" ";
   }

   for(int i=0; i<7; i++){
       if(arr[i]==num1){
           arr[i]=num2;
       }
       else if(arr[i]==num2){
           arr[i]=num1;
       }
   }

   cout<<endl;
  
   for(int i=0;i<7;i++){
       cout<<arr[i]<<" ";
   }

}
