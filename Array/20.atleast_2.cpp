#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[] = {4,6,9,3,0,2,8};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v;
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        v.push_back(a[i]);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
        
}