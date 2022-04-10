#include <iostream>
using namespace std;

class Student
{
private:
    long long int nid, phone;
    string address;

public:
    void setData(int nid, long long int phone, string address);
    void getData();
};

void Student::setData(int nid1, long long int phone1, string address1)
{
    nid = nid1;
    phone = phone1;
    address = address1;
}

void Student::getData()
{
    cout << "NID is = " << nid << endl;
    cout << "Phone is = " << phone << endl;
    cout << "Address is =" << address << endl;
}

int main()
{

    Student Atik;

    Atik.setData(154478454, 8801790631785, "Dhanmondi");
    Atik.getData();

    return 0;
}