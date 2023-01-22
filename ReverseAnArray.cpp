void reverse(int arr[],int size){
    int start=0;
    int end= size-1;
    while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[5]={3,5,4,6,7};
    int brr[6]={6,7,9,4,8,1};
    
    reverse(arr, 5);
    reverse(brr, 6);
    
    printArray(arr,5);
    printArray(brr,6);

}


//without using function
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int start=0;
    int end=n-1;
    
    for(int i=0; i<n; i++){
        swap(arr[start],arr[end]);
        start++;
        end--;
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
