#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "aabb";
    for(int i=0;i<s.length();i++){
        if(s[i+1]!=s[i]){
            cout<<s[i]<<" ";
        }
    }
}