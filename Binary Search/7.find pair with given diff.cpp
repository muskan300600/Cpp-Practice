#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {5, 20, 3, 2, 5, 80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 78;
    int low = 0;
    int high = 1;
    bool val = false;
    while(low<=n-1 && high<n){
        if(low!=high){
            if(arr[high]-arr[low]==k){
                val = true;
                break;
            }
            else if ((arr[high]-arr[low])<k) high++;
            else low--;
        }
        else high++;
    }
    cout<<val;
}

//Using Set
// set<int>s(arr,arr+size);
//     for(int i=0; i<size; i++){
//         int sum = n+arr[i];
//         if(s.find(sum) != s.end()){
//             return 1;
//         }
//     }
//     return 0;

//USing map
// unordered_map<int, int> mpp;
//     for (int i = 0; i < size; i++) {
//         mpp[arr[i]]++;
//     }
//     for (int i = 0; i < size; i++) {
//         if (mpp.find(n + arr[i]) != mpp.end()) {
//             return true;
//         }
//     }
//     return false;
//     }