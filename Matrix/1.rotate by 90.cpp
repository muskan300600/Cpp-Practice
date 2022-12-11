#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6} {7, 8, 9}};
    int temp[3][3] = matrix;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = temp[j][3 - 1 - i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    //Using O(1) space
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         swap(arr[i][j],arr[j][i]);
    //     }
    // }

    // for(int i=0;i<n;i++){
    //     int low = 0;
    //     int high = n-1;
    //     while(low<=high){
    //         swap(arr[low][i],arr[high][i]);
    //         low++;
    //         high--;
    //     }
    // }

    // Rotate by 180
    // take transpose twice
    // int n = A.size();
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         swap(A[i][j], A[j][i]);
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         swap(A[i][j], A[n - 1 - j][n - 1 - i]);
    //     }
    // }
}