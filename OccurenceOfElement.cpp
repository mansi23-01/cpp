#include <iostream>
using namespace std;

int OccurenceOfElement(int arr[],int size, int k){
    int count =0;
    for(int i=0; i<size; i++){
        if(arr[i]==k){
            count++;
        }
    }
    return count;
}

int main() {
   int arr[]={2,4,3,5,6,7,9,7,6,4,7,7,7};
   int size= sizeof(arr)/sizeof(arr[0]);
   int k;
   cin>>k;

   cout<<OccurenceOfElement(arr, size, k);
}
