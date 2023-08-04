#include <iostream>
using namespace std;
int main() {
    char name[20];
    cin>>name;
    cout<<name<<endl;

    int count=0;

    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    cout<<count;
}
