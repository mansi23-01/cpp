#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }

   int c=n/2;

   int count=0;

   for(int i=0; i<n; i++){
       if(i==0 || arr[i]==arr[i-1]){
           count++;
           if(count>c){
               cout<<arr[i];
           }
       }
       else{
           count=1;
       }
   }
}
