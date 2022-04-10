#include <iostream>
using namespace std;

class print
{

private:
    void privatePrint();

public:
    void console();
};

void print::privatePrint()
{
    cout << "Printing Private Scope";
}

void print::console()
{
    privatePrint();
}

int main()
{

    print atik;

    atik.console();
    return 0;
}