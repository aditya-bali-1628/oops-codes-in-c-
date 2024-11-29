#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
class bankaccount
{
    // private member
private:
    int accountnumber;
    double accountbalance;
    float year;
    float intrestrate;
    // perimiterized constructor
public:
    // default constructor
    bankaccount(){};
    bankaccount(string accountnum, double initialbalance) : accountnumber(initialbalance), accountbalance(initialbalance){}
 
    // function  to create add deposite amount
    void bankdeposite(double amount)
    {
        accountbalance = accountbalance + amount;
        cout << "Deposite amount Successfully in Account  : " << endl;
        cout << " current amount is :" << accountbalance << endl;
    }
    // create function to in bankaccount  widthrawall amount
    void withdrawallbalance(double amount, double intrest)
    { // if amount is less than account balance then widthrawall amount
        if (amount <= accountbalance)
        {
            

            accountbalance = accountbalance - amount;
            cout << "Withdrawll balance successfully  : " << endl;
            cout << "account balance is  :" << accountbalance << endl;
            intrestrate = intrest;
            accountbalance = accountbalance *(1+intrestrate);
            
            cout<<" Total intrest of amount :"<<accountbalance<<endl;
        }
        else
        {
            // amount is grater than account balance than balance is insuficiant
            cout << "Withdrall insuficiant balance in bankaccount !" << endl;
        }
    }
};




int main()
{
    // create bankaccount
    string sacno;
    if (sacno == "!" || sacno == "@" || sacno == "#" || sacno == "$" || sacno == "%" || sacno == "&" || sacno == "*")
    {
        cout << "Invalid account number !";
    }
    else
    {

        cout << "Enter the Account Number :";
        cin >> sacno;
    }
    // default amount in account
    double opningbalance = 1000;
    cout << "Account number :" << sacno << endl;
    cout << "currentbalance is :" << opningbalance << endl;

    bankaccount account(sacno, opningbalance);
    // deposite amount in bank account
    double depoamount;
    cout << "Enter the depsoite Amount :";
    cin >> depoamount;
    cout << "Deposite Amount :" << depoamount << endl;
    // calling constructor to
    account.bankdeposite(depoamount);

    // withdrall amount in bank account
    double widthamount;
    cout << "Enter the Withdrall Amount :";
    cin >> widthamount;
    double intrestret = 0.03;
    account.withdrawallbalance(widthamount,intrestret);

    //calculate intrestrate in deposite amount
   

    cout << "Transaction successfully remove your card !";

    return 0;
}