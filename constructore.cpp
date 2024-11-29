#include <iostream>
using namespace std;
class sumnum
{
    //private member function 
    int a,b;

public:
    //contructor 
    //constructor is special member function is the same name as of the class 
    //it is used to intililize objects is the class
    //it is automatically invoked whenever an object create
    sumnum(void); //constructor 
    int printnum()
    {
        return a + b;
    }
};

sumnum ::sumnum(void) //it is the default constructor it is the no takes peremeter to pass
{
    cout << "enter the  first number :";
    cin >> a;
    cout << "enter the second number :";
    cin >> b;
}

int main()
{
    sumnum n1;
    cout<<"sum  is :"<<n1.printnum()<<endl;
    return 0;
}
/*
it should be declare public sectore in class. 
it is automatically invoked whenever contructore decleare.
they cannot have return type and cannot have return value.
they can have defult argummenhts.
we cannotn have refer address. 
*/