#include <iostream>
#include <vector>
using namespace std;
int main() {
string arr;
cin>>arr;

int n= arr.size();

vector <char> a;
vector <char> b;
for(int i=0; i<n; i++){
    if(arr[i]=='-'){
      a.push_back(arr[i]);
    }
}
for(int i=0; i<n;i++){
    if(arr[i]!='-'){
        b.push_back(arr[i]);
    }
}

for(int i=0; i<b.size(); i++){
    a.push_back(b[i]);
}

for(int i=0; i<a.size(); i++){
    cout<<a[i];
}
}
