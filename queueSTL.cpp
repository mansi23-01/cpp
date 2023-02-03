#include <iostream>
#include <queue>
using namespace std;
int main() {
     queue <string> q;
     q.push("mansi");
     q.push("srivastav");
     
     
     cout<<q.front()<<endl;
     cout<<q.size()<<endl;
     cout<<q.empty()<<endl;

    return 0;
}
