#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    //Using sorting
    sort(arr,arr+n);
    int sum =0;
    bool val = false;
    for(int i=0;i<n;i++){
        int l=i+1;
        int h = n-1;
        while(l<h){
            sum = arr[i]+arr[l]+arr[h];
            if(sum==0) val = true;
            else if(sum>0) high--
            else low++;
        }
    }
    cout<<val;

    //Using hashmap
    // unordered_map<int,int> um;
    // for(int i=0;i<n;i++){
    //     um[arr[i]]++;
    // }
    // for(int i=0;i<n;i++){
    //     um.erase(arr[i]);
    //     for(int j=i+1;j<n;j++){
    //         um.erase(arr[j]);
    //         if(um.find(-(arr[i]+arr[j]))!=um.end()){
    //             val = true;
    //             break;  
    //         }
    //         um.insert(make_pair(arr[j], 1));
    //     }
    //     um.insert(make_pair(arr[i], 1));
    // }
    // cout<<val;
    
}