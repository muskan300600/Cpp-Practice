#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string a = "AXY";
    string b = "YADXCP";
    int i=0,j=0;
    while(i<a.length() & j<b.length()){
        if(a[i]==b[j]){
            i++;
        }
        j++;
    }

    if(i == a.length()) cout<<1;
    else cout<<0;
}