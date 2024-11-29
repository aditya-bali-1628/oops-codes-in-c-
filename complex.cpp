#include <iostream>
using namespace std;

// sum of complex number  using friend function
// vectore of addition of 4 numbers using i
// 1 + 5i
// 5 + 6i
//-------
// 6 + 12i

class complex
{

    int a, b;
    // declaring friend function accessing to private member of a , b
    friend complex sumofnum(complex o1, complex o2);

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void putdata(void);
};

void complex :: putdata(void)
{
    cout<<a<<" + "<<b<<" i "<<endl;
}
 
 complex sumofnum(complex o1, complex o2)
 {
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));

    return o3; 
 }

 int main()
 {
    complex c1,c2,sum;
    c1.setdata(1,4);
    c1.putdata();

    c2.setdata(5,6);
    c2.putdata();

    sum = sumofnum(c1,c2);
    sum.putdata();
    return 0;

 }
