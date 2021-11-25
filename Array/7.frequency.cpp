#include <iostream>
#include <string>
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
    
    int x,count=0;
    cout<<"enter the number to search: "<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        if(x==arr[i])
        {
            count++;
        }
    }
    cout<<count;

}