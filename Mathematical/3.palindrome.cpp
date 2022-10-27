#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int check = n;
    int val=0,rem=0;
    while(n){
        rem = n%10;
        val = val*10 + rem;
        n = n/10;
    }
    if(check==val) cout<<"true";
    else cout<<"false";
}