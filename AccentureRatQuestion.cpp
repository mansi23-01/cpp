#include <iostream>
using namespace std;
int main() {
   int r,units,n;
   cin>>r>>units>>n;
   int arr[n];

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }

   int foodRequired=r*units;
   int foodNow =0;
   int i=0;

   if(n==0){
       cout<<-1;
   }
   for(int i=0;i<n; i++){
   foodNow=foodNow+arr[i];
   if(foodNow>=foodRequired){
       cout<<i+1;
       break;
   }
   }

   if(foodNow<foodRequired){
       cout<<0;
   }
}
