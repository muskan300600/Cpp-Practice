#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[]={5,3,7,1,3,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> result;
     sort(arr,arr+n,greater<int>());
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r = n-1;
        while(l<r){
            int sum = arr[l]+arr[r];
            if(sum>arr[i]) l++;
            else if(sum<arr[i]) r--;
            else{
                result.push_back(arr[l]);
                result.push_back(arr[r]);
                result.push_back(arr[i]);
                break;
            }
        }
        if(result.size()==3) break;
    }
    
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

    //To count the number of such triplets
    //  unordered_map<int,int> m;
	//     int count=0;
	//     for(int i=0;i<n;i++){
	//         m[arr[i]]++;
	//     }
	    
	//     for(int i=0;i<n;i++){
	//         for(int j=i+1;j<n;j++){
	//             int sum = arr[i]+arr[j];
	//             if(m[sum]!=0){
	//                 count++;
	//             }
	//         }
	//     }
	//     return count;
}