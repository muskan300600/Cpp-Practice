#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr = {2, 8, 5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({arr[i],i});
    }
    int count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        while(v[i].second !=i){
            int temp = v[i].second;
            swap(v[i],v[temp]);
            count++;
        }
    }
    cout<<count;
}