// check string is pallindrome or not
#include <iostream>
using namespace std;

bool checkPallindrome(char name[], int n){
    int start=0;
   int end=n-1;
   
   while(start<=end){
       if(name[start]!=name[end]){
           return 0;
       }
       else{
           start++;
           end--;
       }
   }
   return 1;
}

int main() {
   char name[20];
    cout<<"enter the name ";
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    
    
    //name[2]=0;//this will print only till index 1 because on index 2 it is 0 so after that it will stop
    //cout<<name;
    
  
  
  int count=0;
    for(int i=0; name[i]!='\0';i++){ //to print the lenght of char (\0=null character)
        count++;
    }
    cout<<count<<endl;
    
     //reverse the name
    
   int start=0;
   int end=count-1;
   while(start<end){
       swap(name[start],name[end]);
       start++;
       end--;
   }
  cout<<"reverse name is": <<name<<endl;
  
  cout<<"pallindrome or not: "<<checkPallindrome(name,count);

}
