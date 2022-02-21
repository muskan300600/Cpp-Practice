#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    int start =0;
    int end = n-1;
    vector<int> v;
    while(start<=end){
        v.push_back(a[start]);
        v.push_back(a[end]);
        start++;
        end--;
    }

    for(int i=0;i<v.size();i++){
        a[i]=v[i];
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
        
}