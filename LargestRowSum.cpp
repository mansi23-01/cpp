//print the index of largest row sum and sum also

#include <iostream>
#include <climits>
using namespace std;
int main() {
   int arr[3][3];
   
   for(int i=0;i<3; i++){
      for(int j=0; j<3; j++){
          cin>>arr[i][j];
      }
   }
   
   for(int i=0; i<3; i++){
       for(int j=0; j<3; j++){
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
   int max= INT_MIN;
   int rowIndex=-1;
   
  for(int i=0; i<3; i++){
      int sum=0;
       for(int j=0; j<3; j++){
           sum+=arr[i][j];
       }
       if(sum>max){
           max=sum;
           rowIndex=i;
       }
   }
   cout<<max<<" "<<rowIndex;

    return 0;
}
