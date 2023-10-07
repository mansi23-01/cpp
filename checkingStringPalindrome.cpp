#include <iostream>
using namespace std;
int main() {
    string names;
    cin>>names;

    int start=0;
    int end= names.size()-1;

    bool isPalindrome=true;

    while(start<=end){
        if(names[start]!=names[end]){
            isPalindrome=false;
            break;
        }
        else{
            start++;
            end--;
        }
    }

    if(isPalindrome==true){
        cout<<"palindrome";
    }
    else{
        cout<<"not Palindrome";
    }
}
