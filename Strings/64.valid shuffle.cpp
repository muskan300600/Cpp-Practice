#include <iostream>
#include <algorithm>
#include <string>

int main(){
    string s1="ab";
    string s2 = "12";
    string res = s1+s2;
    if(res.length()!=(s1.length()+s2.length())) cout<<"No";
    else{
        int i=0,j=0,k=0;
        while(k<res.length()){
            if(i<s1.length() && res[k]==s1[i]) i++;
            else if(j<s2.length() && res[k]==s2[j]) j++;
            else{
                break;
            }
            k++;
        }
        if(i<s1.length() || j<s2.length()) cout<<"No";
        else cout<<"Yes";
    }
}