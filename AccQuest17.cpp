#include <iostream>
using namespace std;
int isPalin(int i){

int rev=0;
int num2=i;
while(num2!=0){
    int digit= num2%10;
    rev= (rev*10)+digit;
    num2= num2/10;
}
return rev;

}
int main() {
int a1,a2;
cin>>a1>>a2;

for(int i=a1; i<=a2; i++){
    if(i==isPalin(i)){
        cout<<i<<" ";
    }
}

}
