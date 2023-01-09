#include <iostream>
using namespace std;

int printArray(int even[], int size){
    for(int i=0; i<size; i++){
        cout<<even[i]<<" ";
    }
    cout<<endl;
}


int alternateSwap(int even[],int size){
    for(int i=0;i<size; i+=2){
       if(i+1<size){
           swap(even[i], even[i+1]);
       }
   }
}

int main() {
   int even[8]={2,4,3,5,7,6,8,9};
   int odd[5]={1,3,2,4,5};
   
  alternateSwap(even,8);
   printArray(even,8);
   
    alternateSwap(odd,5);
   printArray(odd,5);
   

    return 0;
}
