//given alpha numeric string , your task is to seperate the lowercase alphabet , uppercase alphabet and number , write the code in c++

#include <iostream>
using namespace std;

int main() {
   string name;
   cin>>name;

   string low, upp, num;

   for(char c: name){
       if(c>='a'&& c<='z'){
           low=low+c;
       }
       else if(c>='A'&& c<='Z'){
           upp=upp+c;
       }
       else{
           num=num+c;
       }
   }
    cout<<low<<" "<<upp<<" "<<num;
}


//second method using in-built function that is islower, isupper, isdigit

#include <iostream>
using namespace std;
int main() {

string name;
cin>>name;

string low, up, num;

    for(char c: name){

    if(islower(c)){
            low =low + c;
    }
    if(isupper(c)){
        up=up+c;
    }
    if(isdigit(c)){
        num += c;
    }
}

cout<<low;
cout<<up;
cout<<num;

}

