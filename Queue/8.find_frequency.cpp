#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

int frequency(queue<int> &q,int k){
    int count=0;
    for(int i=0;i<q.size();i++){
        int val = q.front();
        if(val==k){
            count++;
        }
        q.pop();
        q.push(val);
    }
    if(count>0) return count;
    else return -1;
}

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(1);
    int k;
    cin>>k;
    cout<<frequency(q,k);
}