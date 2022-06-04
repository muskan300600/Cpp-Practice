#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "12";
    int rem =0;
    for(int i=0;i<s.length();i++){
        rem = rem * 10 + (s[i]-'0');
        rem = rem % 11;
    }

    if (rem ==0) cout<<1;
    else cout<<0;
}