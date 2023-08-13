#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cin>>num1>>num2;

    int c, digit1, digit2;

    int count=0;
    int carry=0;

    while(num1!=0 && num2!=0){
        digit1= num1 % 10;
        
       digit2 = num2 % 10;
         c= carry+digit1+digit2;
            if(c>=10){
                carry=1;
                count++;
            }
            else{
                carry=0;
            }
        num2= num2/10;
        num1=num1/10;
    }

    while(num1!=0){
        digit1= num1%10;
        c= carry+digit1+digit2;
        if(c>=10){
            carry=1;
            count++;
        }
        else{
            carry=0;
        }
        num1= num1/10;
    }

      while(num2!=0){
        digit2= num2%10;
        c= carry+digit1+digit2;
        if(c>=10){
            carry=1;
            count++;
        }
        else{
            carry=0;
        }
        num2= num1/10;
    }

    cout<<count;
}

//using function

#include <iostream>
using namespace std;

int NumberOfCarries(int num1 , int num2){

 int c, digit1, digit2;

    int count=0;
    int carry=0;

    while(num1!=0 && num2!=0){
        digit1= num1 % 10;
        
       digit2 = num2 % 10;
         c= carry+digit1+digit2;
            if(c>=10){
                carry=1;
                count++;
            }
            else{
                carry=0;
            }
        num2= num2/10;
        num1=num1/10;
    }

    while(num1!=0){
        digit1= num1%10;
        c= carry+digit1+digit2;
        if(c>=10){
            carry=1;
            count++;
        }
        else{
            carry=0;
        }
        num1= num1/10;
    }

      while(num2!=0){
        digit2= num2%10;
        c= carry+digit1+digit2;
        if(c>=10){
            carry=1;
            count++;
        }
        else{
            carry=0;
        }
        num2= num1/10;
    }
  return count;

}

int main() {
   int num1, num2;
   cin>>num1>>num2;

   int result= NumberOfCarries(num1, num2);

   cout<<result;
}
