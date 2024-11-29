#include <iostream>
#include <string>

//use hira
// base class of vishnuavatar
using namespace std;
class vishnuAvtar
{
    // private member of class
private:
    string Avtara;
    // public member of class
public:
    // perimiterized constructor
    vishnuAvtar(string name) : Avtara(name) {} // initilize the name of avtar name
    // display the avatar
    void displayavtar()
    {
        cout << " Shree Vishnu Avtaras " << Avtara << endl;
    }
};

// derived class of tretayug derived class inharite by base class 
class satyayug : public vishnuAvtar
{
    // public members of satyayuga
public:
    // perimiterized constructor 
    satyayug() : vishnuAvtar("SatyaYuga Avtara") {} //inharite base class of avtaran name 
    void displayavtarsatyayug()
    {
        cout<<" Satyayuga Avtara :"<<endl;
        cout<<"----------------------"<<endl;
        cout << " Shree Matsya Avtara " << endl;
        cout << " Shree Kurma Avtara " << endl;
        cout << " Shree Narsivmha Avtara " << endl;
        cout << " Shree Vamana Avtara " << endl;
        cout << " Shree Varaha Avtara " << endl;
    }
};
    //derived class second inharite by base class member 
class tretayug : public vishnuAvtar
{ 
    //public member of class
public:
     //default constructor 
    tretayug() : vishnuAvtar("TretaYuga Avtara") {} //inharite the base class member 
    void displayavtaratretayuga()
    {
        cout<<" Treta Yuga Avtara :"<<endl;
        cout<<"---------------------------"<<endl;
        cout << " shree Parshurama Avtara " << endl;
        cout << " shree Ramchandra Avtara " << endl;
    }
};
  //third derived class
class dwaparyug : public vishnuAvtar
{
    //public access member 
public:
    //default constructor
    dwaparyug() : vishnuAvtar("Dwapar Yuga Avtara") {}  //inharite the base class member 
    void displaydwaparyuga()
    {
        cout<<"Dwapar Yug Avtara :"<<endl;
        cout<<"---------------------------"<<endl;
        cout << " shree Krushna Avtara " << endl;
        cout << " shree Balrama Avtara " << endl;
    }
};
  //fourth derived class
class kalyuga : public vishnuAvtar
{
    //public member of kalyuga avtara
public:
    //defult constructor
    kalyuga() : vishnuAvtar("Kalyuga Yuga Avtara") {}  //inharite the base class member 
    // display the avtara of kaliyuga
    void displaykalyugaavtara()
    {
        cout<<"Kalyug Avtara :"<<endl;
        cout<<"----------------------"<<endl;
        cout << " shree Kalki Avtara " << endl;
    }
};

int main()
{   
    //objects of  4 yugaj
    satyayug Satyayug;
    tretayug Tretayug;
    dwaparyug Dwaparyug;
    kalyuga Kalyuga;
    // function  calling of satyayuga
    Satyayug.displayavtarsatyayug();
    cout << endl;
    //function  calling of dwaparyuga
    Tretayug.displayavtaratretayuga();
    cout << endl;
    //function  calling of tretayuga
    Dwaparyug.displaydwaparyuga();
    cout << endl;
    //function  calling of kalki avtara
    Kalyuga.displaykalyugaavtara();
    cout << endl;

    return 0;
}
