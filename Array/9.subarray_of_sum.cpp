#include <iostream>
#include <string>
#include <algorithm>
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

    int x,sum=0,last;
    cout<<"enter the sum"<<endl;
    cin>>x;
    int start=0,end=n-1;
    while(start<end){
        for(int i=start;i<n;i++){
            sum=sum+arr[i];
            if(sum==x){
                last=i;
                break;
            }
        }
        start++;
    }

    cout<<start<<" "<<last
}    