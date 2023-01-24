#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr1[n];
   int arr2[m];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
     for(int j=0; j<m; j++){
        cin>>arr2[j];
    }
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            if(arr1[i]>arr2[j]){
                j++;
            }
            else{
               cout<< arr1[i];
                j++;
                i++;
                
            }
        }
    }
}
   
