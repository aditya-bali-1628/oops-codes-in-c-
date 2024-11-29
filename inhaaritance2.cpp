#include <iostream>
using namespace std;

// base class one
class mamal
{
    //public access specifire
public:
    //display function
    void mammal()
    {
        cout << " I am mamal animal in mamal class" << endl;
    }
};
// base class second
class marineanimal
{
//public access specifire 
public:
    //display function
    void marinfissh()
    {
        cout << " I am blue whel in marine animal class" << endl;
    }
};

// derived class
// derived class name base classes names with all function is public 
class bluewheel : public mamal, public marineanimal
{
    //public access specifire 
public:
   //display function of blue whel
    void bluewhel()
    {
        cout << " i am blue whel of derived class !" << endl;
    }
};

//main function
int main()
{   // create objects of three classes
    mamal mamalanimls;
    marineanimal bluewhel;
    bluewheel bigbluewhel;
    //calling mamal function
    cout<<"calling function of mamal function !"<<endl;
    mamalanimls.mammal();
    // calling function of marinfish
    cout<<" calling function of marin fish !"<<endl;
    bluewhel.marinfissh();
    //calling function of derived class 
    cout<<" calling function of derived class of bluewehel "<<endl;
    bigbluewhel.bluewhel();
    //inharitance by calling derived class object of two base class
    cout<<" calling function by parent class by bluewhel !"<<endl;
    bigbluewhel.mammal();
    bigbluewhel.marinfissh();

    return 0;

}
