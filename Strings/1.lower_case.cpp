#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "ABCDE";
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i]+32;
        }
    }
    cout<<s;

    //using stl
    // transform(s.begin(),s.end(),s.begin(),::tolower);
}


