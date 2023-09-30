#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   int sum=0;
   for(int i=0; i<n; i++){
       int quotient= arr[i]/12;
       if(quotient>0){
       sum=sum+quotient;
       }
   }
   cout<<sum;
}
