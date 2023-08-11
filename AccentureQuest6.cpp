#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int addEO(int arr[], int n){
    if(n<=3){
       return 0;
   }

   vector <int>even;
   for(int i=0; i<n;i++){
       if(i%2==0){
        even.push_back(arr[i]);
       }
   }
  
   sort(even.begin(), even.end());

   vector <int> odd;
   for(int i=0; i<n; i++){
       if(i%2!=0){
           odd.push_back(arr[i]);
       }
   }
    
   sort(odd.begin(), odd.end());

   return even[1]+odd[1];
}

int main() {
     int n;
   cin>>n;

   int arr[n];

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }

   int result= addEO(arr, n);
   cout<<result;
}
vector <int>even;
   for(int i=0; i<n;i++){
       if(i%2==0){
        even.push_back(arr[i]);
       }
   }
  
   sort(even.begin(), even.end());

   vector <int> odd;
   for(int i=0; i<n; i++){
       if(i%2!=0){
           odd.push_back(arr[i]);
       }
   }
    
   sort(odd.begin(), odd.end());

   cout<<even[1]+odd[1];

}
//using function
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int addEO(int arr[], int n){
    if(n<=3){
       return 0;
   }

   vector <int>even;
   for(int i=0; i<n;i++){
       if(i%2==0){
        even.push_back(arr[i]);
       }
   }
  
   sort(even.begin(), even.end());

   vector <int> odd;
   for(int i=0; i<n; i++){
       if(i%2!=0){
           odd.push_back(arr[i]);
       }
   }
    
   sort(odd.begin(), odd.end());

   return even[1]+odd[1];
}

int main() {
     int n;
   cin>>n;

   int arr[n];

   for(int i=0; i<n; i++){
       cin>>arr[i];
   }

   int result= addEO(arr, n);
   cout<<result;
}
