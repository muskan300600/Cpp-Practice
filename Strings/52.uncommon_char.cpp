#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    string s1 = "characters";
    string s2 = "alphabets";
    string str="";
    
    int count1[26]={0};
    int count2[26]={0};
    for(int i=0;i<s1.length();i++){
        count1[s1[i]-'a']++;
    }

    int count[26]={0};
    for(int i=0;i<s2.length();i++){
        count2[s2[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(count1[i] != 0 & count2[i] == 0)
            {
                str += (i + 'a');
            }
            else if(count1[i] == 0 & count2[i] != 0)
            {
                str += (i + 'a');
            }
    }


    if(str=="") cout<<"-1";
    else cout<<str;

}