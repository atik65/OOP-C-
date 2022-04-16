#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void getData(void)
    {
        cout << "The Complex Number is " << a << " + " << b << "i" << endl;
    }

    void addComplexNums(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setData(2, 4);
    c1.getData();

    c2.setData(5, 6);
    c2.getData();

    c3.addComplexNums(c1, c2);
    c3.getData();

    return 0;
}