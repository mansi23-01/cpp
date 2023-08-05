#include <iostream>
using namespace std;
int main() {
    string name;
    cin>>name;

    int start=0;
    int end=name.size()-1;

while(start<end){
    swap(name[start], name[end]);
    start++;
    end--;
}
    cout<<name;
}
