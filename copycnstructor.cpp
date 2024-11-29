#include <iostream>
using namespace std;

class number
{
    int a, b, c;

public:
    number(){};
    number()
    {
        a = 0;
        b = 0;
        c = 30;
    };
    number(int num1, int num2, int num3)
    {
        a = num1;
        b = num2;
        c = num3;
    }

    number(number &obj)
    {
        cout << "copy constructor called !" << endl;
        a = obj.a;
    }
    number(number &obj1)
    {
        cout << "copy constructor called !" << endl;
        b = obj1.b;
    }
    number(number &obj2)
    {
        cout << "copy constructor called !" << endl;
        c = obj2.c;
    }
    void dispslay()
    {
        cout << "number of object is  :" << a << endl;
        cout << "number of object is  :" << b << endl;
        cout << "number of object is  :" << c << endl;
    }
};

int main()
{
    number n1, n2, n3(30);
    n1.dispslay();
    n2.dispslay();
    n3.dispslay();
    number n4(n1);
    n4.dispslay();
    number n5(n2);
    n5.dispslay();
    number n6(n3);
    n6.dispslay();
    return 0;
}
