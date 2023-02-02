#include <iostream>
using namespace std;
class Animal{
  public:
  int age;
  int weight;
  public:
  void speak(){
      cout<<"speaking"<<endl;
  }
};


//multilevel inheritance
class dog : public Animal{
    
};

class germansephard: public dog{
    
};
int main() {
    dog d;
    d.speak();
    
    germansephard g;
    g.speak();

    return 0;
}


//Multiple Inheritance 
#include <iostream>
using namespace std;
class Animal{
    public:
 int height;
 int weight;
  public:
  void bark(){
      cout<<"barking"<<endl;
  }
};
class Human{
    public:
    int hair;
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class hybrid: public Animal, public Human{
    public:
    void both(){
        cout<<"barking and speaking";
    }
};
int main(){
    hybrid jacson;
    jacson.bark();
    jacson.speak();
    jacson.both();
}

//hierarchical
//parent class A = we can inheritate B and C 
//ex: animal= dog, billi both inheritate from animal

//Hybrid 
//combination of more than 1 type of heritance
