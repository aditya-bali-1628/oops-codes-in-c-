#include <iostream>
using namespace std;
class addnum2; //class is delcare 
class addnum1
{
    int num1;

public:
    void setnumber(int value)
    {
        num1 = value;
    }
    friend int additionofnum(addnum1, addnum2);
};

class addnum2
{
    int num2;

public:
    void setnumber2(int value)
    {
        num2 = value;
    }
    friend int additionofnum(addnum1, addnum2);
};

int additionofnum(addnum1 n1, addnum2 n2)
{
    cout << "addition of two number = " << (n1.num1 + n2.num2) << endl;
}

int main()
{
    addnum1 n;
    n.setnumber(3);

    addnum2 n1;
    n1.setnumber2(5);

    additionofnum(n, n1);
    return 0;
}