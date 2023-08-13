#include <iostream>
using namespace std;

string replaceChar(string name, char a, char b, int n){
    for (int i=0; i<n; i++){
        if(name[i]==a){
            name[i]=b;
        }
        else if(name[i]==b){
            name[i]=a;
        }
    }
    return name;
}

int main() {
    string name;
    char a, b;
    cin>>name;
    cin>>a>>b;
    int n= name.size();

        cout<<name;
        cout<<endl;
        string result = replaceChar(name,a,b,n);
        cout<<result;
    
}
