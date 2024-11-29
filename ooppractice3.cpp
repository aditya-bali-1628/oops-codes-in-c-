#include <iostream>
using namespace std;

class table
{
public:
    int num;

    // function declaare
    int getdeta()
    {
        cout << "enter number :";
        cin >> num;
        for (int i = 1; i <= 10; i++)
        {
            int numtable = num * i;
            cout << numtable << endl;
        }
    }
};

int main()
{
    table num1;
    num1.getdeta();
    return 0;
}