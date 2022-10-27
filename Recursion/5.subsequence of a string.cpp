#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void subseq(string t,int i,int n,string s){
    if(i==n){
        cout<<t;
    }
    else{
        subseq(t,i+1,n,s);
        t+=s[i];
        subseq(t,i,n,s);
    }
}

int main(){
    string s = "abcd";7
    int n = s.length();
    cout<<subseq("",0,n,s);
}