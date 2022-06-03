#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "01111101111";
    vector<int> v;
    int count=0;
    for(int i=0;i<s.length();i++){
        
        if(s[i]=='1'){
            count++;
        }
        
        else if(s[i]=='0'){
            
            count=0;            
        }
        v.push_back(count);
        
    }
    int max = v[0];
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max = v[i];
        }
    }

    cout<<max;
}