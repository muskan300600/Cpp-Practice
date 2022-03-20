#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "Geeks";
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            cout<<s[i];
        }
    }
}