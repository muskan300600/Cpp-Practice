#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s = "practicemakesyouperfect";
    string x = "makesyouperfectpractice";
    if(s.length()!=x.length()){
        cout<<0;
    }
    string a = s+s;
    cout<<(a.find(x)!=string::npos);

}