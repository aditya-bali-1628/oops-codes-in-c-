#include <iostream>
#include <string.h>
using namespace std;
// nesting of member function
//using scop rosulation opertaor
class binary
{
   private :
    string s;

public:
    void read(void);
    void checknum(void);
    void one_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << " enter the number :" << endl;
    cin >> s;
}
void binary ::checknum(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && (s.at(i) != '1'))
        {
            cout << "incorrect binary formate" << endl;
           exit(0);
        }
        
    }
}

void binary ::one_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }

        else

        {
            
            s.at(i) = '0';
        }
    }
}
void binary :: display(void)
{ 
    cout<<"displaying number  :"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.checknum();
    b.display();
    b.one_compliment();
    b.display();
    return 0;
}