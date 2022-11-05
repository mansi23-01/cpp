//method 1

#include <bits/stdc++.h>

using namespace std;
int main() {
   int a,b,result=1;
   cin>>a>>b;
  for(int i =1; i<=b;i++ ){
      result= result*a;
  }
      cout<<result<<endl;
}

//method 2

#include <iostream>
#include <math.h>
using namespace std;
int main() {
   int a,b;
   cin>>a>>b;
   int result=pow(a,b);
   cout>>result;
}
