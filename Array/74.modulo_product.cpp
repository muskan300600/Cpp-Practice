#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int ar[] = {1,2,3,4};
    int n = sizeof(ar)/sizeof(ar[0]);
    int mod;
    cin>>mod;
    long long int product = 1;
    for(int i=0;i<n;i++){
         product = (product*ar[i])%mod;
     }
    cout<< product%mod;
}