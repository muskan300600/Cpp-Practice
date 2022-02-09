#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[] = {1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1};
    int n = sizeof(a)/sizeof(a[0]);
    
    int count =0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            count++;
        }
    }

    vector<int> v;
    for(int i=0;i<n;i++){
        if(i<count){
            v.push_back(0);
        }
        else
            v.push_back(1);
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}