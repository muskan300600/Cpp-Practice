#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;

int solve(int n){
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(q.size()!=1){
        int temp = q.front();
        q.pop();
        q.pop();
        q.push(temp);
    }
    return q.front();
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    cout<<solve(n)<<endl;
	}
	return 0;
}