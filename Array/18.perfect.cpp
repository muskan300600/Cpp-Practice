#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPerfect(int a[],int n){
    vector<int> v1;
    int count =0;
    for(int i=n-1;i>=0;i--){
        v1.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]=v1[i]){
            count++;
        }
    }
    if(count==n){
        return true;
    }
    else return false;

}

int main(){
    int a[] = {1,2,3,3,2,0};
    int n = sizeof(a)/sizeof(a[0]);
    if(isPerfect(a,n)){
        cout<<"Perfect"<<endl;
    }
    else
        cout<<"Not Perfect"<<endl;
}
