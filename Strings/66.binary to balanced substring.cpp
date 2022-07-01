#include <iostream>
#include <algorithm>
#include <string>

int main(){
    string str = "1010111000";
    int n = str.length();
    int res=0;
    int count0=0,count1=0;
    for(int i=0;i<n;i++){
        if(str[i]=="0") count0++;
        else count1++;
        if(count0==count1) res++;
    }

    if(count0!=count1){
        res = -1;
    }

    cout<<res;
}