#include <iostream>
using namespace std;
class rectangle
{
    // private member function
    int length;
    int width;

public:
    // perimiterized constructor
    rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    // calculate area of rectangle
    int calculatearea()
    {
        return length * width;
    }
    // display the value of length and width
    void displayvalue(void)
    {
        cout << "length = " << length << ","
             << "width = " << width << endl;
    }
};

int main()
{
    int userl, userwidth;
    cout << "Enter the value length :";
    cin >> userl;
    cout << "Enter the value of width :";
    cin >> userwidth;

    rectangle rec1(userl, userwidth);
    rec1.displayvalue();
    cout << "Area : " << rec1.calculatearea() << endl;
    return 0;
}
