#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s1,s2;
    int w1=0,w2=0;
    for(int i=0;i<t;i++){
        cin>>s1>>s2;
        for(int j=0;j<s1.length();i++){
            w1 = w1+(int)(s1[i]-96);
        }
        for(int j=0;j<s2.length();i++){
            w2 = w2+(int)(s2[i]-96);
        }

        if(w1>w2) cout<<"1";
        else if(w1<w2) cout<<"2";
        else cout<<"equal";

    }
}