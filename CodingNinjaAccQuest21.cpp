#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){

    if(n<2){
        return -1;
    }

    sort(arr,arr+n);

    for(int i= n-2; i>=0; i--){
        if(arr[i]!=arr[n-1]){
           return arr[i];
        }
    }
    return -1;
}

int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n; i++){
       cin>>arr[i];
   }

  int output= secondLargest(arr,n);

  cout<<output;


}
