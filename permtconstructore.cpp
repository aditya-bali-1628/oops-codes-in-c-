#include<iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    // permiterized constructor
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "this is point is"
             << "(" << x << "," << y << ")" << endl;
    }
};

int main()
{
    // implicit setvalue
    point p(1, 1);
    p.displaypoint();
    // implicit setvalue
    point q(1, 3);
    q.displaypoint();
    return 0;
}
