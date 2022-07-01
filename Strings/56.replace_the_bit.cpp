#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int main(){
    int n = 13;
    int k;
    cin>>k;
    int a[100];
    int i=0;
    vector<int> v;
    while(n>0){
        a[i]= n%2;
        n = n/2;
        i++;
    }

    for(int j=i-1;i>=0;i--){
        v.push_back(a[i]);
    }

    if(v[k]==1){
        v[k]==0;
    }



