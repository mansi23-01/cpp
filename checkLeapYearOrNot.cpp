#include <iostream>
using namespace std;
int main() {
    cout<<"enter the year";
    int year;
    cin>>year;
    
    if(year%400==0){
        cout<<"leap year";
    }
    
    else if(year%4==0){
        cout<<"leap year";
    }
    
    else if(year%100==0){
        cout<<"not leap year";
    }
    
    else{
        cout<<"not leap year";
    }
    

    return 0;
}
