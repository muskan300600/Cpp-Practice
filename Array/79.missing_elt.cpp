#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[]={4, 8, 1, 3, 7};
    int b[]={7, 4, 3, 1};
    vector<int> v;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<n-1;i++){
        v.push_back(b[i]);
    }
    for(int i=0;i<v.size();i++){
        if(a[0]==a[i]){

        }
    }

    // long long ans = a[n-1];
        
    //     for(int i=0; i<n-1; i++)
    //         ans=ans^a[i]^b[i];
            
    //     return ans;
}