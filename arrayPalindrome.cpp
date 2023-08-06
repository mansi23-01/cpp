#include <iostream>
using namespace std;
int main() {
    int arr[]={2,3,1,4,10,3,2};

    int size= sizeof(arr)/sizeof(arr[0]);

    bool isPalindrome= true;
    int start=0;
    int end= size-1;

    while(start<end){
        if(arr[start]!=arr[end]){
            isPalindrome=false;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}
