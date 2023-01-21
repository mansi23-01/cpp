#include <iostream>
#include<vector>
using namespace std;
int main() {
   vector<int>vector1 ={1,2,3};
   vector<int>::iterator iteratorInt; //this is same as pointer
   iteratorInt =vector1.begin();
   
   cout<<"vector1[0]: " <<*iteratorInt<<endl;
   cout<<"vector1[0]: " <<*(iteratorInt+2)<<endl;
   iteratorInt=vector1.end()-1;
   cout<<"vector1[last]: " <<*iteratorInt<<endl;
   

    return 0;
}
