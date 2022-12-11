#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {-4, -1, 5, 8, 19, 50, 8, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    cin >> x;
    int l1 = 0, l2 = 0;
    int h1 = n - 1, h2 = n - 1;
    int mid1, mid2, idx1 = -1, idx2 = -1;
    while (l1 <= h1)
    {
        mid1 = (l1 + h1) / 2;

        if (arr[mid1] == x)
        {
            idx1 = mid1;
            h1 = mid1 - 1;
        }

        else if (arr[mid1] < x)
        {
            l1 = mid1 + 1;
        }

        else
        {
            h1 = mid1 - 1;
        }
    }

    while (l2 <= h2)
    {
        mid2 = (l2 + h2) / 2;

        if (arr[mid2] == x)
        {
            idx2 = mid2;
            l2 = mid2 + 1;
        }

        else if (arr[mid2] < x)
        {
            l2 = mid2 + 1;
        }

        else
        {
            h2 = mid2 - 1;
        }
    }

    if (idx1 != -1 && idx2 == -1)
    {
        idx2 = idx1;
    }

    if (idx1 == -1 && idx2 != -1)
    {
        idx1 = idx2;
    }

    vector<int> vp;
    vp.push_back(idx1);
    vp.push_back(idx2);
    for (int i = 0; i < vp.size(); i++)
    {
        cout << vp[i] << " ";
    }

    //  vector<int> b;
    //    int c=0;
    //     for(int i=0; i<n; i++){
    //         if(a[i]==x){
    //           b.push_back(i); 
    //           c=1;
    //           break;
    //         }
    //     }
    //     for(int i=n-1; i>=0; i--){
    //         if(a[i]==x){
    //           b.push_back(i);  
    //           break;
    //         }
    //     }
    //     if(c==0){
    //         return {-1};
    //     }
    //     return b;
}