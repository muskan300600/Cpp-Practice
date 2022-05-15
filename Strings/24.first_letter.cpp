#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string S = "big is good";
    string str="";
    str = str+S[0];
    for(int i=1;i<S.length();i++){
        //str = str+S[0];
        if(S[i-1]==' '){
            str = str+S[i];
        }
        
    }
    cout<<str;
}