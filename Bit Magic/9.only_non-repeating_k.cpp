#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {1,1,1,2,2,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int INT_SIZE = 8 * sizeof(unsigned int);
    int count[INT_SIZE];
    memset(count, 0, sizeof(count));

    for (int i = 0; i < INT_SIZE; i++)
        for (int j = 0; j < n; j++)
            if ((arr[j] & (1 << i)) != 0)
                count[i] += 1;
    
    unsigned res=0;
    for(int i=0;i<INT_SIZE;i++){
        res = res + (count[i]%k)*(1<<i);
    }
    cout<<res;
}