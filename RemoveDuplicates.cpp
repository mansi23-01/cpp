#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector <int> a;

    for(int i=0; i<n; i++){
        if(arr[i]!=arr[i+1]){
            a.push_back(arr[i]);
        }
    }

    for(int i=0; i<a.size(); i++){
     cout<<a[i]<<" ";
    }

}
