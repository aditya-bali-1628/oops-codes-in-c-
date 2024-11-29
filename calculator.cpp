#include <iostream>
#include <cmath>
using namespace std;
/*
    create class using single inharitance :
    write a code calculator simple calculator perfom the opertions +,-,*,/,
    create two classes utility and second class is calculator
    in first class : input two numbers
    in second class : perform opertaions
    and display the result;
    in main function  calling the function

*/

class calculator
{
protected:
    double num1;
    double num2;

public:
    calculator() : num1(0.0), num2(0.0) {}
    void getinputnumber()
    {
        cout << "Enter the first number :";
        cin >> num1;
        cout << "Enter the second number :";
        cin >> num2;
    }

    double add()
    {
        return num1 + num2;
    }

    double substraction()
    {
        return num1 - num2;
    }

    double multiplication()
    {
        return num1 * num2;
    }

    double divide()
    {
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            return -1;
        }
    }

    void displayresult()
    {
        cout << " ADDITION :" << add() << endl;
        cout << " SUBSTRACTION :" << substraction() << endl;
        cout << " MULTIPLICATION :" << multiplication() << endl;
        double divisionresult = divide();
        if (divisionresult == -1)
        {
            cout << "division error cannot devide by zero " << endl;
        }
        else
        {
            cout << " DIVISION :" << divisionresult << endl;
        }
    }
};

class scientificcal : public calculator
{

protected:
    double num1;
   

public:
    scientificcal() : num1(0.0){}

    void scicalculator()
    {
        cout << " INPUT THE NUMBER  1(SCINTIFIC CALCALATOR) :";
        cin >> num1;
        
    }

    double squareroot()
    {
        if (num1 >= 0)
        {
            return sqrt(num1);
        }
        else
        {
            cout << " INVALIDE ENTER NUMBER !" << endl;
        }
    }

    double cubeofnumner()
    {
        return pow(num1, num2);
    }

    double sinecost()
    {
        return sin(num1);
    }

    double cossine()
    {
        return cos(num1);
    }

    void displaynumber()
    {
        cout << "SQUARE ROOT OF NUMBER :" << squareroot() << endl;
        cout << "CUBE OF NUMBER        :" << cubeofnumner() << endl;
        cout << " SINE OF NUMBER       :" << sinecost() << endl;
        cout << " COS OF NUMBER        :" << cossine() << endl;
    }
};

int main()
{
    calculator calc;
    calc.getinputnumber();
    calc.displayresult();

    scientificcal cals;
    cals.scicalculator();
    cals.displaynumber();

    return 0;
}
