#include <iostream>
using namespace std;
//we can create  same friend function in two  diffrent classes
class convert; // forward declaration
class usernumber
{
private: // set priVATE MEMBER
    int binary;

public:
    //set the number for not contain garbage value
    void setnumnber()
    {
        binary = 0;
    }
    //get input number by user 
    void getinput() 
    {
        cout << "enter the  binary number :";
        cin >> binary;
    }
    //create friend function for accessing both classes of private member 
    friend int convertdectohexa(usernumber, convert);
};

class convert
{
private:
    int hexa[1000];  //private member 

    // set the array
public:
    convert()
    {
        for (int i = 0; i < 1000; i++)
        {
            hexa[i] = 0;
        }
    }
    friend int convertdectohexa(usernumber, convert);
};
// define the friend function for convert decimal to hexadecimal number
int convertdectohexa(usernumber user, convert con)
{
    // convert binary number to decimal number
    int binnumber = user.binary;
    int i = 1, rem, j, dec = 0;
    while (binnumber > 0)
    {
        rem = binnumber % 2;
        dec = dec + rem * i;
        i = i * 2;
        binnumber = binnumber / 10;
    }

    i = 0;

    // convert decimal number to hexadecimal value
    while (dec != 0)
    {
        con.hexa[i] = dec % 16;
        dec = dec / 16;
        i++;
    }

    // display the hexadecimal value
    for (j = i - 1; j >= 0; j--)
    {
        if (con.hexa[j] > 9)
        {
            cout << ((char)con.hexa[j] + 55);
        }
        else
        {
            cout << con.hexa[j];
        }
    }
}

int main()
{
    usernumber use;
    convert conv;
    cout << " convert the number binaary to hexadecimal "<<endl;
    cout << "--------------------------------------------"<<endl;

    use.getinput();
    convertdectohexa(use, conv);
    return 0;
}