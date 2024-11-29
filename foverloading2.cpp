#include <iostream> 
using namespace std;
// function overloading in c++
// function declaration
//  rectangle of area
int formula(int a, int b);
// cuboid
int formula(int a);


// area of circle
int formula(float a, int b, int c);
// area of traingle
int formula(int d, int e, int f);

int main()
{
    cout << "ractangle of area of length x width = " << formula(3, 5)<<endl;
    cout << "cuboid  of a = " << formula(3)<<endl;
    cout << "Area of circle = " << formula(3, 5)<<endl;
    cout << "Ractangle of area of length x width = " << formula(3, 5, 6)<<endl;

    return 0;
}

// function definition
int formula(int a, int b)
{
    return a * b;
}
// cuboid
int formula(int a)
{
    return a * a ;
}
// area of square

int formula(float a, int b, int c)
{
    return 3.14 * b * c;
}
int formula(int d, int e, int f)
{
    return d * e / f;
}
