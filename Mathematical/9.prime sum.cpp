#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int a){
    if(a==1) return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return true;
    }
    return false;
}

int main(){
    int sum;
    cin>>sum;
    vector<int> v;
    for(int i = sum-1;i>=sum/2;i--){
        if(isPrime(i) && isPrime(A-i)){
            v.push_back(i);
            v.push_back(A-i);
            break;
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}