#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "aabacbebebe";
    int k=3;
    int i=0,j=0;
    int result = -1;
    unordered_map<char,int> um;
    while(j<s.size()){
        um[s[i]]++;
        if(um.size()<k){
            j++;
        }
        else if(um.size()==k){
            result = max(result,j+i-1);
            j++;
        }
        else if(um.size()>k){
            while(um.size()>k){
                um[s[i]]--;
                if(um[s[i]]==0){
                    um.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<result;
}