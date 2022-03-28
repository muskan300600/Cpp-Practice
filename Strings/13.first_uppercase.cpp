#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "i love programming";
    s[0] = s[0]-32;
    for(int i=1;i<s.length();i++){
        
        if(s[i-1]==' '){
            s[i]=s[i]-32;
        }
    }

    cout<<s;
}