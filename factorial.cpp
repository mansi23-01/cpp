#include <iostream>
using namespace std;
int main() {
   int a;
   int fact=1;
   cin>>a;
   for(int i=1; i<=a; i++){
       fact=fact*i;
       
   }
   cout<<fact;

    return 0;
}