#include <iostream>
using namespace std;

int findCount(int n, int arr[], int num, int diff){
    int count=0;
    for(int i=0; i<n; i++){
        if(abs(num-arr[i])<=diff){
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int num, diff;
    cin>>num>>diff;

    cout<<findCount(n, arr, num, diff);
}
