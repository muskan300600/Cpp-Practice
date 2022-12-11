#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int sumOfDigits(int K){
    int sum = 0;
    while(K){
        sum = sum + (K%10);
        K = K/10;
    }
    return sum;
}

int main(){
    int N = 13;
    int D = 2;
    int low = 1;
    int high = N;
    while(low<=high){
        int mid = (low+(high-low))/2;
        if(mid-sumOfDigits()<D) low = mid+1;
        else high = mid-1;
    }
    cout<<(N-high);
}