#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=32;i=i+2){
        int mask = 1<<i;
        mask= ~mask;
        n = n&mask;
    }
    cout<<n;
}