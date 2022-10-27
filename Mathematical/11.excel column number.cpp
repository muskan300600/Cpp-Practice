#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int res=0;
    string A = "AB";
    for(int i=0;i<A.length();i++){
        char ch = A[i];
        res = res*26 + (ch-'A')+1;
    }
    cout<<res;
}