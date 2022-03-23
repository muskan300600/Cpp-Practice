#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "101";
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='0' || str[i]=='1'){
            count++;
        }
    }
    if(count==str.length()){
        cout<<"Yes";
    }
    else cout<<"No";
}