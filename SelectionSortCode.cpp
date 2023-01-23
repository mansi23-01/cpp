void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0; i<n-1; i++){
        int minIndex=i;
        
        for(int j=i+1; j<n; j++){
        if(arr[j]<arr[minIndex])
            minIndex=j;
        }
         swap(arr[minIndex],arr[i]);
    } 
}


#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
   int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>n;
    }
    
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
