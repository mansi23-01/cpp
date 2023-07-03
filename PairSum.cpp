#include <iostream>
using namespace std;
int main() {
    int key;
    cin>>key;
    int arr[5]={1,2,3,4,6};
    
    for(int i=0;i<5;i++){
        for(int j=i+1; j<5;j++){
            if(arr[i]+arr[j]==key){
                cout<<"("<<arr[i]<<","<<arr[j]<<") ";
            }
        }
    }
    return 0;
}
