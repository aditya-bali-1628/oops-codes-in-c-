#include <iostream>
using namespace std;
class areaofcircle
{
    // private access data members
    float area;
    float circum;

public: // public access specifire function
    // create constructor
    areaofcircle(int r)
    {
        area = r;
    }
    // calculate area of circle
    int calculatearea(int r)
    {
        return 3.14 * r * r;
    }
    // calculate area of circumfarnce
    int calculcircumfarnce(int r)
    {
        return 2 * 3.14 * r;
    }
    ~areaofcircle()
    {
        cout<<" distroy the objects !"<<endl;
    }
};

int main()
{
    // create variable for acces perimietrized constructor of arguments
    int red;
    cout << "Enter the redius :";
    cin >> red;
    // add the perimiter in constructor
    areaofcircle circlered(red);
    // display the area of circle
    cout << " Area of circle  = " << circlered.calculatearea(red) << endl;
    // display the area of circumfarance
    cout << "Calculate Area of circumfarnce " << circlered.calculcircumfarnce(red) << endl;
    return 0;
}