#include <iostream>
using namespace std;

int main() {
   string name;
   cin>>name;

   bool isPlaindrome=true;

   int start=0;
   int end= name.length()-1;

   while(start<end){
       if(name[start]!=name[end]){
           isPlaindrome=false;
           break;
       }
       start++;
       end--;
   }

   if(isPlaindrome==true){
       cout<<"Palindrome";
   }
   else{
       cout<<"not palindrome";
   }

}
