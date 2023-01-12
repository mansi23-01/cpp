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

//using function

#include <iostream>
using namespace std;
int skipX(int arr[], int n){
     int sum=0;
    for(int i=0; i<=5; i++){
        if(arr[i]!=n){
            sum=sum+arr[i];
        }
    }
    return sum;
}
int main() {
    int arr[5]={2,4,3,5,6};
    int n;
    cin>>n;
     cout<<skipX(arr,n);
     

    return 0;
}
