//given alpha numeric string , your task is to seperate the lowercase alphabet , uppercase alphabet and number , write the code in c++

#include <iostream>
using namespace std;
int main() {
   string name;
   cin>>name;

   int n= name.size();

   string low,upp,num;

   for(int i=0; i<n; i++){
       if(name[i]>='a' && name[i]<='z'){
           low=low+name[i];
       }
       if(name[i]>='A' && name[i]<='Z'){
           upp=upp+name[i];
       }
       if(name[i]>='0' && name[i]<='9'){
           num=num+name[i];
       }
}
cout<<low<<upp<<num;
}

