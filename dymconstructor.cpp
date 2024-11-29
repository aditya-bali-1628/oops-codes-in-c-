#include <iostream>
using namespace std;
//create class
class bankdeposite
{
    //private members
    int principle;
    int year;
    float intrestreate;
    float returnvalue;

public:
    //create constructor 1
    bankdeposite(){};
    //perimeter constructor 2
    //this contructor shows intrestret in  float value 
    bankdeposite(int p, int y, float r);
    //perimeter consturctor 3  
    //this construtor shows intrestret in int value 
    bankdeposite(int p, int y, int R);
    //create function for display the value
    void show();
};
    //use scop resulation  opetor for acces private members
bankdeposite ::bankdeposite(int p, int y, float r)
{
    principle = p;
    year = y;
    intrestreate = r;
    returnvalue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+intrestreate);
    }
}
 //use scop resulation  opetor for acces private members
bankdeposite ::bankdeposite(int p, int y, int R)
{
    principle = p;
    year = y;
    intrestreate = int(R) / 100;
    returnvalue = intrestreate;
    for (int i = 1; i < year; i++)
    {
        returnvalue = returnvalue * (1 + intrestreate);
    }
}
//display the values
void bankdeposite ::show()
{
    cout << "principle amount was " << principle << endl
         << "return value after year " << year
         << " is  :" << returnvalue << endl;
}

int main()
{

    int amount, year;
    float intreate;
    cout << "Enter the principle amount :";
    cin >> amount;
    cout << "Enter the years ";
    cin >> year;
    cout << "Enter the intrest rate :";
    cin >> intreate;
    //initialize dynamic constructor
    bankdeposite bd1 = bankdeposite(amount, year, intreate);
    //show the value
    bd1.show();

    cout << "Enter the principle amount :";
    cin >> amount;
    cout << "Enter the years ";
    cin >> year;
    cout << "Enter the intrest rate :";
    cin >> intreate;
    //initialize dynamic constructor
    bankdeposite bd2 = bankdeposite(amount, year, intreate);
     //show the value
    bd2.show();
    return 0;
}