#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"a is greater"<<a;
    }
    if(b>=a && a>=c){
        cout<<"b is greater"<<b;
    }
    if(c>=a && c>=b){
        cout<<"c is greater: "<<c;
    }
}
