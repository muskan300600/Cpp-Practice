#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main(){
    string S = "mississipi";
    string s="";
    int k=2;
    int n = S.length();
    for(int i=0;i<n-1;i++){
        if(S[i+1]!=S[i]){
            s+=S[i];
        }
    }
    s+=S[n-1];
    S=s;
    unordered_map<char,int> um;
    for(int i=0;i<n;i++){
        um[S[i]]++;
    }
    int count=0;
    for(auto it:um){
        if(it.second==k){
            count++;
        }
    }
    return count;
}