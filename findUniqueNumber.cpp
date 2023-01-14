int findUnique(int *arr, int size)
{
    int ans=0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    return ans;
}



//without function
#include <iostream>
using namespace std;
int main() {
    int arr[5]={2,3,2,3,4};
    int ans=0;
    for(int i=0; i<5; i++){
        ans=ans^arr[i];
    }
    cout<<ans;
   
}
