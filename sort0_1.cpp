#include <iostream>
//METHOD 1

#include <vector>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}
vector <int> a;
vector <int> b;
for(int i=0; i<n; i++){
    if(arr[i]==0){
      a.push_back(arr[i]);
    }
    else{
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

//METHOD 2
