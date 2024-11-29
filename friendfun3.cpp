#include <iostream>
using namespace std;
class decimalNumber;
class binaryNumber
{
public:
    int convertbinary(decimalNumber);
};

class decimalNumber
{

    int dec_num;
    int bin_num[100];

public:
    friend int binaryNumber ::convertbinary(decimalNumber);

    int setnumber(int n)
    {
        dec_num = n;
    }
};

int binaryNumber ::convertbinary(decimalNumber num)
{
    int i = 1, j;

    while (num.dec_num != 0)
    {
        num.bin_num[i++] = num.dec_num % 2;
        num.dec_num = num.dec_num / 2;
    }
    for (j = i - 1; j > 0; j--)
    {
        cout << "binary number is :" << num.bin_num[j] << endl;
    }
}

int main()
{

    decimalNumber num11;
    binaryNumber num22;
    cout << "enter the decimal number :";
    int input;
    cin >> input;
    num11.setnumber(input);
    num22.convertbinary(num11);
    return 0;
}
