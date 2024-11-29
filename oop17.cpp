#include <iostream>
using namespace std;

class checknumrevsim
{
    int revnum[5];
    int simnum[5];
    public:
    friend int revnumber();
};

int checknumrevsim::revnumber()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "enter number :";
        cin >> revnum[i];
    }
}