#include <iostream>
using namespace std;

int countCarry(int num1, int num2){
    int p,q,sum;
    int count=0;
    int carry=0;
    while(num1 !=0 && num2!=0){
        p=num1%10;
        q=num2%10;
        sum=carry + p + q;
        if(sum>9){
            carry=1;
            count++;
        }
        else{
            carry=0;
        }
        
        num1=num1/10;
        num2=num2/10;
    }
    
    while(num1 != 0){
        p=num1%10;
        sum=carry+p;
        if(sum>9){
            carry=1;
            count++;
        }
        else{
            carry=0;
        }
        num1=num1/10;
    }
    
    while(num2 != 0){
        p=num2%10;
        sum=carry+p;
        if(sum>9){
            carry=1;
            count++;
        }
        else{
            carry=0;
        }
        num2=num2/10;
    }
    
    return count;
}

int main() {
   int num1, num2;
   cin>>num1>>num2;
   int d= countCarry(num1,num2);
   cout<<d;

    return 0;
}
