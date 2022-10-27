#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void powerset(string s,int i,str curr){
    if(i==s.length()){
        cout<<curr;
        return;
    }
    powerset(s,i+1,curr+s[i]);
    powerset(s,i+1;curr);
}

int main(){
    string s;
    cin>>s;
    string curr="";
    int i=0;
    cout<<powerset(s,i,curr);
}