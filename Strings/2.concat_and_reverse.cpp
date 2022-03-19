#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "Hi!";
    string s2 = "How are you?";
    string s = s1+s2;
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
}