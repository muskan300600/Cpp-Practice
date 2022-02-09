#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> v;
    for(int i=0;i<n;i++){
        if(i%2==1){
            if(a[i-1]>a[i]){
                swap(a[i],a[i-1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(i%2==1){
            if(a[i-1]>a[i]){
                v.push_back(0);
                break;
            }
        }
    }
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}