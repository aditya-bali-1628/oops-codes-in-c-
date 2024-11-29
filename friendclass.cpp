#include <iostream>
using namespace std;
class numberSIMPLe;
class SumofDigit
{
public:
    int sumofdigit(numberSIMPLe);//declare the function
};
class numberSIMPLe
{
private:
    int num;
    friend int SumofDigit ::sumofdigit(numberSIMPLe);

public:
    int stenumber(int num2)
    {
        num = num2;
    }

    int setdeta(int a, int b)
    {
        return (a + b);
    }
};

int SumofDigit ::sumofdigit(numberSIMPLe number)
{
    int r, sum, num2;
    num2 = number.num;
    sum = 0;

    while (number.num > 0)
    {
        r = number.num % 10;
        number.num = number.num / 10;
        sum = sum + r;
    }
    cout << "sum of digit " << num2 << " is " << sum;
}

int main()
{
    numberSIMPLe numb;
    SumofDigit number;

    cout << "enter number :";
    int input;
    cin>>input;
    numb.stenumber(input);
    number.sumofdigit(numb);
    return 0;
}
