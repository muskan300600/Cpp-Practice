#include <iostream>
#include <algorithm>
#include <vector>
#include <hash_map>
using namespace std;

bool compare(pair<int,int> p1, pair<int,int> p2){
    if(p1.second==p1.first){
        return p1.first>p2.first;
    }
    return p1.first>p1.second;
}

int main(){
    int arr = {1,1,1,2,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    unordered_map<int,int> um;
    for(int i=0;i<n;i++){
        um[arr[i]]++;
    }

    vector<pair<int,int>> freq(um.begin(),um.end());
    sort(freq.begin(),freq.end(),compare);
    vector<int> ans;
    for(int i=0;i<freq.size();i++){
        ans.push_back(freq[i].first);
        k--;
        if(k==0) break;
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}