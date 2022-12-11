#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int l=2;
    int r=3;
    int n = 17;
    for(int i=l;i<=r;i++){
        n = n^(1<<(i-1));
    }
    cout<<n;
}