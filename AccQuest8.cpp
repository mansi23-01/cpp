#include <iostream>
using namespace std;
string dectoNbase(int n, int num){
    string symbols="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string result="";

    while(num>0){
        int digit= num%n;
        result= symbols[digit] + result;
        num=num/n;
    }
    return result;
}
int main() {
   int n;
   cin>>n;
   int num;
   cin>>num;

   string result = dectoNbase(n,num);

   cout<<result;
}
