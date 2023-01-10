#include <iostream>
using namespace std;
int main() {
     int a;
     cin>>a;
     
     int sum =0;
     while(a>0){
     int digit= a%10;
     
     sum=sum+digit;
     
      a=a/10;
     
     }
     cout<<sum;
    
    
    return 0;
}
