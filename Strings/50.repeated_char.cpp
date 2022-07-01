#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "abcdeba";
    int n = s.length();
    int freq = 0;
    string val = "-1";
    vector<int> v;
    for(int i=0;i<n;i++){
        freq = count(s.begin(),s.end(),s[i]);
        v.push_back(freq);
    }

    for(int i=0;i<v.size();i++){
        if(v[i]>1){
            val = s[i];
            break;
        }
    }

    cout<<val;

    // int count[26] = {0};
        
    //     for(int i = 0; i < s.size(); i++)
    //     {
    //         count[s[i] - 'a']++;
    //     }
        
    //     for(int i = 0; i < s.size(); i++)
    //     {
    //         if(count[s[i] - 'a'] > 1)
    //         {
    //             return s[i];
    //         }
    //     }
        
    //     cout<<'#';

}