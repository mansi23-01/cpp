#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int evenSum=0;
    int oddSum=0;

    for(int i=0; i<n; i++){
        if(i%2==0){
            evenSum= evenSum+arr[i];
        }
        else{
            oddSum= oddSum+arr[i];
        }
    }

    cout<<abs(oddSum-evenSum);
}
