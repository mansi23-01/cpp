#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key ){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
            
        }
    }
    return 0;
}

int main() {
   int arr[8]={3,4,2,6,5,7,8,1};
   cout<<"enter the key"<<endl;
   int key;
   cin>>key;
   
  bool found = linearSearch(arr,8,key);
  
  if(found){
      cout<<"key is present"<<endl;
  }
  else{
      cout<<"key is absent"<<endl;
  }

    return 0;
}
