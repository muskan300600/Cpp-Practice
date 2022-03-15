#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int intervals = {{1,3},{2,4},{6,8},{9,10}}
    int n = 4;
    vector<vector<int>> v;
    sort(intervals,intervals+n);
    v.push_back(intervals[0]);
    int j=0;
    for(int i=1;i<n;i++){
        if(v[j][1]>=intervals[i][0]){
            v[j][1]=max(v[j][1],intervals[i][i]);
        }
        else{
            v.push_back(intervals[i]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}