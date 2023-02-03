#include <iostream>
#include <stack>
using namespace std;
int main() {
     stack <string> s;
     s.push("mansi");
     s.push("srivastav");
     
     
     cout<<s.top()<<endl;
     cout<<s.size()<<endl;
     cout<<s.empty()<<endl;

    return 0;
}
