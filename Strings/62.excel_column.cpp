#include <iostream>
#include <algorithm>
#include <string>

int main(){
    int n;
    cin>>n;
    string ans="";
    while(n){
        ans = (char)((n-1)%26+'A')+ans;
        n = (n-1)/26;
    }
    cout<<ans;
}