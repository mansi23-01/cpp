#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    int even=0;
    int odd=0;
    for(int i=0; i<n; i++){
        if(arr1[i]%2==0){
          even++;
        }
        else{
            odd++;
        }
    }
   cout<<odd-even;  
}
