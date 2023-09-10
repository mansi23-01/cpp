#include <iostream>
using namespace std;
bool isAnagram(string input1, string input2){
    for(int i=0; i<input1.size(); i++){
        bool found= false;
        for(int j=0; j<input2.size(); j++){
            if(input1[i]==input2[j]){
                found=true;
                break;
            }
        }
        if(!found){
            return false;
        }
    }
    return true;
}
int main() {
  string input1, input2;
  cin>>input1;
  cin>>input2;

  if(isAnagram(input1, input2)){
    cout<<"yes";
  }
  else{
      cout<<"no";
  }
}

//method2
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string input1, string input2) {
    if (input1.length() != input2.length()) {
        return false; // Anagrams must have the same length
    }

    // Sort both strings
    sort(input1.begin(), input1.end());
    sort(input2.begin(), input2.end());

    // Compare the sorted strings
    return input1 == input2;
}

int main() {
    string input1, input2;
    cin >> input1;
    cin >> input2;

    if (isAnagram(input1, input2)) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}

