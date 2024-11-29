#include<iostream>
using namespace std;
class base1
{
    public:
    void myname()
    {
        cout<<"my name is aditya "<<endl;
    }


};
class base2 
{
    public:
    void myfathername()
    {
        cout<<" my fathers name is chandrakant"<<endl;
    }
};

class derived : public base1, public base2 
{
    public:
    void display()
    {
    base1 :: myname();
    base2 :: myfathername();
    }
};

int main()
{
    base1  b;
    b.myname();
    base2 b2;
    b2.myfathername();
    derived d;
    d.myname();
    d.myfathername();
    return 0;
}