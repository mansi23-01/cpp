#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int num=n;
   int rev=0;
   while(num!=0){
       int digit= num%10;
       rev=(rev*10)+digit;
       num=num/10;
   }
   if(n==rev){
       cout<<"pallindrome"<<rev;
   }
   else{
       cout<<"not palllindrome";
   }

    return 0;
}
