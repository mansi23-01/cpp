#include <bits/stdc++.h>
using namespace std;
void power(int a, int b){
int result = 1;
for(int i =1; i<=b;i++ ){
      result= result*a;
  }
  cout<<result<<endl;
}

int main() {
   int a,b;
   cin>>a>>b;
   power(a,b);
   return 0;
}
