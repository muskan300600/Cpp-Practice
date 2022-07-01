#include <iostream>
#include <algorithm>
#include <string>

int main(){
    string S = "aaaabbaa";
    int n = S.length();
    int maxlen=1;
    int start=0;
    int l,r;
    for(int i=0;i<n;i++){
        int l = i-1;
        int r = i+1;
        while(r<n && S[i]==S[r]) r++;
        while(l>=0 && S[i]==S[l]) l--;
        while(l>=0 && r<n && S[i]==S[r]){
            r++;
            l--;
        }

        int len = r-l-1;
        if(maxlen<len){
            maxlen = len;
            start = l+1;
        }
    }
    cout<<S.substr(start,maxlen);
}