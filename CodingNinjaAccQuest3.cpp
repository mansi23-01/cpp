    #include <iostream>
    using namespace std;
    bool isAnagram(string input1, string input2){
        if(input1.size()!=input2.size()){
            return false;
        }

        for(int i=0; i<input1.size(); i++){
            bool found=false;
            for(int j=0; j<input2.size();j++){
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

    if(isAnagram(input1,input2)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    }
