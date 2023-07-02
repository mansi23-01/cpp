//Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sumNaturalNo=(n*(n+1)/2);
        
        int sum=0;
        for(int i=0; i<n-1; i++){
            sum=sum+array[i];
        }
        return sumNaturalNo - sum;
    }
};

#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }
  int c=n+1;
   int natural=(c*(c+1))/2;
  
  int sum=0;
  for(int i=0; i<n; i++){
      sum+=arr[i];
  }
 
  cout<<natural-sum;

    return 0;
}
