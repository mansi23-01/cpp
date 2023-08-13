#include <iostream>
using namespace std;

int OperationChoices(int c, int a , int b ){

    if(c==1){
        return a+b;
    }
    else if(c==2){
        return a-b;
    }
    else if(c==3){
        return a*b;
    }
    else if(c==4){
        return a/b;
    }
    return 0;

}

int main() {
    int c, a,b;

    cin>>c;
    cin>>a;
    cin>>b;
    int result= OperationChoices(c,a,b);

    cout<<result;
}
