#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter Id of Employee" << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {

        cout << "Id is " << id << " Employee No-- " << count << endl;
    }

    static void getCount(void)
    {

        cout << "Count is " << count << endl;
    }
};

int Employee::count;

int main()
{

    Employee mridul, rafi, rishad;

    mridul.setData();
    mridul.getData();
    Employee::getCount();

    rafi.setData();
    rafi.getData();
    Employee::getCount();

    rishad.setData();
    rishad.getData();
    Employee::getCount();

    return 0;
}