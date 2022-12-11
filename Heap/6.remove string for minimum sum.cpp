#include <iostream>
#include <algorithm>
#include <map>
#define MAX 100
using namespace std;

int main(){
    string s = "abccc";
    int k = 1;
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }

    char ch;
    while(k--){
        int maxi=INT_MIN;
        for(auto x:m){
            if(x.second>maxi){
                maxi = x.second;
                ch = x.first;
            }
        }
        m[ch]--;
    }

    int res=0;
    for(auto x:m){
        res+= pow(x.second,2);
    }
    cout<<res;
}