#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "ckjkUUYII";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            count++;
        }
    }
    cout<<count;
}