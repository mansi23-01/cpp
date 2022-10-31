#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
   int a,b;
   cin>>a>>b;
   char op;
   cout<<"enter the operator";
   cin>>op;
   switch(op){
       case '+': 
       cout<<a+b<<endl;
       break;
       case '-':
       cout<<a-b<<endl;
       break;
       case '*':
       cout<<a*b<<endl;
       break;
       case '/':
       cout<<a/b<<endl;
       break;
   }

    return 0;
}
