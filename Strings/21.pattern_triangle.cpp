#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string S = "G^gh8";
    int n = S.length();
    string ans;
    for(int i=0;i<S.length();i++) {
        ans = ans+S;
        for(int j=0;j<=i;j++){
            S[j]='.';
        }
    }
    for(int i=0;i<ans.length();i++){
        cout<<ans[i];
        if((i+1)%S.length()==0)
            cout<<endl;
    }
}