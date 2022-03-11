#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int a[] = {1, 2, 3, 4, 7,1,2,2,2,2,4,5,0};
    int n = sizeof(a)/sizeof(a[0]);
    int index=0,count=0,i=0;
    vector<int> v;
    while(index<n && i<n){
        if(a[i]==a[index]){
            count++;
        }
        i++;
        v.push_back(count);
    }
    int freq=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==1){
            freq++;
        }
    }

    if(freq==n==1){
        cout<<"GIRLS";
    }
    else cout<<"BOYS";
   
    
}