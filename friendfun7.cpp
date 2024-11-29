#include <iostream>
using namespace std;
//forward declaration 
class readdigit;
//class sumofdigit
class sumofdigit
{
    //public member function 
public:
    void sumdgit(readdigit);
};
//second class
class readdigit
{
    //;private member 
    int num;
    int sum;
  //public member function 
public:
    void getnumber()
    {
        cout << "Enter the number :";
        cin >> num;
    }
    friend void sumofdigit ::sumdgit(readdigit);
};
void sumofdigit ::sumdgit(readdigit n1)
{
   
    int n = n1.num;
    n1.sum = 0;
    
    while (n != 0)
    {
        n1.sum = n1.sum + (n % 10);
        n = n / 10;
    }
    cout<<"sum of digit number :"<<n1.sum<<endl;
}
int main()
{
    readdigit num1;
    sumofdigit num2;
    num1.getnumber();
    num2.sumdgit(num1);
    return 0;
}
