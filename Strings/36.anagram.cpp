#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s1 = "aafga";
    string s2 = "jjvbvd";
    int count1[26]={0};
    int count2[26]={0};

    if(s2.length()>s1.length()){
        swap(s1,s2);
    }
    for(int i=0;i<s1.length();i++){
        count1[s1[i]-'a']++;
    }

    for(int i=0;i<s2.length();i++){
        count2[s2[i]-'a']++;
    }

    int val=0;
    for(int i=0;i<26;i++){
        val = val+abs(count1[i]-count2[i]);
    }

    cout<<val;
}
