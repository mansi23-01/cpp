#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string names;
    cin>>names;
    int n= names.length();
 
    cout<<names;
    cout<<endl;

    sort(names.begin(),names.end());

    cout<<names<<endl;

    int maxElement=0;
    int count=0;
    char element;

    for(int i=0; i<n; i++){
        if(i==0 || names[i]==names[i-1]){
            count++;
            if(count>maxElement){
                maxElement=count;
                element=names[i];
            }
        }
        else{
            count=0;
        }
    }
    cout<<element<<endl;
    cout<<maxElement;
}
