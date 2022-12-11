#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int main(){
    int arr[]={10,5,-5,15,-10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=5;
    unordered_map<int,int> um;
    int start = 0;
    int end=-1;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum +=arr[i];
        if(currSum==sum){
            start = 0;
            end=i;
            break;
        }
        else if(um.find(currSum-sum)!=um.end()){
            start=um[currSum-sum]+1;
            end = i;
            break;
        }
        um[currSum]=i;
    }
    if(end==-1) cout<<"No subarray found";
    else cout<<start<<" "<<end;
}