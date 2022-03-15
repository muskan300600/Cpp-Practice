#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> res;
    res.push_back(1);   

    for(int x=2;x<=n;x++){
        int carry=0;
        for(int i=0;i<res.size();i++){
            int val = res[i]*val+carry;
            res[i]=val%10;
            carry = val/10;
        }

        while(carry){
            res.push_back(carry%10);
            carry = carry/10;
        }
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}