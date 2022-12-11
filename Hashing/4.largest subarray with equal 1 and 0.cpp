#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main(){
    int arr[]={1,0,0,1,1,1,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                arr[i] = -1;
            }
        }
        
        unordered_map<int, int> mp;
        
        int longest = 0;
        
        mp[0] = -1;
        
        int sum = 0;
        
        for(int i = 0; i < n; i++)
        {
            sum += arr[i];
            
            if(mp.count(sum))
            {
                longest = max(longest, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }

    cout<<largest;
}