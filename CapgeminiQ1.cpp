#include <iostream>
#include <vector>

using namespace std;
int main() {
   string names;
   cin>>names;
   int n= names.length();
 
 vector <char> a;
 vector <char>b;

 for(int i=0; i<n; i++){
    if(names[i]=='#'){
        a.push_back(names[i]);
    }
    else{
        b.push_back(names[i]);
    }
 }

 for(int i=0; i<b.size(); i++){
     a.push_back(b[i]);
 }

 for(int i=0; i<a.size(); i++){
     cout<<a[i];
 }

}
