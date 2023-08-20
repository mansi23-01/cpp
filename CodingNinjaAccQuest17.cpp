#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    int m;
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    vector<int> a;
    vector <int> b;

    for(int i=0; i<n; i++){
        a.push_back(arr1[i]);
    }
    for(int i=0;i<m; i++){
        b.push_back(arr2[i]);
    }

    for(int i=0; i<b.size(); i++){
        a.push_back(b[i]);
    }

    sort(a.begin(), a.end());

    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
 

}
