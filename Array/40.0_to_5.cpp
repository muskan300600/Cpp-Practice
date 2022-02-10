#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int a = 1004;
    vector<int> v;
    int rem;
    while(a>0){
        rem = a%10;
        if(rem==0){
            v.push_back(5);
        }
        else{
            v.push_back(rem);
        }
        a = a/10;
    }


    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
    }

    //Without vector
    // string str = to_string(n);
    // int l = str.length();
    // for(int i=0;i<l;i++){
    //     if(str[i]=='0'){
    //         str[i]='5';
    //     }
    // }
    // n = stoi(str);
    // cout<<n;
}