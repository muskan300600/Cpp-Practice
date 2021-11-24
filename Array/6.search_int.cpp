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

    int find,index=-1;
    cout << "enter the integer you wish to search" << endl;
    cin >> find;
    for (int i = 0; i < n; i++)
    {
        if (find == arr[i])
        {
            index=i;
        }
    }
    if(index==-1){
        cout<<"Doesn't exist";
    }
    else{
        cout<<index;
    }
}