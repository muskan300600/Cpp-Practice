#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "abcab";
    unordered_map<int,int> um;
    int count=s.length();
    for(int i=0;i<s.length();i++){
        if(um.find(s[i])!=um.end()){
            count = count+um[s[i]];
        }
        um[s[i]]++;
    }
    cout<<count;
}