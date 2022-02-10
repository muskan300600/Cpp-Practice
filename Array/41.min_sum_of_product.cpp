#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    int a[] = {6, 1, 9, 5, 4};
    int b[] = {3, 4, 8, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);
    sort(a,a+n);
    sort(b,b+n);
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(a[i]*b[n - 1 - i]);
    }

    int sum =0;
    for(int i=0;i<v.size();i++){
        sum = sum+v[i];
    }

    cout<<sum;
}