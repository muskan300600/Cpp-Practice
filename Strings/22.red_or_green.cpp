#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "GRGRGR";
    int countg=0,countr=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='G')
            countg++;
        else countr++;
    }

    if(countg<countr)
        cout<<countg;
    else cout<<countr;
}