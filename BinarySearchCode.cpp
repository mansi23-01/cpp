#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
     int mid=(start+end)/2;
     
     while(start<=end){
         if(arr[mid]==key){
             return mid;
             
         }
         if(key>arr[mid]){
             start=mid+1;
         }
         else{
             end=mid-1;
         }
         mid=(start+end)/2;
     }
     return -1;
}
    
int main() {
    int even[6]={2,3,4,6,7,9};
    int odd[5]={1,4,5,7,8};
    
    int evenIndex=binarySearch(even, 6, 3);
    cout<<"index of 3 is "<<evenIndex<<endl;
    
     int oddIndex=binarySearch(odd,5, 7);
    cout<<"index of 7 is "<<oddIndex;

    return 0;
}
