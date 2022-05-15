#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string S = "abCD";
    string str = "";
    string n="";
    for(int i=0;i<S.length();i++){
        if(S[0]>=97 & S[0]<=122){
            if(S[i]>=97 & S[i]<=122){
                str = str+S[i];
            }
            else{
                n = S[i]+32;
                str = str+n;
            }
        }

        else if(S[0]>=65 & S[0]<=90){
            if(S[i]>=65 & S[i]<=90){
                str = str+S[i];
            }
            else{
                n = S[i]-32;
                str = str+n;
            }
        }
        }

        cout<<str;
    
}