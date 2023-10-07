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

    sort(arr,arr+n);

    int maxElement=0;
    int element;
    int count=0;

    for(int i=0;i<n; i++){
       if(i==0 || arr[i]==arr[i-1]){
           count++;
           if(count>maxElement){
               maxElement=count;
               element=arr[i];
           }
       }
       else{
           count=1;
       }
    }
    cout<<element;
}
