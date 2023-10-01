#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,key;
    cin>>n>>key;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector <int> a;
    int count =0;

    for(int i=0; i<n; i++){
        if(arr[i]!=key && arr[i]!=0){
            a.push_back(arr[i]);
            count++;
        }
    }
   cout<<count;
}
