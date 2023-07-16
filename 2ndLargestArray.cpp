#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void secLar(int arr[] ,int n){
    if(n<2){
        cout<<"invalid input";
        return;
    }

    sort(arr,arr+n);

    for(int  i= n-2;i>=0;i--){
        if(arr[i]!=arr[n-1]){
            cout<<"2nd largest is "<<arr[i];
            return;
        }
    }
    cout<<"No second largest element exist";
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

 secLar(arr, n);
 return 0;
}
