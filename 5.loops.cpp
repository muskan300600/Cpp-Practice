#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    while (a < 34)
    {
        cout << a+1<<". A is " << a << endl;
        a = a + 1;
    }
    int b = 0;
    do
    {

        cout << b + 1 << ". B is " << b << endl;
        b = b + 1;
    } while (b < 34);

    for(int i=0;i<34;i++){
        cout << i + 1 << ". I is " << i << endl;
    }
}