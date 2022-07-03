#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <string>
using namespace std;

int solve(int n,int k){
    deque<int> q;
    for(int i=1;i<=n;i++){
        q.push_back(i);
    }

    while(q.size()>1){
        for(int i=1;i<=k&&q.size()>1;i++){
            q.pop_front();
        }

        for(int i=1;i<=k&&q.size()>1;i++){
            q.pop_back();
        }
    }
    return q.front();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k);
    }
    return 0;
}