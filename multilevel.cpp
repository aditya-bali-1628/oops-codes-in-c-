#include <iostream>
using namespace std;
// multilevel inharitance
/*
    note : inharitance multilevel inharitance happend from 
    class base a ----> derived class b ------> derivec b ------> derived class c

*/
class student
{
    // protected member of student class
protected:
    int rollnumber;
    // public member of student class
public:
    // setroll number of student
    void setrollnumber(int r)
    {
        rollnumber = r;
    }
    // display the roll number of student
    void displayrollnumber()
    {
        cout << "The roll number is :" << rollnumber << endl;
    }
};
// derived class one
class exam : public student
{
    // protected member of exam
protected:
    float english;
    float maths;
    float science;
    // public function member of exam class
public:
    // setmarks function 
    void setmarks(float e, float m, float s)
    {
        english = e;
        maths = m;
        science = s;
    }
    // display marks
    void displaymarks()
    {
        cout << "obtained marks in English Subject :" << english << endl;
        cout << "obtained marks in Maths Subject : " << maths << endl;
        cout << "obtained marks in Science Subject :" << science << endl;
    }
};

// derived class second
class result : public exam
{
    // protected member
protected:
    float result;
    // public member of result class
public:
    // dipslay the result
    void displayresult()
    {
        // inharite the displayroll number 24

        displayrollnumber();
        // inharite the displaymarks function
        displaymarks();
        // calculate percentage
        int totalmarks = english + maths + science;
        result = static_cast<float>(totalmarks) / 3.0;
        // display result
        cout << " The Total percentage is :" << result << "%" << endl;
    }
};

int main()
{
    //oject of result class
    result aditya;
    int rollnum;
    cout << "Enter the rollnumber :";
    cin >> rollnum;
    float eng;
    float math;
    float sci;
    cout << "Enter the English subject marks :";
    cin >> eng;
    cout << "Enter the maths subject marks :";
    cin >> math;
    cout << "Enter the science subject marks :";
    cin >> sci;
    //calling function of setmarks
    aditya.setmarks(eng, math, sci);
    //calling function  of display result
    aditya.displayresult();
    return 0;
}
