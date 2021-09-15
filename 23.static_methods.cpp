# include <iostream>
# include <string>
using namespace std;

class Employee{
public:
    int id;
    static int count;

    void setDetails(){
        cin>>id;
        count++;
    }

    static void getCount(){
        cout<<count;
    }

};

int main()
{
    Employee harry;
    harry.id;
    harry.setDetails(); // public function and can be modified
    Employee::getCount(); //since it a static method, the class needs to be called


}
