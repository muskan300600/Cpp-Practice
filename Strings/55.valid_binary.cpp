#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    string s = "11100";
    int n = s.length();
    int first = -1;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            first = i;
            break;
        }
    }

    int last = -1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            last = i;
            break;
        }
    }

    int val = -1;
    for(int i = first+1;i<last;i++){
        if(s[i]='0'){
            val =0;
        }
    }

   if(val = 0) cout<<"INVALID";
   else cout<<"VALID";
    
}