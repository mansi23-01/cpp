#include <iostream>
using namespace std;
class hero{
   private:
    int health=20;
    int age =21;
    
     public:
    char level='A';
    
    int getHealth(){
        return health;
    }
    void setHealth(int a){
        health=a;
    }
    
    int getAge(){
        return age;
    }
    void setAge(int b){
        age=b;
    }
};
int main() {
    
    hero mansi;  //object
    
   mansi.level;

    cout<<mansi.level<<endl;
    
    cout<<mansi.getHealth()<<endl;
    mansi.setHealth(70);
    cout<<mansi.getHealth()<<endl;
    
    //cout<<mansi.getAge()<<end;
    mansi.setAge(25);
    cout<<mansi.getAge()<<endl;
    
}
