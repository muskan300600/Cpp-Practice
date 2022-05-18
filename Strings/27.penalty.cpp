#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "1012012112110";
    int count =0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='2'){
            if(s[i+1]=='1'){
                count++;
            }
        }
    }

    cout<<count;
}