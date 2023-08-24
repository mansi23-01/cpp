#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
  int count=-1;
    for(int i=0; i<n-1; i++){
        int mini=i;
        for(int j=i+1; j<n; j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
        count++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<count;

}
