#include <iostream>
#include <string.h>
using namespace std;

class test
{

    string s;

private:
public:
    void setValue(void);
    void getValue(void);
    void checkBin(void);
    void onesComplement(void);
};

void test::setValue(void)
{
    cin >> s;
}

void test::getValue(void)
{
    cout << s << endl;
}

void test::checkBin(void)
{
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Not in Binary Format" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Binary Format" << endl;
    }
}

void test::onesComplement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
    }
}

int main()
{

    test string1;

    string1.setValue();
    string1.getValue();
    string1.checkBin();
    string1.onesComplement();
    string1.getValue();

    return 0;
}