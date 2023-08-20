#include <iostream>
using namespace std;
bool palin(string input, int n){
    int start=0;
    int end=n-1;
   while(start<end){
       bool isPalin=false;
       if(input[start]==input[end]){
        isPalin=true;
        start++;
        end--;
       }
       if(!isPalin){
           return false;
       }
   }
   return true;
}
int main() {
    string input;
    cin>>input;

    int n= input.size();

    if(palin(input,n)){
        cout<<"yes palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}
