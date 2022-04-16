#include <iostream>
using namespace std;

class Student
{
    int id;
    int credit;

public:
    void setId(void);
    void getId(void);
};

void Student::setId(void)
{
    cout << "Enter Student Id " << endl;
    cin >> id;
    credit = 0;
};

void Student::getId(void)
{
    cout << "Student ID is " << id << " and credit is " << credit << endl;
};

int main()
{

    Student cse[4];

    for (int i = 0; i < sizeof(cse) / sizeof(cse[0]); i++)
    {
        cse[i].setId();
        cse[i].getId();
    }

    return 0;
}