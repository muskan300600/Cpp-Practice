#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    int n;
    cout << "enter length" << endl;
    cin >> n;
    int arr[n];
    int min, max;
    for (int i = 0; i < n; i++)
    {
        cout << "enter element" << endl;
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int re = 1;
    string find;
    while (re == 1)
    {
        cout << "Select min/max: " << endl;
        cin >> find;
        if (find == "min")
        {
            cout << "Index: " << endl;
            cin >> min;
            cout << arr[min-1] <<endl;
        }
        else if (find == "max")
        {
            cout << "Index: " << endl;
            cin >> max;
            cout << arr[n - max] <<endl;
        }

        cout << "enter 1 to contiue and 0 to exit: " << endl;
        cin >> re;
    }

    // priority_queue<int> maxhp;
    // for(int i=0;i<n;i++){
    //     maxhp.push(arr[i]);
    //     if(maxhp.size()>min){
    //         maxhp.pop();
    //     }
    // }
    // cout<<maxhp.top();
    

}