#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
    int s1=2;
    int s2=4;
    int n=2;
    int val=0;
    if(s1<s2){
        val = s1*n;
    }
    else val = s2*n;
    for(int i=0;i<n;i++){
        int count = max(s1*i,s2*(n-i));
        if(count<val){
            val = count;
        }
    }
    cout<<count;
}