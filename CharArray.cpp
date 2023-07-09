#include <iostream>
 using namespace std;
 int getLenght(char name[]){
     int count=0;
     for(int i=0; name[i]!='\0'; i++){
         count++;
     }
     return count;
 }
int main() {
   char name[10];
   cin>>name;
   
   cout<<"your name is "<<name<<endl;
   
   cout<<"the length is "<<getLenght(name);

    return 0;
}
