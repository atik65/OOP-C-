#include <iostream>
using namespace std;

class shop
{
    int counter;
    int productId[100];
    int price[100];
    int setItemNumber;

public:
    void intShop(void) { counter = 0; }
    void setProduct(void);
    void displayProduct(string shopName);
};

void shop::setProduct(void)
{
    cout << "How Many Products do you want to Add?" << endl;
    cin >> setItemNumber;

    for (int i = 1; i <= setItemNumber; i++)
    {
        cout << "Enter product Id of product " << counter + 1 << endl;
        cin >> productId[counter];
        cout << "Enter Price for product " << counter + 1 << endl;
        cin >> price[counter];
        counter++;
    }
};

void shop::displayProduct(string shopName)
{
    for (int i = 0; i < counter; i++)
    {
        cout << shopName << "- Product Id " << productId[i] << " and price is $" << price[i] << endl;
    }
};

int main()
{

    shop MistyBari;

    MistyBari.intShop();
    MistyBari.setProduct();
    MistyBari.displayProduct("MistyBari");

    return 0;
}