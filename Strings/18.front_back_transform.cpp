#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "Hello";
    int num;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' & s[i]<='z'){
            num = int(s[i])-int('a');
            s[i]= int('z') - num;
        }
        else if(s[i]>='A' & s[i]<='Z'){
            num = int(s[i])-int('A');
            s[i]= int('Z')-num;
        }
    }

    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}