#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s1 = "aacdb";
    string s2 = "gafd";
    string s = s1+s2;
    string x="";

    // for(int i=0;i<s.length();i++){
    //     freq = 0;
    //     freq=count(s.begin(),s.end(),s[i]);
    //     v.push_back(freq);
    // }

    // for(int i=0;i<v.size();i++){
    //     if(v[i]==1){
    //         x = x+s[i];       
    //     }
    // }

    // cout<<x;    

    int count[26]={0};

    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(count[s[i]-'a']==1){
            x = x+s[i];
        }
    }

    cout<<x;

    // string temp="";
    
    // for(int i=0;i<s1.length();i++){
    //     if(s2.find(s1[i])==string::npos){
    //         temp+=s1[i];
    //     }
    // }
    // for(int i=0;i<s2.length();i++){
    //     if(s1.find(s2[i])==string::npos){
    //         temp+=s2[i];
    //     }
    // }
    // if(temp.empty())
    //   cout<<-1;
    // else
    //   return temp;
}