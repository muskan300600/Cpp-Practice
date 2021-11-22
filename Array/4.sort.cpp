#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> v1;
    // int n;
    // int value;
    // cout<<"Enter the length"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>value;
    //     v1.push_back(value);
    // }

    // sort(v1.begin(),v1.end());
    // for(int i=0;i<n;i++){
    //     cout<<v1[i];
    // }

    int n;
    cout << "enter length" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter element" << endl;
        cin >> arr[i];
    }

    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}