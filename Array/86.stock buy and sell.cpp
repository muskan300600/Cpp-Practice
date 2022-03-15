#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[]={5,2,6,1,4,1};
    int n = sizeof(a)/sizeof(a[0]);
    int sell = a[0];
    int maxProfit=0;
    for(int i=0;i<n;i++){
        sell = min(sell,a[i]);
        int profit = a[i]-sell;
        maxProfit = max(profit,maxProfit);
    }
    cout<<maxProfit;
}