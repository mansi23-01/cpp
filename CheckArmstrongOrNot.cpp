//when digit is known

#include <iostream>
using namespace std;
int main() {
    int n,result=0;
     cin>>n;
    int num=n;
    
    while(num!=0){
        int digit= num%10;
        result+=digit*digit*digit;
        num=num/10;
    }
    if(result==n){
        cout<<"it is armstrong"<<n;
    }
    else{
        cout<<"not";
    }
    return 0;
}
