#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<int> a;
    int count=0;

    for(int i=0; i<n; i++){
        if(i==0 || arr[i]!=arr[i-1]){
            a.push_back(arr[i]);
            count=1;
        }
        else if(count<2){
            a.push_back(arr[i]);
            count++;
        }
    }

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}
