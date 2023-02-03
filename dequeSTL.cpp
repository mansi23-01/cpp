#include <iostream>
#include<deque>
using namespace std;
int main() {
   deque <int> d;
   d.push_back(1);
   d.push_front(2);
   for(int i:d){
       cout<<i<<" ";
   }cout<<endl;
   d.push_back(8);
   for(int i:d){
       cout<<i<<" ";
   }cout<<endl;
   d.pop_back();
        for(int i:d){
       cout<<i<<" ";
   }cout<<endl;
   
   cout<<"element at first index"<<d.at(1)<<endl;
  
   
   //delete any element
   cout<<"before erase"<<d.size()<<endl;
   //d.erase(d.begin(),d.begin()+1);
   d.erase(d.begin(),d.end());
    cout<<"after erase"<<d.size()<<endl;
    
    for(int i:d){
        cout<<i<<endl;
    }
   
  
    return 0;
}
