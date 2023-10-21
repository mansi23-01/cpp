#include <iostream>
using namespace std;
int main() {
    string names;
    cin>>names;

    int n=names.length();

    int count=0;
    char element;

    for(int i=0;i<n; i++){
        if(i==0 || names[i]==names[i-1]){
            count++;
            element=names[i];
        }
        else{
            cout<<element<<count;
            count=1;
        }
    }
}
