#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkString(string s1,string s2){
    if(s1.size()!=s2.size()) return false;

    int count=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            count++;
        }

        if(count==2){
            return false;
        }
    } 

    if(count==1) return true;
    else return false;
}

int main(){
    string arr[] = {"bana","apple","banaba","bonanzo"};
    string s = "banana";
    string val="False";
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(checkString(arr[i],s)){
            val = "True";
        }
    }

    cout<<val;
}