#include <iostream>
using namespace std;

class sumOfNumber
{

private:
    int num1;
    int num2;

public:
    void setNumber(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    int sumnum()
    {
        return num1 + num2;
    }
};

int main()
{
    sumOfNumber sum1;
    int input1, input2;
    std::cout << "enter number 1 :";
    std::cin >> input1;
    std::cout << "enter number 2 :";
    std::cin >> input2;

    sum1.setNumber(input1, input2);
    int result = 0;
     result = sum1.sumnum();

    std::cout << "sum of number is :" << result << endl;

    return 0;
}