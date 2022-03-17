#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a[] = {2, 6, 1, 9, 4, 5, 3};
    int n = sizeof(a) / sizeof(a[0]);
    priority_queue<int> pq;
    int v[N];
    for (int i = 0; i < N; i++)
    {
        pq.push(-arr[i]);
    }
    int i = 0;
    while (!pq.empty())
    {
        v[i++] = (-pq.top());
        pq.pop();
    }

    int ans = 1;
    int count = 1;
    for(int i=1;i<N;i++){
        if(v[i]==v[i-1]+1){
            count++;
            ans = max(ans,count);
        }
        else if(v[i]!=(v[i-1]+1) && v[i]!=v[i-1]){
            count=1;
        }
    }
    cout<<ans;
}