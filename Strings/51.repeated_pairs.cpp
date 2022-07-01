#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    string s = "aaaab";
    int n = s.length();
    int count[26]={0};
    for(int i=0;i<n;i++){
        count[s[i]-'a']++;
    }

    long long val=0;
    for(int i=0;i<26;i++){
        val = val + pow(count[i],2);
    }

    cout<<val;
     
}