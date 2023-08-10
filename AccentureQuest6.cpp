#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    if (n <= 3) {
        cout << "0" << endl;
        return 0;
    }

  int arr[n];
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }

 sort(arr, arr + n);

 for(int i=0; i<n; i++){
     cout<<arr[i];
 }
 cout<<endl;

 vector <int> evenIndex;
 
 for(int i=0; i<n; i++){
     if(i%2==0){
         evenIndex.push_back(arr[i]);
     }
 }
 for(int i=0; i<evenIndex.size(); i++){
     cout<<evenIndex[i];
 }

 cout<<endl;

 vector <int> oddIndex;

 for(int i=0; i<n; i++){
     if(i%2 !=0){
         oddIndex.push_back(arr[i]);
     }
 }
 for(int i=0; i<oddIndex.size(); i++){
     cout<<oddIndex[i];
 }

 cout<<endl<<"sum is:"<<oddIndex[1]+evenIndex[1];


}
