#include <iostream>
using namespace std;
class pigibank
{
    // private member function
    int amount;
    // public member function
public:
    // create default constructor
    pigibank() : amount(0){};
    // create parmeterized constructor
    pigibank(int initialamount) : amount(initialamount){};
    // create function to dispaly currnet amount
    void addingamount()
    {
        cout << "adding  $ " << amount << "addying to the bank" << endl;
        amount = amount + 50;
    }
    // create function to amount to add
    int retuenamount()
    {
        return amount;
    }
};

int main()
{
    // create object
    pigibank amountaddying;
    // calling the object to adding current amount
    amountaddying.addingamount();
    cout << "current amount in piggy bank : " << amountaddying.retuenamount() << endl;
    // create variable to adding amount
    int addamount;
    cout << "Enter the amount to add $ :";
    cin >> addamount;
    // calling parimetrized constructor to addiing amount in to enter by the user
    pigibank amountaddying2(addamount);
    // display the total amount
    amountaddying2.addingamount();
    cout << " total amount in piggy bank $ " << amountaddying2.retuenamount() << endl;
    return 0;
}
