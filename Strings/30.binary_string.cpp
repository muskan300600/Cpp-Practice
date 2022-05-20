#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "1111";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count++;
        }
    }
    
    int num =0;
    for(int i=0;i<count;i++){
        num = num+i;
    }

    cout<<num;
}