#include <iostream>
#include <climits>
using namespace std;

class maxelemnt
{

    int num[5];
    int maxnum;

public:
    maxelemnt(); //initilize cunstroctor 
    void readnumber(void);
    int checkmaxnumber();
    void displaynumber(void);
};

maxelemnt ::maxelemnt()
{
    maxnum = INT_MIN; //INT_MIN priovds from climits function these 
                      //initilizing maximum to minimum value posible to integer value 
}

void maxelemnt ::readnumber(void)
{
    for (int i = 0; i < 5; i++)
    {
        cout << "enter number :" << endl;
        cin >> num[i];
    }
}

int maxelemnt ::checkmaxnumber()
{
    for (int i = 0; i < 5; i++)
    {
        if (maxnum < num[i]) //check array of elements which element is maximum 
                             //by using iteration i 
        {
            maxnum = num[i]; //contain the maximum value in maxnum variable 
        }
    }
}

void maxelemnt ::displaynumber(void)
{
    cout << "largest number is  : " << maxnum << endl;
}

int main()
{
    maxelemnt maxn;
    maxn.readnumber();
    maxn.checkmaxnumber();
    maxn.displaynumber();
    return 0;
}