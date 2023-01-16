#include <iostream>
using namespace std;
int main() {
    int arr[6]={2,3,4,6,5,8};
    int sum=0;
   
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
        sum=sum+arr[i];
    }
     int average=sum/2;
    cout<<endl<<"sum is: "<<sum<<endl<<"average is: "<<average;

    return 0;
}
