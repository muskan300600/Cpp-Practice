#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s1 = "geeks";
    string s2 = "eegsk";
    if(s1.length()!=s2.length()){
        cout<<0;
    }

    int count[26]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]-'a']++;
    }

    for(int i=0;i<s2.length();i++){
        count[s2[i]-'a']--;
    }
    
    int val=0;
    int n = sizeof(count)/sizeof(count[0]);
    for(int i=0;i<n;i++){
        if(count[i]==0){
            val++;
        }
    }  

    if(val==n){
        cout<<1;
    }  
    else cout<<0;
    
}