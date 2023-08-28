#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(const string& input){
    stringstream ss(input);
    vector <string> words;
    string word;

    while(ss>>word){
        words.push_back(word);
    }

    reverse(words.begin(),words.end());

    string reversed;

    for(const string& w: words){
      reversed += w + " ";
    }
    if(!reversed.empty()){
        reversed.pop_back();
    }
    return reversed;
}

int main() {
    string input;
    getline(cin,input);

    string output= reverseWords(input);
    cout<<output;
}
