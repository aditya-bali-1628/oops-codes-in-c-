#include <iostream>
using namespace std;
class number
{
    //a is the private member of class number 
    private :
    int a;
    // is public access specifire 
    //defalut constructor 
    public:
    number()
    {
        a = 0;

    }
    //paramiterized constructor
    number(int num)
    {
        a = num;

    }
    //copy construcotr by use the referance of object
    //when copy constructor is not in program & not found then compiler is suplies automatatic constructor 
    number(number &obj)
    {
        a = obj.a;
        cout<<"called copy constructor ! "<<endl;

    }
    //display the numbers
    void shownumber()
    {
        cout<<" object of the number :"<<a<<endl;
    }
};

int main()
{
    //object of the class
    number x,y,z(10) ,z1;
    x.shownumber();
    y.shownumber();
    z.shownumber();
    //copy contrutor
    number x1(x);
    x1.shownumber();
    z1 = x; //when you assign value of object then constructor is not invoked 
    //if declare the dairaclay object to there class name then construtor in invoked 
    number z2 = x;

    return 0;
}