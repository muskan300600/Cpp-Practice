#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    string s="racecar";
    unordered_map<char,int> um;
    string ans = "Yes";
    for(int i=0;i<n;i++){
        um[s[i]]++;
    }
    int count=0;
    for(auto x:um){
        if(x.second%2!=0){
            count++;
        }
        if(count>1){
            ans = "No";
            break;
        }
    }
    cout<<ans;
}