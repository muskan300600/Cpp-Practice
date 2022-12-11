#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main(){
    int arr[] = {12, 1, 2, 3, 0, 11, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    set<int> s;
    for(int i=n-1;i>=0;i--){
        s.insert(arr[i]);
        auto it = s.lower_bound(arr[i]);
        v.push_back(distance(s.begin(),it));
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}