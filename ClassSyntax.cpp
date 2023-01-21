//Write a class "student" that has three private variables...... "name" "age" "gender" , The class should have a constructor that initialises these variables and also 
//it should have a public function called " displayInfo" that print out student's name, age and gender.

#include <iostream>
using namespace std;

class student{
    
    string name;
    int age;
    string gender;
    
    public:
    
    student(string name,int age, string gender){ //constructor
    this->name=name;
    this->age=age;
    this->gender=gender;
    }
    
    void displayInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
};
int main() {
    
    student s1("Raj",22,"male");
    student s2("simran",21,"female");
    
    s1.displayInfo();
    s2.displayInfo();

    return 0;
}
