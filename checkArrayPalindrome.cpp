#include <iostream>
using namespace std;
int main() {
   int arr[]={1,3,4,5,2,3,1};
   int length= sizeof(arr)/sizeof(arr[4]);

   int start=0;
   int end= length-1;

   bool isPalindrome=true;


   while(start<end){
       if(arr[start]!=arr[end]){
        isPalindrome=false;
        break;
       }
       start++;
       end--;
   }

   if(isPalindrome==true){
       cout<<"palindrome";
   }
   else{
      cout<< "not palindrome";
   }
}
