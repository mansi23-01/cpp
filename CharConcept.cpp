#include <iostream>
using namespace std;
int main() {
    char name[20];
    cout<<"enter the name ";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    
    name[2]=0;//this will print only till index 1 because on index 2 it is 0 so after that it will stop
    cout<<name;    

    return 0;
}
