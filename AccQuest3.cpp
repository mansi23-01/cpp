#include <bits/stdc++.h>
using namespace std;

bool checkPassword(string str, int n){
    if(n<4){
        return 0;
    }
    if(str[0]>='0' && str[0]<='9'){
        return 0;
    }

    bool isCapital=false;
    bool isNumber=false;

    for(int i=0; i<n; i++){
      if(str[i]=='/' || str[i]==' '){
          return 0;
          break;
      }
     if(str[i]>='0' && str[i]<='9'){
         isNumber=true;
     }
       if(str[i]>='A' && str[i]<='Z'){
           isCapital=true;
       }

    }

    if(!isCapital || !isNumber){
        return 0;
    }
    return 1;

}

int main() {
  string str;
    cin >> str;
    int n = str.size();
    bool result = checkPassword(str, n);
    cout << result << endl;
}
