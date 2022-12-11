#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main(){
    int arr[]={10,5,-5,15,-10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=5,currSum=0;
    unordered_map<int,int> um;
    int largest = -1,start,end;
    for(int i=0;i<n;i++){
        currSum += arr[i];
        if(currSum==sum){
            start = 0;
            end=i;
            largest = max(largest,(end-start)+1);
        }
        else if(um.find(currSum-sum)!=um.end()){
            start = um[currSum-sum]+1;
            end=i;
            largest = max(largest,(end-start)+1);
        }

        um.insert({currSum,i});
    }
    cout<<start<<" "<<end;

    //For 0 sum
    //  unordered_map<int, int> presum;
 
    // int sum = 0; 
    // int max_len = 0;
    // for (int i = 0; i < n; i++) {
    //     sum += arr[i];
 
    //     if (arr[i] == 0 && max_len == 0)
    //         max_len = 1;
    //     if (sum == 0)
    //         max_len = i + 1;
    //     if (presum.find(sum) != presum.end()) {
    //         max_len = max(max_len, i - presum[sum]);
    //     }
    //     else {
    //       
    //         presum[sum] = i;
    //     }
    // }
 
    // return max_len;
}