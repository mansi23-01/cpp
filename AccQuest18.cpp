#include <iostream>
#include <math.h>
using namespace std;
int main() {
   float x1,x2,x3,y1,y2,y3;

   cin>>x1>>y1;
   cin>>x2>>y2;
   cin>>x3>>y3;

   float first= sqrt(pow(x2-x1,2) + pow(y2-y1,2));
   float second= sqrt(pow(x3-x1,2) + pow(y3-y1,2));
   float third= sqrt(pow(x3-x2,2) + pow(y3-y2,2));

   cout<<"sum of distance between 3 dist is: "<<first+second+third;

   

}
