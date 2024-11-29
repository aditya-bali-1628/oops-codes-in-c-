#include <iostream>
using namespace std;

class complex;

class calculatar
{
    public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(complex, complex);
    int sumcomcomplex(complex, complex);

};
class complex
{

    int a, b;

    friend int calculatar :: sumrealcomplex(complex, complex);
    friend int calculatar:: sumcomcomplex(complex, complex);
    // declaring friend function accessing to private member of a , b
   // friend complex sumofnum(complex o1, complex o2);

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber()
    {
        cout << a << " + " << b << "i" << endl;
    }
};
int calculatar:: sumrealcomplex(complex o1, complex  o2)
{
    return(o1.a + o2.a);
}
int calculatar :: sumcomcomplex(complex o1, complex o2){
    return (o1.b + o2.b);
}

int main()
{
    complex o1,o2;
    o1.setdata(1,3);
    o1.printnumber();
    o2.setdata(2,4);
    o2.printnumber();
    calculatar cal;
    int result = cal.add(3,2);
    cout<<"sum of two number = "<<result<<endl;
    int res = cal.sumrealcomplex(o1, o2);
    cout<<"sum of real number o1 and o2 is = "<<res<<endl;
    int resc = cal.sumcomcomplex(o1,o2);
    cout<<"sum of complex number o1 and o2 is = "<<resc<<endl;
    return 0;
}