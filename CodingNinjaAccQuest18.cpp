#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    sort(arr,arr+n, greater<int>());

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int i=0; i<n; i++){
        if(k==i){
            cout<<arr[i];
        }
    }
}
