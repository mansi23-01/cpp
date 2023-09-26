#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
     int arr[n];

     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     int num;
     cin>>num;
     int a,b;
    for(int i=0; i<n; i++){
         if(i==num){
           a= arr[num]-arr[i-1];
           b= arr[num]-arr[i+1];
         }
     }
     cout<<a+b;
}
