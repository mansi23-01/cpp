//sum of even numbers
#include <iostream>
using namespace std;
int main() {
   int n,i;
   int sum=0;
   cin>>n;
   for(i=1; i<=n; i++){
       if(i%2==0){
       cout<<i;
       sum=sum+i;
   }
   }
    cout<<sum;
}
