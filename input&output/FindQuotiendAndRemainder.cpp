#include <iostream>
using namespace std;
int main() {
    int divisor, dividend,quotient,rem;

    cin>>dividend>>divisor;
    
    quotient = dividend / divisor;
    rem = dividend % divisor;
    cout<<"quotient is "<<quotient<<"remainder is "<<rem;
    
    return 0;
}
