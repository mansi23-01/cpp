#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;

   int arr[n];

   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

   sort(arr,arr+n);

   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
  cout<<endl;

   int count=0;
   int max=0;
   int element;

   for(int i=0; i<n; i++){
       if(i==0 || arr[i]==arr[i-1]){
           count++;
           element=arr[i];
       }   
       else{
           cout<<element<<" occurs: "<<count<<" times "<<endl;
           count=1;
       }
   }
    cout << arr[n-1]<<" occurs: " <<count<<" times" << endl;
   
}
