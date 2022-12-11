#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str = "000000000000000000000000000000";
    int j=0;
    while(n){
        if(n&1==1) str[29-j]='1';
        else str[29-j]='0';
        n = n/2;
        j++;
    }
    cout<<str;
}