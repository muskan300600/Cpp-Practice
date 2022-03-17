#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int price[] = {10, 22, 5, 75, 65, 80};
    int n = sizeof(price)/sizeof(price[0]);
    int profit[n];
    memset(profit,0,sizeof(profit));
    int max_price = price[n-1];
    for(int i=n-2;i>=0;i--){
        if(price[i]>max_price){
            max_price = price[i];
        }

        profit[i]= max(profit[i+1],max_price-price[i]);
    }

    int min_price = price[0];
    for(int i=1;i<n;i++){
        if(price[i]<min_price){
            min_price=price[i];
        }
        profit[i]=max(profit[i - 1],profit[i] + (price[i] - min_price));;
    }
    int result = profit[n-1];
    cout<<result;
}