#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int arr[8] = {4, 10, 5, 8, 20, 15, 3, 12};
    int brr[8] = {0};
    stack<int> s;

    for(int i=0;i<8;i++){
        while(!s.empty() && s.top()<arr[i]){
            s.pop();
        }
        if(s.empty()){
            brr[i]=-1;
        }
        else brr[i]=s.top();
        s.push(arr[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        cout << brr[i] << ends;
    }
}