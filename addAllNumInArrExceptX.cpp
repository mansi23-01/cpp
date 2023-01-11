#include <iostream>
using namespace std;
int main() {
   int a;
   cin>>a;
    int arr[]={2,3,4,5,6};
    int sum=0;
   
    for(int i=0; i<5; i++){
        if(arr[i]!=a){
            sum=sum+arr[i];
        }
    
    }
     cout<<sum;
    
}
