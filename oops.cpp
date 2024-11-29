#include <iostream>
using namespace std;
class employe
{

private:
    int a, b, c;

public:
    int d, f;
    void setdeta(int a1, int b1, int c1); // declare
    void getdeta()                        // functioin  show in terminal value
    {
        cout << "value of a is : " << a << endl;
        cout << "value of b is : " << b << endl;
        cout << "value of c is : " << c << endl;
        cout << "value of d is : " << d << endl;
        cout << "value of f is : " << f << endl;
    }
};

void employe ::setdeta(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employe aditya;   //private member function does not 
    aditya.d = 34;    //in main function  directly
    aditya.f = 5;
    aditya.setdeta(1, 2, 3);
    aditya.getdeta();

    return 0;
}
