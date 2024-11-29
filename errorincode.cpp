#include <iostream>
using namespace std;

class RversedNUMBER
{

    int num;

public:
    void setnumber();
    int reversedNum();
    void printnumber();
    friend int repeted(int digitnum);
};

void RversedNUMBER::setnumber()
{
    cout << "enter number :";
    cin >> num;
}
int RversedNUMBER ::reversedNum()
{
    int temp = num;
    int reversednum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        reversednum = reversednum * 10 + digit;
        temp = temp / 10;
    }
    return reversednum;
}
int repeated(int digitnum)
{
    bool foundRepeatedDigit = false;
    int digitSet = 0;
    while (reversednum > 0)
    {
    }
}
void RversedNUMBER ::printnumber()
{
    cout << "print orignal number :" << num << endl;
    cout << "print reversed number :" << reversedNum() << endl;
}

int main()
{
    RversedNUMBER number;
    number.setnumber();
    number.printnumber();
}