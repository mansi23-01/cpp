#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n, power,count=0, ans=0;
    cin>>n;
    int num=n;
    
    while(num!=0){
        num=num/10;
        count++;
    }
    num=n;
    while(num!=0){
        int digit=num%10;
         num=num/10;
        power=pow(digit,count);
        ans =ans+power;
    }
    if(ans==n){
        cout<<"it is armstrong "<<n;
    }
    else{
        cout<<"not";
    }

    return 0;
}
