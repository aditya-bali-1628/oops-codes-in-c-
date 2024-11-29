#include <iostream>
using namespace std;
class Sqauar
{

    int number;

public:
    void readnumber(void);
    int returnnumber(int number);
    void displaynumber(void);
};
void Sqauar ::readnumber(void)
{
    cout << "enter number :" << endl;
    cin >> number;
}

int Sqauar ::returnnumber(int number)
{

    return number * number;
}
void Sqauar ::displaynumber()
{
    cout << " square of number is "<<number << " : "<< returnnumber(number) << endl;
}

int main()
{
    Sqauar n;
    n.readnumber();
    n.displaynumber();
    return 0;
}