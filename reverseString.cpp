#include <iostream>
using namespace std;

int main() {
   char name[5];
   cin>>name;
   cout<<"your name is "<<name<<endl;
   
   int count =0;
   for (int i=0; name[i]!=0; i++){
       count++;
   }
   cout<<"lenght is "<<count<<endl;
   
   int start=0;
   int end=4;
   
//   for(int i =(end-1); i>=0; i--){
//       cout<<name[i];
//   }
while(start<=end){
    swap(name[start++],name[end--]);
}

cout<<name<<endl;
   
    return 0;
}
