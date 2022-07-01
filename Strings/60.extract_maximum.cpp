#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    string s = "100klh564abc365bg";
    int n = s.length();
    int val=0,temp=0,maxi=0;
    for(int i=0;i<n;i++){
        if(s[i]>='0' & s[i]<='9'){
            val = val*10+(s[i]-'0');
            temp = 1;
        }

        else{
            maxi = max(maxi,val);
            val=0;
        }
    }

    if(temp==0) cout<<-1;
    else cout<<max(maxi,val);
}