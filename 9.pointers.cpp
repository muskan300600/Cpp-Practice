#include <iostream>
using namespace std;

int main()
{
    int a = 67;
    int *ptra;
    ptra = &a;
    cout << "A is: " << a << endl;
    cout << "A is: " << *ptra << endl;
    cout << "address of A is: " << &a << endl;
    cout << "address of A is: " << ptra << endl;

    //Pointers in array
    int marks[5] = {23, 45, 67, 34, 76};
    int *m = marks;
    cout << *m << endl;       //prints the value at index 0
    cout << *(m + 1) << endl; //prints the value at index 1
    cout << (m + 1) << endl; //prints address of the value at index 1
}