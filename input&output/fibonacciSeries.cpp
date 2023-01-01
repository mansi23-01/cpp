#include <iostream>
using namespace std;
int main() {
    int n;
    int a=0;
    int b=1;
    cout<<"enter the value of n";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){
        int nextNumber=a+b;
        cout<<nextNumber<<" ";
        a=b;
        b=nextNumber;
    }

    return 0;
}
