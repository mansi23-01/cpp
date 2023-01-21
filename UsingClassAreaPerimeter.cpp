#include <iostream>
using namespace std;

class Rectangle{
    int lenght;
    int width;
    
    public:
    
    Rectangle(int lenght, int width){ //this is constructor
        this->lenght=lenght;
        this->width=width;
    }
    
     void area(){
         int c=lenght*width;
         cout<<c;
     }
     void perimeter(){
         int d=2*lenght*width;
         cout<<d;
     }
};

int main() {
    int lenght,width;
    cin>>lenght>>width;
    Rectangle s1(lenght,width);
    
    s1.area();
    cout<<endl;
    s1.perimeter();
    return 0;
}
