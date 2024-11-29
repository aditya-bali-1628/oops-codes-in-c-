#include<iostream>
using namespace std;

class fibonacci
{

    int num;

public:
    void readnnum(void);
    void checknum(void);
    void displaynum(void);
};

void fibonacci ::readnnum(void)
{
    cout<< "enter number : ";
    cin >> num;
}

void fibonacci ::checknum(void)
{
    int a = 0, b = 1;
    int nextterm = a + b;
    for (int i = 2; i <= num; i++)
    {
        cout << nextterm;
        a = b;
        b = nextterm;
        nextterm = a + b;
    }
}
void fibonacci :: displaynum(void)
{
    cout<<" fibonaci series of number is : "<<endl;
    checknum();
}
int main()
{
    fibonacci n;
    n.readnnum();
    n.checknum();
}