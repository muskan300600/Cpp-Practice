#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "the quick brown fox";
    int n = s.length();
    vector<int> v;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            count++;
        }
        else if(s[i]==' '){
            v.push_back(count);
            count=0;
        }
    }
    v.push_back(count);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}