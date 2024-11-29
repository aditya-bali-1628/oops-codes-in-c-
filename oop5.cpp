#include <iostream>
using namespace std;

class shop
{
    int itemaid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; };
    void setprice(void);
    void displayprice(void);
};

void shop::setprice(void)
{
    cout << "Enter id number of item: " << counter + 1 << endl;
    cin >> itemaid[counter];
    cout << "Enter price of item: " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item price with item id " << itemaid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

    return 0;
}

