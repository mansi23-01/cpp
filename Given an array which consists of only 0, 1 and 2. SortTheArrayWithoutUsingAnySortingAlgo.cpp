Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
   int c0=0,c1=0,c2=0;
   for(int i=0; i<n;i++){
       if(arr[i]==0){
           c0++;
       }
       else{
           if(arr[i]==1){
               c1++;
           }
           else{
               c2++;
           }
       }
   }
   int k=0;
   for(int i=0; i<c0;i++){
       arr[k]=0;
       k++;
   }
   for(int i=0; i<c1;i++){
       arr[k]=1;
       k++;
   }
   for(int i=0; i<c2;i++){
       arr[k]=2;
       k++;
   }
   
   for(int i=0; i<n; i++){
       cout<<arr[i];
   }

    return 0;
}
