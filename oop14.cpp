#include <iostream>
using namespace std;
// Write a program to calculate the average height of all the students of a class.
// The number of students and their heights are entered by the user.

// this is thee fu********ing output of this pirogorororororom
class students
{
private:
    static int rollcounter;
    int rollnum[5];
    int totstudent[5];
    double hight[5];
    double S_hight = 0.0;
    double avghight = 0.0;

public:
    void readdata();
    int settotalhight();
    int displaydata();
};

int students ::rollcounter = 1;

void students ::readdata()
{
    rollnum[5] = rollcounter++;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter detail of students :" << endl;

        cout << "enter student number :" << i + 1 << endl;

        cout << "enter roll number of student :" << endl;
        cin >> rollnum[i];

        cout << "enter hight of students  :" << endl;
        cin >> hight[i];
    }
    cout << endl;
}

int students ::settotalhight()
{
    // calculate hight of students

    for (int i = 0; i < 5; i++)
    {
        S_hight = S_hight + hight[i];
        avghight = S_hight / 5;
    }
}

int students ::displaydata()
{

    cout << "total hight of students in centimeter : " << S_hight << endl;
    cout << "total avrage of student is  :" << avghight << endl;
}

int main()
{
    students divred;
    divred.readdata();
    divred.settotalhight();
    divred.displaydata();
    return 0;
}
