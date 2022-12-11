#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int set =0;
    int non_set =0;
    int n;
    cin>>n;
    while(n){
        if(n&1==1) set++;
        else non_set++;
        n=n>>1;
    }
    cout<<set<<" "<<non_set;
}