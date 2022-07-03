#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<long long>q;
        q.push(1);
        q.push(2);
        n-=1;
        while(n--){
            int x = q.front();
            q.pop();
            q.push(x*10+1);
            q.push(x*10+1);
        }
        cout<<q.front()<<endl;
    }
    return 0;
}