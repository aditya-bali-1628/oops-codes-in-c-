#include <iostream>
using namespace std;
class simplenumbers;
class printtable
{
public:
    int tableofnum(simplenumbers); //its just delcaration for acceessing number of simple 
                                   // simplnum class 
};
class simplenumbers
{
    int num; //private member 
    friend int printtable::tableofnum(simplenumbers); //friend function declaration 

public:
    int setnunber(int n)
    {
        num = n;
    }
};

int printtable ::tableofnum(simplenumbers number)
{
    
    for (int i = 1; i <= 10; i++)
    {
        cout << i * number.num << endl;
    }
}

int main()
{
    simplenumbers number; //object of class simplenumbers
    printtable numb;  //object of class printable
    cout<<"enter the number :";
    int input; //create variable for input number
    cin>>input;
    number.setnunber(input);
    numb.tableofnum(number);
    return 0;
}
