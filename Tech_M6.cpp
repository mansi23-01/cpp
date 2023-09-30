#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int amount[n];
   for(int i=0; i<n; i++){
       cin>>amount[i];
   }
   int total =0;

   for(int i=0; i<n; i++){
     if(amount[i]>2000){
         total=total+(amount[i]*0.2);
     }
   }
   cout<<total;
}
