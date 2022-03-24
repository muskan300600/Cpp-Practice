#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "practice";
    vector<char> str;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            str.push_back(s[i]);
            s[i]='0';
        }
    }

    reverse(str.begin(),str.end());
    int num = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            s[i]=str[num];
            num++;
        }
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }

}