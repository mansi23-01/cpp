#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> v;
   cout<<"capacity is "<<v.capacity()<<endl;
   
   v.push_back(1); 
    cout<<"capacity is "<<v.capacity()<<endl;
    v.push_back(2); 
    cout<<"capacity is "<<v.capacity()<<endl;
    v.push_back(3); 
    cout<<"capacity is "<<v.capacity()<<endl;
    cout<<"size is "<<v.size()<<endl;
    v.push_back(4);
    cout<<"capacity is "<<v.capacity()<<endl;
     
    cout<<"element at second index"<<v.at(2)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    
    v.pop_back();
    cout<<"after pop";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl; 
    
    cout<<"before clear"<<v.size()<<endl;
    
    v.clear();
    cout<<"after clear"<<v.size()<<endl;
    
    //if we want to give size also:
    vector <int> a(5,2);
    cout<<"print vector"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    

    return 0;
}

// has no member named 'push_front' 'pop_front'
     v.push_front(2);
