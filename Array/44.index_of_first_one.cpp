#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int a[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int index;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            index = i;
            break;
        }
    }
    cout<<index;
}