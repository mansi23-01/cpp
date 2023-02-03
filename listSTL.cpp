#include <iostream>
#include <list>
using namespace std;
int main() {
    list <int> l;
    l.push_back(1);
    l.push_front(9);
    
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    
    //create new list where every element is of 100 
    
    list <int> m(5,10);
     for(int i:m){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
