#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    bool check_binary(void);

public:
    void read(void);

    void display(void);
    void ones_complement(void);
    void onesComplement(void);
};

void binary::read(void)
{
    cout << "Give a binary Number : ";
    cin >> s;
    cout << endl;
}

bool binary::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            return 0;
        }
    }

    return 1;
}

void binary::ones_complement(void)
{
    if (check_binary())
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
            {
                s.at(i) = '1';
            }
            else if (s.at(i) == '1')
            {
                s.at(i) = '0';
            }
        }
    }
}

void binary::display(void)
{
    cout << s << endl;
}

int main()
{

    binary b;

    b.read();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}