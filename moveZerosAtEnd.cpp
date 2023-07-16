#include <iostream>
using namespace std;

void moveZero(int arr[], int n){

int c=n-1;

for(int i=0; i<n; i++){
if(arr[c]==0){
    c--;
}
if(arr[i]==0 && c>=i){
        //cout<<i<<" "<<c;
        swap(arr[i],arr[c]);
        c--;
    }
}

for(int i=0; i<n; i++){
    cout<<arr[i];
}

}

int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++){
       cin>>arr[i];
   }
 moveZero(arr,n);
 return 0;
}
