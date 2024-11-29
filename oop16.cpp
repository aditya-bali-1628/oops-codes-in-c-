#include <iostream>
using namespace std;
const int m = 50;
class ITEMS
{

    int itemcode[m];
    float itemprice[m];
    int count;

public:
    void CNT() { count = 0; }
    void getitem(void);
    void sumofitem(void);
    void remove(void);
    void displayitem(void);
};

void ITEMS ::getitem(void)
{

    cout << "Enter item code :";
    cin >> itemcode[count];
    cout << "enter price of item :";
    cin >> itemprice[count];
    count++;
}

void ITEMS ::sumofitem(void)
{
    float sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum = sum + itemprice[i];
    }
    cout << "total value of item :" << sum << endl;
}
void ITEMS ::remove()
{
    int a;
    cout << "enter number :";
    cin >> a;
    for (int i = 0; i < count; i++)
    {
        if (itemcode[i] == a)
            itemprice[i] = 0;
    }
}
void ITEMS ::displayitem(void)
{
    cout << "\n code price \n";
    for (int i = 0; i < count; i++)
    {
        cout << endl
             << itemcode[i];
        cout << endl
             << itemprice[i];
    }
}

int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do
    {
        cout << "\n you can don the following " << endl;
        cout << "Enter appropriate number" << endl;
        cout << "\n1 : add an item \n";
        cout << "\n2 : display total value \n";
        cout << "\n3 : delete an item\n";
        cout << "\n4 : display all item \n";
        cout << "\n5 : Quit\n";

        cin >> x;

        switch (x)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.displayitem();
            break;
        case 3:
            order.remove();
            break;
        case 4:
            order.sumofitem();
            break;
        case 5:
            break;
        default:
            cout << "error inpute in ; try agin";
        }

    } while (x != 5);

    return 0;
}
