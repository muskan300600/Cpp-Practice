#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int arr[] = {1, 4, 45, 6, 0, 19};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lowest = INT_MAX;
    int currSum = 0;
    int sum = 51;
    int start = 0, end=0;
    while(end<n){
        while(currSum<=x && end<n){
            currSum+=arr[end++];
        }

        while(currSum>x && start<n){
            if(end-start < lowest){
                lowest = end-start;
            }
            currSum-=arr[start++];
        }
    }
    return lowest;
}