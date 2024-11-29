#include <iostream>
 using namespace std;
 //default arrgument 
int moneyrecive(int money, float factor = 1.4)
{
    return money * factor;
}
int main()
{
    int money = 1000;
    cout << "if you have money " << money << "Rs in your bank acccount 1.4 percent  :" <<"after one year"<< moneyrecive(money)<<endl;
    cout<<"for vip persone have money "<<money<<"Rs in your bank account 1.4 percent after one year rs is : "<<moneyrecive(money,1.5)<<endl;
    return 0;
}