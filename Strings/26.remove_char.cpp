#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string string1 = "computer";
    string string2 = "cat";
    
    string s = "";
    for(int i=0;i<string1.length();i++){
        int k =0;
        for(int j=0;j<string2.length();j++){
            if(string1[i]==string2[j]){
                k = k+1;
            }
        }

        if(k==0){
            s = s+string1[i];
        }
    }
    cout<<s;
}