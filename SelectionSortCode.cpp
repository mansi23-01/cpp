////////////////using functon
#include <iostream>
using namespace std;

int printArray(int arr[], int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    
    selectionSort(arr,n);
    
    printArray(arr,n);
    
}

/////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
   int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
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
