#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter the age: ";
    cin >> age;
    if (age > 18)
    {
        cout << "The person can vote"<<endl;
    }
    else
    {
        cout << "The person cannot vote"<<endl;
    }

    switch (age)
    {
    case 12:
        cout << "You are 12 years old";
        break;
    case 14:
        cout << "You are 14 years old";
    default:
        cout << "You are of some other age";
    }
}