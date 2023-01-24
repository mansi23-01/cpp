void bubbleSort(vector<int>& arr, int n)
{   
    bool swapped=false;
    for(int i=1; i<n; i++){  // for round 1 to n-1
        for(int j=0; j<n-i; j++){  // process element till n-i th  index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

////////////////////////simple
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool swapped=false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
               swap(arr[i],arr[j]);
               swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    
    return 0;
}
