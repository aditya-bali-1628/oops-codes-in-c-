#include <iostream>
using namespace std;
// Example: defining the constructor within the class

class student
{
private:
    char name[50];
    int roll;
    double fees;

public:
    student(void)
    {
        cout << "Enter the name :";
        cin >> name;
        cout << "Enter the roll number :";
        cin >> roll;
        cout << "Enetr the fees of student :";
        cin >> fees;
    }

    void displaycharecter()
    {
        cout<<endl;
        cout << "Name of the  student is :" << name << endl;
        cout << "Noll number of student  : " << roll << endl;
        cout << "Total fees of the student:" << fees << endl;
    }
   
};

int main()
{
    student s;
    s.displaycharecter();
    return 0;
}