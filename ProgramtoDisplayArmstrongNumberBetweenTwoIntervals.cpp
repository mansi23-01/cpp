#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    
    for(int i=1;i<=n; i++){
        int num=i,power,count=0, ans=0;
        while(num!=0){
            num=num/10;
            count++;
        }
        num=i;
        while(num!=0){
            int digit=num%10;
            num=num/10;
            power=pow(digit,count);
            ans =ans+power;
        }
        if(ans==i){
            cout<<i<<endl;
        }
    }

    return 0;
}
