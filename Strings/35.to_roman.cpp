#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string romans[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    string val="";
    for(int i=12;i>=0;i--){
        while(n>=num[i]){
            val = val+romans[i];
            n = n-num[i];
        }
    }
    cout<<val;
}