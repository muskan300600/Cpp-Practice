#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n = 28;
    string res="";
    while(n){
        int rem = n%26;
        if(rem==0){
            res = 'Z'+res;
            n--;
        }
        else{
            res = (char)(rem-1+'A')+res;
        }
        n = n/26;
    }
    cout<<res;
}