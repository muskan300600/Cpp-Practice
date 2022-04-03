#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string str = "practice";
    for(int i=0;i<str.length();i++){
        str[i]=str[i]-32;
    }
    cout<<str;
}