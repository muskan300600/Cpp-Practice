#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string S = "what is your name ?";
    vector<char> str;
    for(int i=0;i<S.length();i++){
        if(S[i]!='a'&S[i]!='e'&S[i]!='i'&S[i]!='o'&S[i]!='u'){
            str.push_back(S[i]);
        }
    }

    for(int i=0;i<str.size();i++){
        cout<<str[i];
    }
}