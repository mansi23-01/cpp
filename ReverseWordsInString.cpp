#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int main() {

    string input;
    getline(cin,input);

    istringstream iss(input);
    string word;
    vector <string> words;

    while(iss >> word){
        words.push_back(word);
    }

    for(int i=words.size()-1; i>=0; i--){
      cout<<words[i]<<" ";
    }
    cout<<endl;
    
}
