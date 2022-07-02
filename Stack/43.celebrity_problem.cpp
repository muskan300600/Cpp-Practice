#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int arr[3][3] = {{0, 1, 0},
                     {0, 0, 0},
                     {0, 1, 0}};
    stack<int> s;
    for (int i = 0; i < 3; i++)
    {
        s.push(i);
    }
    while (s.size() >= 2)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if (arr[a][b] == 0)
        {
            s.push(a);
        }
        else
            s.push(b);
    }
    
    int ans = s.top();
    for(int i=0;i<3;i++){
        if(i!=ans){
            if(arr[i][ans]==0 || arr[ans][i]==1){
                cout<<-1;
            }
        }
    }
    cout<<ans;
}