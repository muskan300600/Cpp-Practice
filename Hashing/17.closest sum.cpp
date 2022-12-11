#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;

int main(){
    int arr[] = {-7,9,8,3,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 2;
    int n = arr.size(),closestsum = INT_MAX;
        int i,j,k,sum;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;i++){
            j = i+1;
            k=n-1;
            while(j<k){
                sum=arr[i]+arr[j]+arr[k]; 
                if(sum==target) return sum;
                if(abs(target-sum)<abs(target-closestsum)){
                    closestsum=sum;
                }
                if(abs(target-sum)==abs(target-closestsum))
                    closestsum=max(sum,closestsum);  
                    
                if(sum<target){
                    j++;
                }
                else k--;
            }
        }
    cout<<closestsum;
}